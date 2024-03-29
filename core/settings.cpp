#include "settings.h"
#include "log/ris_log.h"
#include "common.h"

#include <QtCore>


Settings Config;
float g_version = 0.1f;

Settings::Settings():QSettings("./config.ini", QSettings::IniFormat)
{
    init();
}

void Settings::init()
{
    Application = value("Application","XTDC").toString();

    this->HostName = value("HostName","10.232.31.156").toString();
    this->HostPort = value("HostPort",3306).toInt();
    this->UserName = value("UserName","root").toString();
    this->UserPassword = value("UserPassword","root").toString();
    this->DbType = value("DbType","QMYSQL").toString();
    this->Databasename = value("Databasename","wsmc").toString();
    this->AlarmBufferMaxSize = value("AlarmBufferMaxSize",1000).toInt();

    setValue("Application",Application);
    setValue("HostName",this->HostName);
    setValue("HostPort",this->HostPort);
    setValue("UserName",this->UserName);
    setValue("UserPassword",this->UserPassword);
    setValue("Databasename",this->Databasename);
    setValue("DbType",this->DbType);
    setValue("AlarmBufferMaxSize",AlarmBufferMaxSize);



   #if 0
    setValue("Application",Application);
    setValue("RdbIp",RdbIp);
    setValue("RdbPort",RdbPort);
    setValue("RdbUser",RdbUser);
    setValue("RdbPassword",RdbPassword);
    setValue("RdbType",RdbType);
    setValue("RdbServiceName",RdbServiceName);
    setValue("RdbDeviceName",RdbDeviceName);
    setValue("RdbThreadNumber",RdbThreadNumber);

    setValue("OdbIp",OdbIp);
    setValue("OdbPort",OdbPort);
    setValue("OdbName",OdbName);
    setValue("OdbUser",OdbUser);
    setValue("OdbPassword",OdbPassword);
    setValue("OdbType",OdbType);
    setValue("OdbUserReap",OdbUserReap);
    setValue("OdbPasswordReap",OdbPasswordReap);

    setValue("DebugOdb",DebugOdb);
    setValue("DebugRdb",DebugRdb);

    setValue("MemcacheIp",MemcacheIp);
    setValue("MemcachePort",MemcachePort);
    setValue("MemcacheNumber",MemcacheNumber);
    setValue("MemcacheIp1",MemcacheIp1);
    setValue("MemcachePort1",MemcachePort1);

    setValue("CalcCycle",CalcCycle);
	setValue("UpdateODBCycle",UpdateODBCycle);

    CalcFileName = QCoreApplication::applicationDirPath()+"//"+RISCALCNAME;

    setValue("CalcFileName",CalcFileName);
    setValue("ScanCycleTime",ScanCycleTime);

    if(StateFileDir=="" || StateFileName=="" )
    {
        QDir dir = QDir(QCoreApplication::applicationDirPath());

        if(!dir.exists(STATEDIR))
        {
            dir.mkdir(STATEDIR);
        }

        StateFileDir = QCoreApplication::applicationDirPath()+"//"+STATEDIR;

        StateFileName = STATEFILENAME;

        StateFileName = StateFileDir+"//"+StateFileName;

        setValue("StateFileName",StateFileName);
        setValue("StateFileDir",StateFileDir);
    }

    if(VarFileDir =="" || VarFileName =="" )
    {

        QDir dir = QDir(QCoreApplication::applicationDirPath());

        if(!dir.exists(VARDIR))
        {
            dir.mkdir(VARDIR);
        }

        VarFileDir = QCoreApplication::applicationDirPath()+"//"+VARDIR;

        VarFileName = "ris"+QDateTime::currentDateTime().toString("yyMMddhhmmss");

        VarFileName = VarFileDir+"//"+VarFileName+".ini";

        setValue("VarFileName",VarFileName);
        setValue("VarFileDir",VarFileDir);

    }

    if(VarFileInfo == "")
    {
        VarFileInfo = VarFileDir+"//"+VARFILENAME;

        setValue("VarFileInfo",VarFileInfo);
    }

    setValue("VarBackTime",VarBackTime);
    setValue("HistoryPoints",HistoryPoints);
    setValue("WeekBegin",WeekBegin);
    setValue("WeekEnd",WeekEnd);

#endif

}

void Settings::debug()
{
#if 0
    print_info(QString("Application = %1").arg(Application));
    print_info(QString("RdbIp = %1").arg(RdbIp));
    print_info(QString("RdbPort = %1").arg(RdbPort));
    print_info(QString("RdbUser = %1").arg(RdbUser));
    print_info(QString("RdbPassword = %1").arg(RdbPassword));
    print_info(QString("RdbType = %1").arg(RdbType));
    print_info(QString("RdbServiceName = %1").arg(RdbServiceName));
    print_info(QString("RdbDeviceName = %1").arg(RdbDeviceName));
#endif

    print_info(tr("HostName = %1").arg(HostName));
    print_info(tr("HostPort = %1").arg(HostPort));
    print_info(tr("UserName = %1").arg(UserName));
    print_info(tr("UserPassword = %1").arg(UserPassword));
    print_info(tr("DbType = %1").arg(DbType));
    print_info(tr("Databasename = %1").arg(Databasename));
}
