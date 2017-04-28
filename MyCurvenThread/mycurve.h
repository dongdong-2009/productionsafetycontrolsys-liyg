#ifndef MYCURVE_H
#define MYCURVE_H

#include <QWidget>
#include "readdatafrommysql/readdatafrommysql.h"
#include "textspeech/textspeech.h"
#include <QObject>
#include <QThread>
#include <QSet>

#define MAXSIZE  2000
class MyCurve:public QThread
{
public:
    MyCurve();
    void run();
    bool SelectDatabase();

    void setRun(bool b){isRun_=b;}
    bool Getiswork();
private:
    QSet<QString> alarmIDs_ ;
    bool isRun_;
    TextSpeech textSpeech;
    bool isWork;
};

#endif // MYCURVE_H
