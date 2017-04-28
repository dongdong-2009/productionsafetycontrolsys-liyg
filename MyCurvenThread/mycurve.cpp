#include "mycurve.h"
#include <windows.h>


MyCurve::MyCurve()
{
    //this->setStackSize(1024*1024);
    //SelectDatabase();
    isRun_=true;
}

void MyCurve::run()
{
   // database.ConnectDB();
    while(isRun_)
    {
        SelectDatabase();
        Sleep(1000);
    }

}


bool MyCurve::SelectDatabase()
{
#if 0
 //   ReadDataFromMysql::instance()->openDb();
    QList<Alarm_data> list;

    ReadDataFromMysql::instance()->SelectAlarm_curvenData(list);

    if(list.count()==0)
    {
     //   qDebug()<<"SelectDatabase no.02";
        return 0;
    }

     QString  alarm_event;
     QString alarm_areaid;
     QString temp;
     Alarm_data data;
    for(int i=0;i<list.count();++i)
    {
      data=list.at(i);
     // alarmIDs_.data.alarmID;
      alarm_event = data.alarm_event;
      alarm_areaid=data.areaID;
 //     qDebug()<<"alarm="<<alarm_areaid<<"111="<<alarm_event;
      QSet<QString>::iterator it=alarmIDs_.end();

      if(alarm_event.length()!=0)
      {
          //qDebug()<<"SelectDatabase no.03"<<alarm_event;
          if(it!=alarmIDs_.find(data.alarmID))
          {
//                qDebug()<<"1111";
          }
          else
          {            
              temp=QString("%1,%2").arg(alarm_areaid).arg(alarm_event);
              temp=temp.replace("kV","千伏");
              textSpeech.speak(temp);
//              database->Updatastatus_alarmtable(data.alarmID);
              ReadDataFromMysql::instance()->Updatastatus_alarmtable(data.alarmID);
              alarmIDs_.insert(data.alarmID);
          }
      }
    }

    if(alarmIDs_.size()>=MAXSIZE)
    {
        alarmIDs_.clear();
    }

     return true;

#endif
    isWork=ReadDataFromMysql::instance()->IsAreaAlarm();

    return true;
}

bool MyCurve::Getiswork()
{
    return isWork;
}
