#include "ris_Log.h"
#include <iostream>
#include <QtCore>
#include <QDebug>

#define LOGDIR "ris_log"
#define LOGEXIT "LOGEXIT"

RIS_Log *RIS_Log::instance_ = NULL;

#define _CONSOLE_DEBUG

RIS_Log::RIS_Log(QObject *parent,QThread::Priority priority)
    :QThread(parent),priority_(priority)
{
    line_ = 0;


    QDir dir = QDir(QCoreApplication::applicationDirPath());

    if(!dir.exists(LOGDIR))
    {
        dir.mkdir(LOGDIR);
    }

    fileDir_ = QCoreApplication::applicationDirPath()+"//"+LOGDIR;

    fileName_ = "ris"+QDateTime::currentDateTime().toString("yyMMddhhmmss");

    fileName_ = fileDir_+"//"+fileName_+".txt";

//    DBINFO(fileName_.toLocal8Bit().data(),0);
}

RIS_Log* RIS_Log::instance()
{
    if(NULL == instance_)
    {
        instance_ = new RIS_Log();
    }

    return instance_;
}

void RIS_Log::workerThreadMain(QString &msg)
{
    QString head = QDateTime::currentDateTime().toString("hh:mm:ss ");
    head+=msg;

    QFile file;
    file.setFileName(fileName_);
    QTextStream txtOut;

    if(file.open(QIODevice::WriteOnly|QIODevice::Append))
    {
        txtOut.setDevice(&file);
        txtOut<<head<<"\r\n";

#ifdef _CONSOLE_DEBUG

//        qDebug()<<head.toStdString();
//        qDebug()<<head;

        std::cout<<head.toStdString()<<std::endl;

#endif
        file.close();
    }


    line_++;
    if(line_>=MAX_FILE_LINE)
    {
        fileName_ = "PLDS"+QDateTime::currentDateTime().toString("yyMMddhhmmss");

        fileName_ = fileDir_+"//"+fileName_+".txt";

        line_ = 0;
    }

//    DBINFO("workerThreadMain",0);

}


void RIS_Log::run()
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

        if(msg == QString(LOGEXIT)) break;

        workerThreadMain(msg);

    }
}

void RIS_Log::close_singleton()
{
//    int i=0;
    if(RIS_Log::instance_ == NULL) return;

    RIS_Log::instance()->print_log(QString(LOGEXIT));
    while(RIS_Log::instance_->isRunning())
    {
//      i++;
//      if(i>100000) break;
    }

    delete RIS_Log::instance_;
//    RIS_Log::instance_ = NULL;
}

void RIS_Log::print_log(QString msg)
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



RIS_Log::~RIS_Log()
{
}
