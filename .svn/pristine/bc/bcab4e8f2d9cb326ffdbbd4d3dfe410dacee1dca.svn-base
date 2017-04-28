#ifndef MYFILE_H
#define MYFILE_H

#include <QSettings>
#include <QString>
#include <QFile>
#include <QIODevice>


//系统配置文件存放
typedef struct SystemSetup
{
    QString IP_Address;
    QString User_Name;
    QString Password;
}SystemConfig;

class MyFile
{
public:
    MyFile();
    MyFile(QString FileName);
    static MyFile * GetInstance();
    QString ReadValue(QString section,QString key);
    void    WriteValue(QString section,QString key ,QString value);
    bool    OpenState();
    SystemConfig CreateFileName();
private:
    QSettings * m_configFile;
    static MyFile * m_instance;
     QString runPath;
};

#endif // MYFILE_H
