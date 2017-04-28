#include "myfile.h"

#include <QDebug>
#include <QCoreApplication>
MyFile * MyFile::m_instance = NULL;

MyFile::MyFile()
{
     runPath = QCoreApplication::applicationDirPath()+"/SystemConfig.ini";

     m_configFile = new QSettings(runPath ,QSettings::IniFormat);

//     CreateFileName();
}
MyFile::MyFile(QString FileName)
{
     m_configFile = new QSettings(FileName ,QSettings::IniFormat);
}
MyFile *MyFile::GetInstance()
{
    if(NULL == m_instance)
    {
        m_instance = new MyFile();

    }
    return m_instance;
}
bool MyFile::OpenState()
{
    return true;
}

SystemConfig MyFile::CreateFileName()
{
//    QSettings *SystemConfigFile=new QSettings(path,QSettings::IniFormat,0);
    m_configFile->setIniCodec("UTF-8");
    m_configFile->beginReadArray("systemconfig");
    QString m=m_configFile->value("IP_Address").toString();
    SystemConfig adminsystemparameters;
    if(m.isEmpty())
    {
        m_configFile->setValue("IP_Address", "192.168.26.16");
        m_configFile->setValue("User_Name", "root");
        m_configFile->setValue("Password", "root");
        m_configFile->sync();   //立既写入
    }

    adminsystemparameters.IP_Address=m_configFile->value("IP_Address","192.168.26.16").toString();
    adminsystemparameters.User_Name=m_configFile->value("User_Name","root").toString();
    adminsystemparameters.Password=m_configFile->value("Password","root").toString();

    m_configFile->endArray();
    delete m_configFile;
    m_configFile=NULL;
    return adminsystemparameters;
}


QString MyFile::ReadValue(QString section,QString key)
{
    QString sectKey ="/" + section +"/"+ key;
    qDebug()<<sectKey;
    return  m_configFile->value(sectKey).toString();

}

void MyFile::WriteValue(QString section, QString key, QString value)
{
    QString sectKey ="/"+ section +"/"+ key;
    m_configFile->setValue(sectKey, value);
}
