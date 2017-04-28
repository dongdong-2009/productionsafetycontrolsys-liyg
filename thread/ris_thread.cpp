#include "ris_thread.h"
#include "ris_event.h"
#include <QCoreApplication>
#include "core/ris_message.h"
#include <QEvent>


RIS_Thread::RIS_Thread(QObject *parent,QThread::Priority priority)
    :QThread(parent),priority_(priority)
{
    tmpMsg_ = NULL;
}

RIS_Thread::~RIS_Thread()
{
    if(tmpMsg_ != NULL)
    {
        delete tmpMsg_;
        tmpMsg_ = NULL;
    }
}

void RIS_Thread::queueAction(RIS_Message &msg)
{
    if(!isRunning())
    {
        start(priority_);
    }

    mutex_.lock();
    lstBuffer_.push_back(msg);
    mutex_.unlock();

    mutex_.lock();
    if(!lstBuffer_.empty())
        bufferEmpty_.wakeOne();
    mutex_.unlock();
}

void RIS_Thread::run()
{
//    DBINFO("worker thread start @",this);
    for(;;)
    {
        mutex_.lock();
        if(lstBuffer_.empty())
            bufferEmpty_.wait(&mutex_);
        mutex_.unlock();
        mutex_.lock();
        RIS_Message msg = lstBuffer_.front();
        lstBuffer_.pop_front();
        mutex_.unlock();
        WorkerThreadMain(msg);
//        if(msg.type() == ACTION_SYSTEM_EXIT) break;
    }
}

void RIS_Thread::postEvent(RIS_Message *msg, quint32 type)
{
//    DBINFO("posting event...","");

    QEvent* qev = new RIS_Event((QEvent::Type)type,msg);
    QCoreApplication::postEvent(parent(),qev,Qt::HighEventPriority);

//    DBINFO("posted event to: ",parent());

}
