#include "ris_event.h"


RIS_Event::RIS_Event(QEvent::Type type) :
    QEvent(type),data_(0)
{  
}

RIS_Event::RIS_Event(QEvent::Type type, RIS_Message *data)
    :QEvent(type),data_(data)
{
}

RIS_Event::~RIS_Event()
{
    if(NULL != data_)
          delete data_;
}

void RIS_Event::data(RIS_Message* data)
{
    data_= data;
}

RIS_Message* RIS_Event::data()
{
    return data_;
}
