#include "ris_message.h"
#include "common.h"

RIS_Message::RIS_Message()
{
    type_ = 0;
}

RIS_Message::RIS_Message(quint32 type)
{
    type_ = type;
}

RIS_Message::RIS_Message(quint32 type,QVariant param)
{
    type_ = type;
    this->vtParamX_ = param;
}

RIS_Message::RIS_Message(quint32 type, QVariant paramX,QVariant paramY)
{
    type_ = type;
    this->vtParamX_ = paramX;
    this->vtParamY_ = paramY;
}

RIS_Message::RIS_Message(quint32 type,void* param)
{
    type_ = type;
    this->dataX_ = param;
}

RIS_Message::RIS_Message(quint32 type,void* paramX,void* paramY)
{
    type_ = type;
    this->dataX_ = paramX;
    this->dataY_ = paramY;
}

quint32 RIS_Message::group()
{
    return (type_>>24)&(~(ACTION_FLAG) & 0x000000FF);
}

quint32 RIS_Message::subgroup()
{
    return (type_>>16) & 0x000000FF;
}

bool RIS_Message::isAction()
{
    return 0 !=((type_>>24)&ACTION_FLAG);
}

bool RIS_Message::isEvent()
{
    return 0 == ((type_>>24)&ACTION_FLAG);
}

QVariant& RIS_Message::paramX()
{
    return this->vtParamX_;
}

QVariant& RIS_Message::paramY()
{
    return this->vtParamY_;
}
