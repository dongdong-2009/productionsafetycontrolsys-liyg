#ifndef RIS_THREAD_H
#define RIS_THREAD_H

//#include "common.h"
#include <QThread>
#include <QMutex>
#include <QWaitCondition>
#include <QList>

class RIS_Message;
class QEvent;

class RIS_Thread :public QThread
{
public:
    RIS_Thread(QObject *parent = 0,QThread::Priority priority=QThread::NormalPriority);
    ~RIS_Thread();
    void queueAction(RIS_Message& msg);
protected:
    void run();
    QMutex mutex_;
    QWaitCondition bufferEmpty_;
    QList<RIS_Message> lstBuffer_;

    virtual void WorkerThreadMain(RIS_Message& msg) = 0;

    void postEvent(RIS_Message* msg,quint32 type);

    RIS_Message *tmpMsg_;
private:
    QThread::Priority priority_;
};

#endif // PLDS_THREAD_H
