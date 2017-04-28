#include "isubject.h"
#include "iobserver.h"
#include "ris_message.h"
#include "common.h"
#include "log/ris_log.h"

ISubject::ISubject()
{
}

void ISubject::attachObserver(IObserver *observer)
{
    bool b = false;
    for(int i = 0; i<lstObserver_.count(); i++)
    {
        if(lstObserver_.at(i) == observer)
        {
           b = true;
        }

    }

    if(!b) lstObserver_<<observer;
}

void ISubject::detachObserver(IObserver *observer)
{
    lstObserver_.removeAll(observer);
}

void ISubject::broadcastEvent(RIS_Message &msg)
{
//    DBINFO("broadcasted message :",msg.type());

//    print_info(("ISubject::broadcastEvent no.01"));

//    print_info(QString("lstObserver count=%1").arg(lstObserver_.count()));

    for(int i = 0; i<lstObserver_.count(); i++)
    {
        lstObserver_.at(i)->onEvent(msg);
    }
}
