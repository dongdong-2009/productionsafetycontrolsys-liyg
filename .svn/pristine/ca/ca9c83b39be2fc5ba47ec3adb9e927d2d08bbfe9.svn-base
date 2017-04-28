#include "speak_thread.h"
#include "../log/ris_log.h"

#include <QtCore>
#include <QDebug>

Speak_Thread *Speak_Thread::instance_ = NULL;

Speak_Thread::Speak_Thread(QObject *parent,QThread::Priority priority)
    :QThread(parent),priority_(priority)
{
    //textspeech_ = new TextSpeech();
}

Speak_Thread* Speak_Thread::instance()
{
    if(NULL == instance_)
    {
        instance_ = new Speak_Thread();
    }

    return instance_;
}

void Speak_Thread::workerThreadMain(QString &msg)
{
    textspeech_.speak(msg);

    print_info(msg);

}


void Speak_Thread::run()
{
    for(;;)
    {
        mutex_.lock();
        if(lstBuffer_.empty())
            bufferEmpty_.wait(&mutex_);
        mutex_.unlock();

        mutex_.lock();
        QString msg = lstBuffer_.front();
        lstBuffer_.pop_front();
        mutex_.unlock();

        if(msg == QString(SPEAKEXIT)) break;

        workerThreadMain(msg);

    }
}

void Speak_Thread::close_singleton()
{
    if(Speak_Thread::instance_ == NULL) return;

    Speak_Thread::instance()->speak(QString(SPEAKEXIT));
    while(Speak_Thread::instance_->isRunning())
    {
    }

    delete Speak_Thread::instance_;

    Speak_Thread::instance_ = NULL;

}

void Speak_Thread::speak(QString msg)
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



Speak_Thread::~Speak_Thread()
{
// if(textspeech_ != NULL)
// {
//     delete textspeech_;
//     textspeech_ = NULL;

// }
}
