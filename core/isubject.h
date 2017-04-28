#ifndef ISUBJECT_H
#define ISUBJECT_H

#include <QList>
#include <QObject>

class RIS_Message;
class IObserver;

class ISubject:public QObject
{
public:
    ISubject();

    virtual void startAction(RIS_Message& msg) = 0;
    void attachObserver(IObserver* observer);
    void detachObserver(IObserver* observer);

protected:
    void broadcastEvent(RIS_Message& msg);
    QList<IObserver*> lstObserver_;
};

#endif // PLDS_ISUBJECT_H
