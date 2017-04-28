/*******************************************************************************
 工程说明：大唐先一电厂安全程序发布版

 *****************************************************************************/
#include <QApplication>
#include <QFile>
#include <QDebug>
#include <QElapsedTimer>
#include "productionsafetycontrolsys/productionsafetycontrolsys.h"
#include "MyCurvenThread/mycurve.h"
#include "textspeech/textspeech.h"
#include "readdatafrommysql/readdatafrommysql.h"
#include "thread/speak_thread.h"
#include "thread/db_thread.h"
#include "thread/db_thread.h"
#include "core/settings.h"

QString qss;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QFile qssFile(":/image/production.qss");  //读取样式表文件内容并执行样式
    qssFile.open(QFile::ReadOnly);
    if(qssFile.isOpen())
    {
        qss=QLatin1String(qssFile.readAll());
        a.setStyleSheet(qss);
    }

    qssFile.close();

    Config.debug();
    TextSpeech textspeech;
    textspeech.speak("");

    Speak("欢迎进入大唐湘潭电厂作业安全智能管控系统!");
    if(!ReadDataFromMysql::instance()->openDb())
    {
         Speak("大唐湘潭电厂作业安全智能管控系统数据库连接失败!请检查数据库配置文件!");
    }
    ProductionSafetyControlSys w;
    w.show();

    DB_Thread::instance()->init();

    return a.exec();
}
