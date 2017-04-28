#ifndef IOBSERVER_H
#define IOBSERVER_H

#include "ris_message.h"
#include "isubject.h"

class IObserver
{
public:
    IObserver();
    virtual void onEvent(RIS_Message&)=0;
    virtual void setSubject(ISubject *s);
    ISubject* getSubject(){ return subject_;}

protected:
    ISubject* subject_;
};

#endif // PLDS_IOBSERVER_H
