#ifndef RIS_EVENT_H
#define RIS_EVENT_H

#include <QEvent>
class RIS_Message;

class RIS_Event : public QEvent
{
public:
    RIS_Event(QEvent::Type,RIS_Message*);
    RIS_Event(QEvent::Type);
    ~RIS_Event();
    void data(RIS_Message* data);
    RIS_Message* data();

private:
    RIS_Message* data_;

};

#endif // PLDS_EVENT_H
