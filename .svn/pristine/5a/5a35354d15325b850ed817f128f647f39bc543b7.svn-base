#include "db_thread.h"
#include "../core/msg_def.h"
#include "../core/ris_message.h"
#include "../log/ris_log.h"
#include "../readdatafrommysql/readdatafrommysql.h"
#include "speak_thread.h"
#include "../core/settings.h"


DB_Thread* DB_Thread::instance_ = NULL;

DB_Thread::DB_Thread(QObject *parent, QThread::Priority priority)
    :RIS_Thread(parent,priority)
{


}

QSqlDatabase& DB_Thread::getDb(const QString &connection)
{
    db_ = QSqlDatabase::database(connection);

    return db_;
}



void DB_Thread::closeDb()
{

    db_.close();;
}

bool DB_Thread::init()
{

    return openDb(DB_THREAD_CONNECTION);
}

bool DB_Thread::openDb(const QString &dbconnection)
{
    db_ = QSqlDatabase::addDatabase(Config.DbType,dbconnection);
    db_.setHostName(Config.HostName);
    db_.setUserName(Config.UserName);
    db_.setPassword(Config.UserPassword);
    db_.setPort(Config.HostPort);
    db_.setDatabaseName(Config.Databasename);

    return db_.open();
}

void DB_Thread::sm_alarm_table()
{
    QList<Alarm_data> list;

    Alarm_data data;

  //  db_ = getDb(DB_THREAD_CONNECTION);

    if(!db_.isOpen())
    {
        if(!db_.open())
        {
            print_info(" sm_alarm_table open database is error.");

            return;
        }
        else
        {
             print_info(" sm_alarm_table open database is success.");
        }
    }


    QSqlQuery query(db_);

   if (query.exec(SQL_SELECTALARMDATA))
   {
       while (query.next()) {

           data.alarmID=query.value("alarm_id").toString();
           data.eventID=query.value("event_id").toString();
           data.alarm_event=query.value("alarm_content").toString();
           data.areaID=query.value("area_name").toString();

           list.push_back(data);
       }
   }
   else
   {
       return;
   }
//        print_info(QString("list count = %1").arg(list.count()));

       if(list.count()==0)
       {
              return;
       }

        QString alarm_event;
        QString alarm_areaid;
        QString temp;

       for(int i=0;i<list.count();++i)
       {
         data=list.at(i);
         alarm_event = data.alarm_event;
         alarm_areaid=data.areaID;
         QSet<QString>::iterator it=alarmIDs_.end();

         if(alarm_event.length()!=0)
         {
             if(it!=alarmIDs_.find(data.alarmID))
             {
             }
             else
             {
                 temp=QString("%1,%2").arg(alarm_areaid).arg(alarm_event);
                 temp=temp.replace("kV","千伏");
                 Speak(temp);
             //    print_info(QString("Speak %1").arg(temp));
                 alarmIDs_.insert(data.alarmID);
             }
         }
       }

       if(alarmIDs_.size()>=Config.AlarmBufferMaxSize)
       {
           alarmIDs_.clear();
       }


       return;

}

void DB_Thread::WorkerThreadMain(RIS_Message &msg)
{
    switch(msg.type())
    {
     case SM_ARM_TABLE:

          sm_alarm_table();

        break;
     default:

        break;
    }


}



DB_Thread* DB_Thread::instance()
{

    if(DB_Thread::instance_ == NULL )
    {

       DB_Thread::instance_ = new DB_Thread();
    }

    return DB_Thread::instance_;
}

void DB_Thread::close_singleton()
{

   if(DB_Thread::instance_ != NULL)
   {

       delete DB_Thread::instance_;

       DB_Thread::instance_ = NULL;
   }
}
DB_Thread::~DB_Thread()
{

    db_.close();
}

void DB_Thread::onEvent(RIS_Message &msg)
{

     this->queueAction(msg);
}
