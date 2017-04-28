#ifndef SPEAK_THREAD_H
#define SPEAK_THREAD_H

#include "../textspeech/textspeech.h"
#include <QMutex>
#include <QWaitCondition>
#include <QThread>


#define SPEAKEXIT "speakexit"

#define Speak(x) Speak_Thread::instance()->speak(QString(x))


class Speak_Thread : public QThread
{
public:
    static Speak_Thread* instance();
    static void close_singleton();
    void speak(QString msg);

protected:
    Speak_Thread(QObject *parent = 0, QThread::Priority priority = QThread::NormalPriority);
    ~Speak_Thread();

    void run();
    QMutex mutex_;
    QWaitCondition bufferEmpty_;
    QList<QString> lstBuffer_;
    void workerThreadMain(QString &msg);
private:
    static Speak_Thread* instance_;
    QThread::Priority priority_;

    TextSpeech textspeech_;

};

#endif // SPEAK_THREAD_H
