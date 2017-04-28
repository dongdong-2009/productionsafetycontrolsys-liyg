#ifndef DB_THREAD_H
#define DB_THREAD_H
#include <QString>
#include <QSqlDatabase>
#include <QSet>

#include "ris_thread.h"

#define DB_THREAD_CONNECTION "DB_THREAD_CONNECTION"


class RIS_Message;

class DB_Thread : public RIS_Thread
{
public:

    virtual ~DB_Thread();

    static DB_Thread* instance();
    static void close_singleton();

    bool init();

    virtual void onEvent(RIS_Message &);

protected:

    virtual void WorkerThreadMain(RIS_Message &msg);

    void sm_alarm_table();

protected:

    bool openDb(const QString& dbconnection);

    void closeDb();

    QSqlDatabase& getDb(const QString& connection);



private:

    QSqlDatabase db_;

    QSet<QString> alarmIDs_;

    static DB_Thread* instance_;

    DB_Thread(QObject *parent = 0,QThread::Priority priority = QThread::NormalPriority);

};

#endif // DB_THREAD_H
