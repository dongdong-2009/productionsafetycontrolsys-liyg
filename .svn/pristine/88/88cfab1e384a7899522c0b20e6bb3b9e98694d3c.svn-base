#include "camerawidget.h"
#include "ui_camerawidget.h"


CameraWidget::CameraWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CameraWidget)
{
    ui->setupUi(this);


    InitListWidget();  //初始化listwidget
    InitWidget();

    manager=new QNetworkAccessManager(this);
    //重点区域人员查询
//    Importarea=new ImportantArea();
//    Hk_view=new HK_Video();
//    Hk_view->database = &database;
//    database.ConnectDB();
  //  ui->stackedWidget->addWidget(Hk_view);
//    connect(Importarea,SIGNAL(View_Id(QString)),this,SLOT(View(QString)));  //kfss add

    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(CamertimerUpdate()));
    timer->start(1000);

    connect(manager,SIGNAL(finished(QNetworkReply*)),this,SLOT(ReceiveredData(QNetworkReply*)));
}

CameraWidget::~CameraWidget()
{

    delete ui;
}

//初始化界面控件
void CameraWidget::InitWidget()
{
    ui->frame_12->setStyleSheet("QFrame{background-color: rgb(60, 61, 66)}");
    ui->label_21->setVisible(false);
    ui->label_22->setVisible(false);
    ui->label_23->setVisible(false);
    ui->label_24->setVisible(false);
    Target_Name.clear();
    Button_List.clear();
}

void CameraWidget::TableWidgetInit()
{
    QStringList header1,header2;
    ui->tableWidget_Work->setColumnCount(4);
    ui->tableWidget_Work->setRowCount(10);
	header1 << QStringLiteral("作业名称") << QStringLiteral("责任人") << QStringLiteral("作业状态") << QStringLiteral("作业类型");
    ui->tableWidget_Work->setHorizontalHeaderLabels(header1);
    ui->tableWidget_Work->setColumnWidth(0,305); //第1列宽度
    ui->tableWidget_Work->setColumnWidth(1,100); //第2列宽度
    ui->tableWidget_Work->setColumnWidth(2,110); //第3列宽度
    ui->tableWidget_Work->setColumnWidth(3,150); //第4列宽度

    ui->tableWidget_Work->verticalHeader()->setHidden(true);
    ui->tableWidget_Work->setEditTriggers(QAbstractItemView::NoEditTriggers);  //表格不可编辑
    ui->tableWidget_Work->setAlternatingRowColors(true);  //设置表格颜色交替显示
    ui->tableWidget_Work->setFocusPolicy(Qt::NoFocus);   //设置表格点击无焦点
    ui->tableWidget_Work->setSelectionBehavior(QAbstractItemView::SelectRows);  //设置表格点击为整行选中
    ui->tableWidget_Work->horizontalHeader()->setFixedHeight(40); //设置水平表头高度
    ui->tableWidget_Work->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
//    ui->tableWidget_Work->setStyleSheet(QString("QTableWidget{font-family:'Microsoft YaHei';font-size:14px;color:#ffffff;\n"
//                                             "alternate-background-color:rgb(75,74,79);\n"
//                                           "background-color:rgb(255,255,255,0)}"
//                                             "QTableWidget  QHeaderView::section{border:2px groove gray;"
//                                             "border-radius:5px;padding:2px 4px; height: 30px;color:#ffffff;"
//                                             "background-color:rgb(30,129,161);font: 16px '微软雅黑'}\n"
//                                             "QTableWidget::item:selected{\n"
//                                             "background-color:#297c7c;;\n"
//                                             "}\n"));
/********************************************************************************************/

	header2 << QStringLiteral("告警事件") << QStringLiteral("告警级别") << QStringLiteral("负责人") << QStringLiteral("作业内容") << QStringLiteral("告警源") << QStringLiteral("发生时间") << "" << "" << "";
    ui->tableWidget_Alarm->setHorizontalHeaderLabels(header2);
    ui->tableWidget_Alarm->setColumnWidth(0,150); //第1列宽度
    ui->tableWidget_Alarm->setColumnWidth(1,67); //第2列宽度
    ui->tableWidget_Alarm->setColumnWidth(2,100); //第3列宽度
    ui->tableWidget_Alarm->setColumnWidth(3,310); //第4列宽度
    ui->tableWidget_Alarm->setColumnWidth(4,250); //第5列宽度
    ui->tableWidget_Alarm->setColumnWidth(5,150); //第6列宽度
    ui->tableWidget_Alarm->setColumnWidth(6,100); //第7列宽度
    ui->tableWidget_Alarm->setColumnWidth(7,100); //第8列宽度
    ui->tableWidget_Alarm->setColumnWidth(8,110); //第9列宽度
    ui->tableWidget_Alarm->verticalHeader()->setHidden(true);  //隐藏垂直表头
    ui->tableWidget_Alarm->horizontalHeader()->setFixedHeight(40); //设置水平表头高度
    ui->tableWidget_Alarm->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    ui->tableWidget_Alarm->setEditTriggers(QAbstractItemView::NoEditTriggers);  //设置表格为不可编辑状态
    ui->tableWidget_Alarm->setFocusPolicy(Qt::NoFocus);   //设置表格点击无焦点
    ui->tableWidget_Alarm->setSelectionBehavior(QAbstractItemView::SelectRows);  //设置表格点击为整行选中
    ui->tableWidget_Alarm->setAlternatingRowColors(true);  //设置表格颜色交替显示

    Update_list();
    //更新门,注意设置了样式表后设置men的位置无效了
    Update_door_state();
}


void CameraWidget::Updata_Door_State()
{
    //更新门,注意设置了样式表后设置men的位置无效了
    Door_Status=ReadDataFromMysql::instance()->Door_State();
    if((Door_Status==4)||(Door_Status==6))
    {//开门
        Door_Status_Real=1;
        ui->Door_Button->setStyleSheet("QPushButton{border-image: url(:/image/room_open.png);}"
                                       "QPushButton:hover{border-image: url(:/image/room_open_hover.png);}"
                                       "QPushButton:pressed{border-image: url(:/image/room_open_press.png);}");
    }
    else if((Door_Status==5)||(Door_Status==7))
    {
        Door_Status_Real=0;
        ui->Door_Button->setStyleSheet("QPushButton{border-image: url(:/image/10.png);}"
                                       "QPushButton:hover{border-image: url(:/image/door_hover.png);}"
                                       "QPushButton:pressed{border-image: url(:/image/door_press.png);}");
    }
    else
    {
        ui->Door_Button->setStyleSheet("QPushButton{border-image: url(:/image/nostate.png);}"
                                       "QPushButton:hover{border-image: url(:/image/nostate.png);}"
                                       "QPushButton:pressed{border-image: url(:/image/nostate.png);}");

    }
}

void CameraWidget::InitListWidget()
{
//    ui->listWidget->setFlow(QListWidget::LeftToRight);    //设置listwidget水平摆放
//    ui->listWidget->setViewMode(QListWidget::IconMode);
    ui->Camera_listWidget->setSpacing(10);                     //设置间隔
    ui->Camera_listWidget->setCurrentRow(0);
    ui->Camera_listWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff); //去掉垂直滚动条
    ui->Door_Button->setStyleSheet("QPushButton{border-image: url(:/image/nostate.png);}"
                                   "QPushButton:hover{border-image: url(:/image/nostate.png);}"
                                   "QPushButton:pressed{border-image: url(:/image/nostate.png);}");
    Door_Status=3;                        //状态不处理
    Door_Status_Real=0;                   //默认关闭
    Alarm_Lamp_Status=0;                  //默认是不告警的
    Area_Count=0;
    Current_Row=0;
    BackUp_List.clear();

    TableWidgetInit();  //初始化表格
//    ui->Camera_listWidget->setStyleSheet("QListWidget{background:rgb(59,64,70);color:#19649F;border:0px solid gray;"
//                                  "padding:2px 2px 2px 2px;}");
    ui->Video_Button->setStyleSheet("QPushButton{border-image: url(:/image/securitycamera.png);}"
                                    "QPushButton:hover{border-image: url(:/image/securitycamera_hover.png);}"
                                    "QPushButton:pressed{border-image: url(:/image/securitycamera_press.png);}");
    ui->Alarm_Lamp_Button->setStyleSheet("QPushButton{border-image: url(:/image/ooopic_1437667045.png);}"
                                         "QPushButton:hover{border-image: url(:/image/ooopic_1437667045_hover.png);}"
                                         "QPushButton:pressed{border-image: url(:/image/ooopic_1437667045_press.png);}");
}



void CameraWidget::Update_list()
{
      QList<QString> Current_Area_List;
      int i=0;
      Current_Area_List=ReadDataFromMysql::instance()->Updata_Area_List();
      static int Record=0;

      QPushButton * Button=NULL;

      for(i=0;i<Current_Area_List.size();i++)
      {
        for(int j=0;j<BackUp_Area_List.size();j++)
        {
          if(Current_Area_List.at(i)==BackUp_Area_List.at(j))
          {
            break;
          }
        }
        if((i==BackUp_Area_List.size())||(0==BackUp_Area_List.size()))
        {
            BackUp_Area_List<<Current_Area_List.at(i);
            Button=new QPushButton();

            Button->setText(Current_Area_List.at(i));
//            Button->setFixedSize(150,30);
            Button->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
            Button->setStyleSheet(" QPushButton{border:1px solid;border-color:rgb(59,64,70);font-family:'Microsoft YaHei';font-size:12px;color:#ffffff; }\
                                  QPushButton:hover{background-color:rgb(48,57,66)} \
                                  QPushButton:pressed {background-color: rgb(54, 114, 106)}");

            QListWidgetItem *item1=new QListWidgetItem();
            item1->setSizeHint(QSize(150,20));

            ui->Camera_listWidget->addItem(item1);
            ui->Camera_listWidget->setItemWidget(item1,Button);
            Button_List<<Button;
           connect(Button,SIGNAL(clicked(bool)),this,SLOT(Button_Clicked()));
            if(Record==0)
            {
              Record=1;
              emit Button->clicked(true);
            }
        }
      }
}

//更新门的状态
void CameraWidget::Update_door_state()
{
    Door_Status=ReadDataFromMysql::instance()->Door_State();
//    Door_Status=database.Door_State();
    if((Door_Status==4)||(Door_Status==6))
    {//开门
        Door_Status_Real=1;
        ui->Door_Button->setStyleSheet("QPushButton{border-image: url(:/image/room_open.png);}"
                                      "QPushButton:hover{border-image: url(:/image/room_open_hover.png);}"
                                      "QPushButton:pressed{border-image: url(:/image/room_open_press.png);}");
    }
    else if((Door_Status==5)||(Door_Status==7))
    {
        Door_Status_Real=0;
        ui->Door_Button->setStyleSheet("QPushButton{border-image: url(:/image/10.png);}"
                                      "QPushButton:hover{border-image: url(:/image/door_hover.png);}"
                                      "QPushButton:pressed{border-image: url(:/image/door_press.png);}");
    }
    else
    {
      ui->Door_Button->setStyleSheet("QPushButton{border-image: url(:/image/nostate.png);}"
                                    "QPushButton:hover{border-image: url(:/image/nostate.png);}"
                                    "QPushButton:pressed{border-image: url(:/image/nostate.png);}");

        }
}

void CameraWidget::Updata_Work_Alarm_Table()
{
    //更新告警表
    QString Text=Area_Name;
 //   qDebug()<<"text="<<Text;
    QString Area_Id=ReadDataFromMysql::instance()->Get_Area_ID(Text);  //获得区域名称
    Current_Area_Id=Area_Id;
 //   qDebug()<<"Current_area_id="<<Current_Area_Id;
    Alarm_Table_Data=ReadDataFromMysql::instance()->Updata_tableWidget_Alarm(Current_Area_Id);
    Updata_Alarm_tableWidget(Alarm_Table_Data);
    //更新工作表
    QList<Work_Table> Work_Table;
    Work_Table=ReadDataFromMysql::instance()->Updata_tableWidget_Work(Text);
    Updata_Work_tableWidget(Work_Table);
    Area_Pic(Area_Id);
}

void CameraWidget::Updata_Alarm_tableWidget(QList<Alarm_Table> Alarm_Data)
{

    ui->tableWidget_Alarm->clear();
    int i=0;
    Alarm_Table Temp;
    for(i=0;i<Alarm_Data.count();i++)
    {
        if(i>6)
        {
            break;
        }

        Temp=Alarm_Data.at(i);
        ui->tableWidget_Alarm->setItem(i, 0, new QTableWidgetItem(Temp.Alarm_Event)); //告警事件
        ui->tableWidget_Alarm->setItem(i, 1, new QTableWidgetItem(Temp.Alarm_Lever));    //告警级别
        ui->tableWidget_Alarm->setItem(i, 2, new QTableWidgetItem(Temp.Controler));       //责任人
        ui->tableWidget_Alarm->setItem(i, 3, new QTableWidgetItem(Temp.Control_Desc));  //作业内容
        ui->tableWidget_Alarm->setItem(i, 4, new QTableWidgetItem(Temp.Alarm_Source));  //告警源
        ui->tableWidget_Alarm->setItem(i, 5, new QTableWidgetItem(Temp.Time));  //发生时间
        ui->tableWidget_Alarm->setItem(i, 6, new QTableWidgetItem(Temp.Video));  //调取视频
        ui->tableWidget_Alarm->setItem(i, 7, new QTableWidgetItem(Temp.Shot));  //调取快照
        ui->tableWidget_Alarm->setItem(i, 8, new QTableWidgetItem(Temp.Enter));  //确定
        //return;
        ui->tableWidget_Alarm->item(i,0)->setTextAlignment(Qt::AlignCenter);
        ui->tableWidget_Alarm->item(i,1)->setTextAlignment(Qt::AlignCenter);
        ui->tableWidget_Alarm->item(i,2)->setTextAlignment(Qt::AlignCenter);
        ui->tableWidget_Alarm->item(i,3)->setTextAlignment(Qt::AlignCenter);
        ui->tableWidget_Alarm->item(i,4)->setTextAlignment(Qt::AlignCenter);
        ui->tableWidget_Alarm->item(i,5)->setTextAlignment(Qt::AlignCenter);
        ui->tableWidget_Alarm->item(i,6)->setTextAlignment(Qt::AlignCenter);
        ui->tableWidget_Alarm->item(i,7)->setTextAlignment(Qt::AlignCenter);
        ui->tableWidget_Alarm->item(i,8)->setTextAlignment(Qt::AlignCenter);
    }
    QStringList header;
	header << QStringLiteral("告警事件") << QStringLiteral("告警级别") << QStringLiteral("负责人") << QStringLiteral("作业内容") << QStringLiteral("告警源") << QStringLiteral("发生时间") << "" << "" << "";
    ui->tableWidget_Alarm->setHorizontalHeaderLabels(header);
}

void CameraWidget::Updata_Work_tableWidget(QList<Work_Table> Alarm_Data)
{
    ui->tableWidget_Work->clear();
    int i=0;
    Work_Table Temp;
    for(i=0;i<Alarm_Data.count();i++)
    {
        if(i>9)
        {
            break;
        }
        Temp=Alarm_Data.at(i);
        ui->tableWidget_Work->setItem(i, 0, new QTableWidgetItem(Temp.Control_Name));
        ui->tableWidget_Work->setItem(i, 1, new QTableWidgetItem(Temp.Controler));
        ui->tableWidget_Work->setItem(i, 2, new QTableWidgetItem(Temp.Status));
        ui->tableWidget_Work->setItem(i, 3, new QTableWidgetItem(Temp.Safe_Status));
        ui->tableWidget_Work->item(i,0)->setTextAlignment(Qt::AlignCenter);
        ui->tableWidget_Work->item(i,1)->setTextAlignment(Qt::AlignCenter);
        ui->tableWidget_Work->item(i,2)->setTextAlignment(Qt::AlignCenter);
        ui->tableWidget_Work->item(i,3)->setTextAlignment(Qt::AlignCenter);
    }
    QStringList header;
	header << QStringLiteral("作业名称") << QStringLiteral("责任人") << QStringLiteral("作业状态") << QStringLiteral("作业类型");
    ui->tableWidget_Work->setHorizontalHeaderLabels(header);
}

void CameraWidget::Area_Pic(QString AreaID)
{
      QPixmap Pix;
      if(AreaID=="0")
      {//6kV工作Ⅳ段配电室
        Pix.load(":/image/Real_Area2.png");
        ui->Door_Button->setVisible(true);
        ui->Alarm_Lamp_Button->setVisible(true);
      }
      else if(AreaID=="1")
      {//一期煤场东
        Pix.load(":/image/mei.png");
        ui->Door_Button->setVisible(false);
        ui->Alarm_Lamp_Button->setVisible(false);
      }
      else
      {//船运码头
        Pix.load(":/image/boat.png");
        ui->Door_Button->setVisible(false);
        ui->Alarm_Lamp_Button->setVisible(false);
      }
      ui->label_17->setPixmap(Pix);
}


void CameraWidget::on_Video_Button_clicked()
{
  //     qDebug()<<"点击摄像头按钮";
         emit CameraClicked();   //摄像头点击事件


}

void CameraWidget::CamertimerUpdate()
{
//    if(9!=ui->stackedWidget->currentIndex())
//    {
//      Hk_view->Timer->stop();
//      Hk_view->Stop_Camera();
//    }

//    if(1!=ReadDataFromMysql::instance()->ConnectDB())
//    {
//      return;
//    }
    Update_list();

    Updata_Work_Alarm_Table();
    Updata_Door_State();

}

void CameraWidget::Button_Clicked()
{
    QObject *obj = sender();
    QPushButton *button_tmp = qobject_cast<QPushButton *>(obj);
    if(button_tmp)
    {
        button_tmp->setDown(true);
//        if((button_tmp!=Last_Button)&&(Last_Button))
//        {
//            Last_Button->setDown(false);
//        }
        Last_Button=button_tmp;
        QString actionName = button_tmp->text();
        Area_Name=actionName;
   //     qDebug()<<"button in"<<Area_Name;
    }
    Updata_Work_Alarm_Table();

}

void CameraWidget::on_Door_Button_clicked()
{
     //点击开门的时候设置开门的样式
//    Choose_Door_State Control_Door;
//    Control_Door.exec();
    QString IP="10.232.31.184";
    QString dev_id="153117477";
    QByteArray post_data="";
//    post_data.append(QString("doorId=%1&").arg(IP));
//    post_data.append(QString("iDevSn=%1&").arg(dev_id));
//    post_data.append(QString("eventFlag=%1&").arg(flag));
    ui->Door_Button->setStyleSheet("QPushButton{border-image:url(:/image/room_open_hover.png)}");
    QUrl url(QString("http://10.232.31.224:8080/WSMC_MOBILE/servlet/doorServlet?doorId=%1&iDevSn=%2&eventFlag=coreOpenDoor").arg(IP).arg(dev_id));
    QNetworkRequest request;
    request.setUrl(url);
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/x-www-form-urlencoded");
    manager->post(request,post_data);
}

void CameraWidget::on_Alarm_Lamp_Button_clicked()
{
    //点了告警灯
    QMessageBox *msgBox = new QMessageBox();
	QPushButton *btn_sure = msgBox->addButton(QStringLiteral("确定"), QMessageBox::AcceptRole);
	QPushButton *bun_cancel = msgBox->addButton(QStringLiteral("取消"), QMessageBox::RejectRole);
    msgBox->setStyleSheet("background-color:white");
    Door_Cmd Cmd_Door;
    Cmd_Door.EVENT_ID=QUuid::createUuid().toString().mid(0,36);
    Cmd_Door.CMD_ID=QUuid::createUuid().toString().mid(0,36);
    Cmd_Door.DEVICE_ID="报警主机1";
    Cmd_Door.CMD_TYPE="200";
    Cmd_Door.SEND_TIME=QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");
    //if(Alarm_Lamp_Status==0)
   // {//没报警时点了报警
        msgBox->addButton(btn_sure,QMessageBox::YesRole);
        msgBox->addButton(bun_cancel,QMessageBox::NoRole);
        msgBox->setWindowTitle("注意");
        msgBox->setText("确定报警吗");
        if(1==msgBox->exec())
        {//取消
            return;
        }

#if 0
        QMessageBox::StandardButton ret=QMessageBox::warning(NULL,tr("注意"), tr("确定报警吗?"),QMessageBox::Ok | QMessageBox::Cancel);
        if(ret != QMessageBox::Ok)
        {
            return;
        }
#endif
        Cmd_Door.CMD_CONTENT=2;

        Cmd_Door.Cmd=0;
        if(true!=ReadDataFromMysql::instance()->Control_Door(Cmd_Door))
        {
            //QMessageBox::critical(NULL, tr("提示"), tr("手动报警执行失败"));
        }
        Cmd_Door.EVENT_ID=QUuid::createUuid().toString().mid(0,36);
        Cmd_Door.CMD_ID=QUuid::createUuid().toString().mid(0,36);
        Cmd_Door.DEVICE_ID="报警主机2";
        Cmd_Door.CMD_TYPE="200";
        Cmd_Door.SEND_TIME=QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");
        Cmd_Door.CMD_CONTENT=2;
        Cmd_Door.Cmd=0;
        if(true!=ReadDataFromMysql::instance()->Control_Door(Cmd_Door))
        {
            //QMessageBox::critical(NULL, tr("提示"), tr("手动报警执行失败"));
        }

        delete msgBox;
#if 0
    }
    else
    {
        //      QMessageBox::StandardButton ret=QMessageBox::warning(NULL,tr("注意"), tr("确定取消报警吗?"),QMessageBox::Ok | QMessageBox::Cancel);
        //      if(ret != QMessageBox::Ok)
        //      {
        //          return;
        //      }
        msgBox->addButton(btn_sure,QMessageBox::YesRole);
        msgBox->addButton(bun_cancel,QMessageBox::NoRole);
        msgBox->setWindowTitle("注意");
        msgBox->setText("确定报警吗");
        if(0==msgBox->exec())
        {//确定
            return;
        }
        Cmd_Door.CMD_CONTENT=0;
    }
    Cmd_Door.Cmd=0;
    if(true!=ReadDataFromMysql::instance()->Control_Door(Cmd_Door))
    {
        //QMessageBox::critical(NULL, tr("提示"), tr("手动报警执行失败"));
    }
    Sleep(2000);
    if(ReadDataFromMysql::instance()->Alarm_Lamp_Do_State(Cmd_Door.EVENT_ID))
    {
        if(Alarm_Lamp_Status==0)
        {//没报警时点了报警
            Alarm_Lamp_Status=1;
        }
        else
        {
            Alarm_Lamp_Status=0;
        }
    }
    else
    {
        QMessageBox *msgBox2 = new QMessageBox();
        msgBox2->setStyleSheet("background-color:white");
        msgBox2->setWindowTitle("提示");
        msgBox2->setText("数据库未联接");
        msgBox2->exec();
        delete msgBox2;
    }

    delete msgBox;
#endif


}

//接受manager完成的数据，并处理
void CameraWidget::ReceiveredData(QNetworkReply *reply)
{
    //获取响应的信息，状态码为200表示正常
      QVariant status_code = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute);
 //     qDebug()<<"status="<<status_code;
      if(reply->error()==QNetworkReply::NoError)   //如果没错，则获得返回值，否则处理错误
      {
          QByteArray bytes=reply->readAll();
          QString string=QString::fromUtf8(bytes);
 //         qDebug()<<"string="<<string;
      }
      else
      {
        //  qDebug()<<"上传出错!";  //错误处理
      }

      reply->deleteLater();
}
