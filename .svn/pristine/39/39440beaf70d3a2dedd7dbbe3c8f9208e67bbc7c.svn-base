#include "ticketstepmonitor.h"
#include "ui_ticketstepmonitor.h"

TicketStepMonitor::TicketStepMonitor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TicketStepMonitor)
{
    ui->setupUi(this);
    Opersheet=new OperSheet();
    WorkTick=new WorkSheet();
    updateStepTableData(ReadDataFromMysql::instance()->TwoTicketExecMonitor(QStringLiteral("1")));
 //   connect(ui->tableWidget_TicketStep,&QTableWidget::itemDoubleClicked,this,&TicketStepMonitor::on_tableWidgetClicked);
}

TicketStepMonitor::~TicketStepMonitor()
{
    if(Opersheet)
    {
        delete Opersheet;
    }
    if(WorkTick)
    {
        delete WorkTick;
    }
    delete ui;
}

//初始化表格
void TicketStepMonitor::initTicketStepTable(int ticketType, int rowNum)
{
    QStringList header;
    this->type=ticketType;

    ui->tableWidget_TicketStep->setColumnCount(7);
    ui->tableWidget_TicketStep->setRowCount(rowNum);//设置行,有多少记录设置多少行
    ui->tableWidget_TicketStep->verticalHeader()->setHidden(true); //隐藏垂直表头
    ui->tableWidget_TicketStep->setSelectionBehavior(QAbstractItemView::SelectRows);  //设置选择行为，以行为单位
    ui->tableWidget_TicketStep->setSelectionMode(QAbstractItemView::SingleSelection);  //设置选择模式，选择单行


    //设置水平表头并以工作票或者操作票的不同类型来显示
    header.clear();
    if(ticketType == 0)
    {
        //工作票
		header << QStringLiteral("作业名称") << QStringLiteral("工作许可人确认安措") << QStringLiteral("三讲一落实学习录音") << QStringLiteral("三讲一落实学习签字") << QStringLiteral("工作负责人及工作班组\n成员签到") << QStringLiteral("提交作业") << QStringLiteral("工作负责人及工作班组\n成员签退");
    }
    else if(ticketType == 1)
    {
        //操作票
		header << QStringLiteral("作业名称") << QStringLiteral("三讲一落实学习录音") << QStringLiteral("三讲一落实学习签字") << QStringLiteral("监护人及操作人\n现场签到") << QStringLiteral("开始作业并录音") << QStringLiteral("提交作业") << QStringLiteral("监护人与操作人签退");
    }

    ui->tableWidget_TicketStep->setHorizontalHeaderLabels(header);

    ui->tableWidget_TicketStep->setEditTriggers(QAbstractItemView::NoEditTriggers);  //设置表格为不可编辑状态
    ui->tableWidget_TicketStep->setShowGrid(true);          //显示网格
    ui->tableWidget_TicketStep->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    //ui->tableWidget_TicketStep->setAlternatingRowColors(true);
    ui->tableWidget_TicketStep->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);   //设置隐藏水平滚动条
    //ui->tableWidget_RealMonitor->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->tableWidget_TicketStep->setCurrentCell(-1, -1);
    ui->tableWidget_TicketStep->setSelectionMode(QAbstractItemView::NoSelection);


    ui->tableWidget_TicketStep->setColumnWidth(0,242); //第1列宽度
    ui->tableWidget_TicketStep->setColumnWidth(1,170); //第2列宽度
    ui->tableWidget_TicketStep->setColumnWidth(2,170); //第3列宽度
    ui->tableWidget_TicketStep->setColumnWidth(3,200); //第4列宽度
    ui->tableWidget_TicketStep->setColumnWidth(4,220); //第5列宽度
    ui->tableWidget_TicketStep->setColumnWidth(5,100); //第6列宽度
    ui->tableWidget_TicketStep->setColumnWidth(6,221); //第7列宽度

    for(int i = 0; i < rowNum; i++)
    {
        ui->tableWidget_TicketStep->setRowHeight(i,39);
    }

    ui->tableWidget_TicketStep->horizontalHeader()->setFixedHeight(50);

    ui->tableWidget_TicketStep->horizontalHeader()->setStyleSheet("color: rgb(41, 122, 204);font: 75 11pt 微软雅黑");

}

void TicketStepMonitor::updateStepTableData(QList<WorkMonitor> stepMonitorList)
{
    this->monitorlist=stepMonitorList;
    int i = 0;
    WorkMonitor Temp;
    int AllWorkNum = 0; // 作业总数
    int workingNum = 0; // 正在进行的作业
    int noStartWorkNum = 0; // 未开始作业数
    int haveEndWorkNum = 0; //已结束作业数
    int alarmNum = 0; //告警数

    ui->tableWidget_TicketStep->clear();

    if(!stepMonitorList.isEmpty())
    {
        ui->label_TicketNameDisp->setText(stepMonitorList.at(0).TicketType); //票的种类
        qDebug()<<QStringLiteral("票的种类=")<<stepMonitorList.at(0).TicketType;
        initTicketStepTable(stepMonitorList.at(0).Work_Type, stepMonitorList.count());
    }

    AllWorkNum = stepMonitorList.count(); //作业总数

    for(i = 0; i < stepMonitorList.count(); i++)
    {

        Temp = stepMonitorList.at(i);
        ui->tableWidget_TicketStep->setItem(i,0,new QTableWidgetItem(Temp.Work_Name));
        ui->tableWidget_TicketStep->setItem(i,1,new QTableWidgetItem());
        ui->tableWidget_TicketStep->setItem(i,2,new QTableWidgetItem());
        ui->tableWidget_TicketStep->setItem(i,3,new QTableWidgetItem());
        ui->tableWidget_TicketStep->setItem(i,4,new QTableWidgetItem());
        ui->tableWidget_TicketStep->setItem(i,5,new QTableWidgetItem());
        ui->tableWidget_TicketStep->setItem(i,6,new QTableWidgetItem());

        ui->tableWidget_TicketStep->item(i,0)->setTextAlignment(Qt::AlignCenter);
        ui->tableWidget_TicketStep->item(i,1)->setTextAlignment(Qt::AlignCenter);
        ui->tableWidget_TicketStep->item(i,2)->setTextAlignment(Qt::AlignCenter);
        ui->tableWidget_TicketStep->item(i,3)->setTextAlignment(Qt::AlignCenter);
        ui->tableWidget_TicketStep->item(i,4)->setTextAlignment(Qt::AlignCenter);
        ui->tableWidget_TicketStep->item(i,5)->setTextAlignment(Qt::AlignCenter);
        ui->tableWidget_TicketStep->item(i,6)->setTextAlignment(Qt::AlignCenter);

        ui->tableWidget_TicketStep->item(i,0)->setTextColor(QColor(255,255,255));

        ui->tableWidget_TicketStep->item(i,0)->setBackgroundColor(QColor(63,63,63));

        if(stepMonitorList.at(0).Work_Type == 0)
        {
            //工作票
            int n = 0;
            int tmp[7] = {0};
            for(n = 0; n < 4; n++)
            {
                tmp[n] = Temp.isExecute[n];
            }
            tmp[4] = Temp.isExecute[5];
            tmp[5] = Temp.isExecute[6];
            if(tmp[0] == 0)
            {
                //未开始
                noStartWorkNum++;
            }
            if(tmp[5] == 1)
            {
                //已结束
                haveEndWorkNum++;
            }
            for(int k = 1; k < 7; k++)
            {
                if(tmp[k - 1] == 0)
                {
                    ui->tableWidget_TicketStep->item(i,k)->setBackgroundColor(QColor(63,63,63));
                }
                else if(tmp[k - 1] == 1)
                {
                    ui->tableWidget_TicketStep->item(i,k)->setBackgroundColor(QColor(34,152,42));
                }
            }

            if(Temp.isHaveAlarm > 0)
            {
                //ui->tableWidget_TicketStep->item(i, 3)->setText(tr("有警告"));
                ui->tableWidget_TicketStep->item(i, 4)->setIcon(QIcon(":/image/TicketStep/alarm.png"));
                ui->tableWidget_TicketStep->setIconSize(QSize(100,20));

                ui->tableWidget_TicketStep->item(i, 4)->setTextColor(QColor(255,255,255));
                alarmNum = alarmNum + Temp.isHaveAlarm; //告警数
            }
        }
        else if(stepMonitorList.at(0).Work_Type == 1)
        {
            //操作票
            if(Temp.isExecute[0] == 0)
            {
                //未开始
                noStartWorkNum++;
            }
            if(Temp.isExecute[5] == 1)
            {
                //已结束
                haveEndWorkNum++;
            }

            for(int j = 1; j < 7; j++)
            {
                if(Temp.isExecute[j - 1] == 0)
                {
                    ui->tableWidget_TicketStep->item(i,j)->setBackgroundColor(QColor(63,63,63));
                }
                else if(Temp.isExecute[j - 1] == 1)
                {
                    ui->tableWidget_TicketStep->item(i,j)->setBackgroundColor(QColor(34,152,42));
                }
            }

            if(Temp.isHaveAlarm > 0)
            {
                //ui->tableWidget_TicketStep->item(i, 3)->setText(tr("有警告"));
                ui->tableWidget_TicketStep->item(i, 3)->setIcon(QIcon(":/image/TicketStep/alarm.png"));
                ui->tableWidget_TicketStep->setIconSize(QSize(100,20));

                ui->tableWidget_TicketStep->item(i, 3)->setTextColor(QColor(255,255,255));
                alarmNum = alarmNum + Temp.isHaveAlarm; //告警数
            }
        }       
    }
    workingNum = AllWorkNum - noStartWorkNum - haveEndWorkNum;
    ui->label_WorkNum->setText(QString::number(AllWorkNum)); //作业总数
    ui->label_WorkingNum->setText(QString::number(workingNum)); //正在进行
    ui->label_NoStart->setText(QString::number(noStartWorkNum)); //未开始
    ui->label_HaveEnd->setText(QString::number(haveEndWorkNum)); //已结束
    ui->label_AlarmWorkNum->setText(QString::number(alarmNum)); //警告数

}

void TicketStepMonitor::on_pushButton_returnLastPage_clicked()
{
    emit ReturnLastPage();//返回上一页
}


/************************************************************************
  Description：双击单元格得到当前所点击的行和列的响应事件
  @param：
  Output:
  @Return:
  @author:
************************************************************************/
void TicketStepMonitor::on_tableWidget_TicketStep_cellDoubleClicked(int row, int column)
{
//    for(int i=0;i<monitorlist.size();++i)
//    {
//        qDebug()<<QStringLiteral("获取行号=")<<monitorlist.at(i).Work_Name<<monitorlist.at(i).Work_Id<<i;
//    }
//    qDebug()<<QStringLiteral("双击了单元格得到行和列的值")<<row<<column;
    if(0==column && 0==type)  //只能点击表格的0列且票的类型为操作票
    {
       for(int i=0;i<monitorlist.size();++i)     //比较所点击的列数和存储数据集的顺序是否一致，如果是得到当前的ID号查询当前的工作票详情
       {
           if(row==i)
           {
               qDebug()<<QStringLiteral("行号=")<<row<<i;
               QTableWidgetItem *item=new QTableWidgetItem();
               item=ui->tableWidget_TicketStep->item(row,column);  //获得所点击的item
               QString ItemText=item->text();    //得到所点击的item的内容
               qDebug()<<QStringLiteral("当前双击的内容为=")<<ItemText;
               QString workid=monitorlist.at(i).Work_Id;
                qDebug()<<QStringLiteral("获取行号=")<<monitorlist.at(i).Work_Name<<monitorlist.at(i).Work_Id<<i;

               WorkTick->UpdateWorkSheetInfo(ReadDataFromMysql::instance()->Update_tableWidget_WorkSheet(workid));
               WorkTick->show();
           }
       }
//        QTableWidgetItem *item=new QTableWidgetItem();
//        item=ui->tableWidget_TicketStep->item(row,column);  //获得所点击的item
//        QString ItemText=item->text();    //得到所点击的item的内容

//        WorkTick=new WorkSheet();
//        WorkTick->UpdateWorkSheetInfo(ReadDataFromMysql::instance()->Update_tableWidget_WorkSheet("MN_DQDZ_CZP"));
//        WorkTick->show();
    }

    if(0==column&& 1==type)
    {
        for(int i=0;i<monitorlist.size();++i)     //比较所点击的列数和存储数据集的顺序是否一致，如果是得到当前的ID号查询当前的工作票详情
        {
            if(row==i)
            {
                qDebug()<<QStringLiteral("行号=")<<row<<i;
                QTableWidgetItem *item=new QTableWidgetItem();
                item=ui->tableWidget_TicketStep->item(row,column);  //获得所点击的item
                QString ItemText=item->text();    //得到所点击的item的内容
                qDebug()<<QStringLiteral("当前双击的内容为=")<<ItemText;
                QString workid=monitorlist.at(i).Work_Id;
                 qDebug()<<QStringLiteral("获取行号=")<<monitorlist.at(i).Work_Name<<monitorlist.at(i).Work_Id<<i;

                 Opersheet->UpdateOperSheetInfo(ReadDataFromMysql::instance()->Update_tableWidget_WorkSheet(workid),
                                                ReadDataFromMysql::instance()->Updata_tableWidget_OperSheet());
                 Opersheet->show();
            }
        }

    }

}
