#ifndef RIS_MESSAGE_H
#define RIS_MESSAGE_H

#include <QtGlobal>
#include <QVariant>


class RIS_Message
{
public:
    RIS_Message();

    RIS_Message(quint32 type);

    RIS_Message(quint32 type,QVariant param);
    RIS_Message(quint32 type, QVariant paramX,QVariant paramY);

    RIS_Message(quint32 type,void* param);
    RIS_Message(quint32 type,void* paramX,void* paramY);

    quint32 type(){return type_;}
    void type(quint32 t){type_ = t;}

    quint32 group();
    quint32 subgroup();
    bool isAction();
    bool isEvent();

    QVariant& paramX();
    QVariant& paramY();

    void paramX(QVariant& t){vtParamX_ = t;}
    void paramY(QVariant& t){vtParamY_ = t;}

    void* dataX(){return dataX_;}
    void* dataY(){return dataY_;}

    void dataX(void* x){dataX_ = x;}
    void dataY(void* y){dataY_ = y;}


protected:

    //消息类型
    quint32 type_;

    QVariant vtParamX_;
    QVariant vtParamY_;

    void* dataX_;
    void* dataY_;


};

#endif // RIS_MESSAGE_H
