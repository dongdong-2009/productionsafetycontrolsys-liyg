#ifndef SETTINGS_H
#define SETTINGS_H

#include <QSettings>


class Settings : public QSettings{
    Q_OBJECT

public:
    explicit Settings();
    void init();
    void debug();


    QString Application;

   QString  DbType;
   int      HostPort;
   QString  HostName;
   QString  UserName;
   QString  UserPassword;
   QString  Databasename;

   int AlarmBufferMaxSize;

};

//ϵͳ���е�������Ϣ
extern Settings Config;

#endif // SETTINGS_H
