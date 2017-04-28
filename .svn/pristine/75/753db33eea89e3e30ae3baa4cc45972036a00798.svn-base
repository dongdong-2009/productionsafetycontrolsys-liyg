#include "choosedoorstate/choose_door_state.h"
#include "ui_choose_door_state.h"
#include <QMessageBox>
#include <windows.h>
#include <QUuid>
#include <QDateTime>
#include <qdebug.h>

Choose_Door_State::Choose_Door_State(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::Choose_Door_State)
{
  ui->setupUi(this);
  Command=0;
  Allow_Flag=false;
//  if(NULL!=data_base)
//  {
//      database=data_base;
      //检查门状态
      Door_Status=ReadDataFromMysql::instance()->Door_State();
      if((Door_Status==PLAT_STATUS_ACOPEN)||(Door_Status==PLAT_STATUS_RELEASE))
      {//现在门打开了
        Set_Door_Button_State(OPEN);
      }
      else if((Door_Status==PLAT_STATUS_ACCLOSE)||(Door_Status==PLAT_STATUS_LOCK))
      {//门关了
        Set_Door_Button_State(CLOSE);
      }
//  }
  Allow_Flag=true;
}

Choose_Door_State::~Choose_Door_State()
{
  delete ui;
}

//Door_Status=database->Door_State();

void Choose_Door_State::on_Door_Open_Button_clicked()
{//开门
  if(Allow_Flag==false)
  {
    return;
  }
  Allow_Flag=true;
  Command=1;
  //发送常开命令
  qDebug()<<"开门";
  Control_Door(OPEN);
}

void Choose_Door_State::on_Door_Close_Button_clicked()
{//关闭
  if(Allow_Flag==false)
  {
    return;
  }
  Allow_Flag=true;
  Command=2;
  qDebug()<<"关门";
  Control_Door(CLOSE);
}

int Choose_Door_State::Get_Command()
{
  return Command;
}

void Choose_Door_State::Set_Door_Button_State(int State)
{
  if(State==OPEN)
  {
      ui->Door_Close_Button->setStyleSheet("QPushButton{border-image: url(:/image/doo1.png);}"
                                           "QPushButton:hover{border-image: url(:/image/doo1_Hover.png);}"
                                           "QPushButton:pressed{border-image: url(:/image/doo1_Press.png);}");
      ui->Door_Open_Button->setStyleSheet("border-image: url(:/image/doo1_Press.png)");
  }
  else if(State==CLOSE)
  {      
      ui->Door_Close_Button->setStyleSheet("border-image: url(:/image/doo1_Press.png)");
      ui->Door_Open_Button->setStyleSheet("QPushButton{border-image: url(:/image/door2.png);}"
                                           "QPushButton:hover{border-image: url(:/image/door2_Hover.png);}"
                                           "QPushButton:pressed{border-image: url(:/image/doo1_Press.png);}");
  }
}

void Choose_Door_State::Control_Door(int Command)
{
  QString Temp=QUuid::createUuid().toString();//.mid(1,36);
  qDebug()<<"Temp:"<<Temp;
  Cmd_Door.EVENT_ID=Temp.mid(1,36);//QUuid::createUuid().toString().mid(1,36);
  Cmd_Door.CMD_ID=QUuid::createUuid().toString().mid(1,36);
  Cmd_Door.DEVICE_ID="15";
  Cmd_Door.CMD_TYPE="100";
  Cmd_Door.SEND_TIME=QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");
  Cmd_Door.Cmd=0;

  if(Command==OPEN)
  {
    Cmd_Door.CMD_CONTENT=2;
  }
  else if(Command==CLOSE)
  {
    Cmd_Door.CMD_CONTENT=3;
  }

  if(true!=ReadDataFromMysql::instance()->Control_Door(Cmd_Door))
  {
    //QMessageBox::critical(NULL, tr("提示"), tr("门禁操作执行失败"));
  }
  Sleep(2000);
  if(true==ReadDataFromMysql::instance()->Alarm_Lamp_Do_State(Cmd_Door.EVENT_ID))
  {
    if(Command==OPEN)
    {
      Set_Door_Button_State(OPEN);
    }
    else if(Command==CLOSE)
    {
      Set_Door_Button_State(CLOSE);
    }
  }
  else
    {
      qDebug()<<"命令执行失败了";
    }
}



