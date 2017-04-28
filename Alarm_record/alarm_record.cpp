#include "alarm_record.h"
#include "ui_alarm_record.h"

Alarm_record::Alarm_record(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Alarm_record)
{
    ui->setupUi(this);
     j=1;
    //初始化tablewidget
    InitTableWidget();
//    InitWidget();
//    QDesktopWidget* desktopWidget=QApplication::desktop();
//    QRect screenRect=desktopWidget->screenGeometry();
//    int width=screenRect.width();
//    int height=screenRect.height();
//    this->resize(QSize(width,height));
    this->setStyleSheet("QWidget{background-color: rgb(36, 36, 44);}");
    this->setWindowTitle(QStringLiteral("告警记录详情表"));
    this->setWindowFlags(Qt::FramelessWindowHint);  //去掉标题栏
    ui->CloseBtn->setToolTip(QStringLiteral("关闭"));

}

Alarm_record::~Alarm_record()
{
    delete ui;
}

void Alarm_record::InitTableWidget()
{


    QStringList header;
	header << QStringLiteral("序号") << QStringLiteral("安全区域") << QStringLiteral("作业名称") << QStringLiteral("设备名称") << QStringLiteral("告警类型") << QStringLiteral("告警信息")
		<< QStringLiteral("告警时间") << QStringLiteral("人员名称");

    ui->AlarmReTableWidget->setHorizontalHeaderLabels(header);
        int row=ui->AlarmReTableWidget->rowCount();
        for(int i=0;i<row;++i)
        {
            ui->AlarmReTableWidget->setRowHeight(i,40);
        }
        ui->AlarmReTableWidget->setAlternatingRowColors(true);
        ui->AlarmReTableWidget->verticalHeader()->setVisible(false);  //隐藏垂直表头
        ui->AlarmReTableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);  //禁止编辑表格
        ui->AlarmReTableWidget->horizontalHeader()->setFixedHeight(40);
        ui->AlarmReTableWidget->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
        ui->AlarmReTableWidget->setColumnWidth(0,80);
        ui->AlarmReTableWidget->setColumnWidth(1,150);
        ui->AlarmReTableWidget->setColumnWidth(2,400);
        ui->AlarmReTableWidget->setColumnWidth(3,150);
        ui->AlarmReTableWidget->setColumnWidth(4,150);
        ui->AlarmReTableWidget->setColumnWidth(5,150);
        ui->AlarmReTableWidget->setColumnWidth(6,150);
        ui->AlarmReTableWidget->setFocusPolicy(Qt::NoFocus);  //设置无焦点
        ui->AlarmReTableWidget->setSelectionBehavior(QAbstractItemView::SelectRows); //设置选中一列
        ui->AlarmReTableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);  //隐藏水平滚动条
}


bool Alarm_record::InsertTableWidget(QList<Alarm_His> list)
{

        qDebug()<<"alarm_hisList.count():"<<list.count();
        ui->AlarmReTableWidget->setRowCount(list.count());  //获取链表的大小来设置行数
        Alarm_His historyData;
        for(int i=0;i<list.count();i++)
        {
            historyData=list.at(i);
            //qDebug()<<"historyData="<<historyData.workmanship;
            QTableWidgetItem *NumItem=new QTableWidgetItem();
            NumItem->setTextAlignment(Qt::AlignCenter);
            NumItem->setText(QString::number(i+1));

            QTableWidgetItem *AlarmArea=new QTableWidgetItem();
            AlarmArea->setTextAlignment(Qt::AlignCenter);
            AlarmArea->setText(historyData.safety_zone);

            QTableWidgetItem *AlarmWork=new QTableWidgetItem();
            AlarmWork->setTextAlignment(Qt::AlignCenter);
            AlarmWork->setText(historyData.workmanship);

            QTableWidgetItem *DevName=new QTableWidgetItem();
            DevName->setTextAlignment(Qt::AlignCenter);
            DevName->setText(historyData.devname);

            QTableWidgetItem *AlarmType=new QTableWidgetItem();
            AlarmType->setTextAlignment(Qt::AlignCenter);
            AlarmType->setText(historyData.Alarm_type);

            QTableWidgetItem *Alarminfo=new QTableWidgetItem();
            Alarminfo->setTextAlignment(Qt::AlignCenter);
            Alarminfo->setText(historyData.Alarm_info);


            QTableWidgetItem *Alarmtime=new QTableWidgetItem();
            Alarmtime->setTextAlignment(Qt::AlignCenter);
            Alarmtime->setText(historyData.Alarm_time);

            QTableWidgetItem *persionname=new QTableWidgetItem();
            persionname->setTextAlignment(Qt::AlignCenter);
            persionname->setText(historyData.persion_name);

            ui->AlarmReTableWidget->setItem(i,0,NumItem);    //设置第一列的显示的内容
            ui->AlarmReTableWidget->setItem(i,1,AlarmArea);
            ui->AlarmReTableWidget->setItem(i,2,AlarmWork);
            ui->AlarmReTableWidget->setItem(i,3,DevName);
            ui->AlarmReTableWidget->setItem(i,4,AlarmType);
            ui->AlarmReTableWidget->setItem(i,5,Alarminfo);
            ui->AlarmReTableWidget->setItem(i,6,Alarmtime);
            ui->AlarmReTableWidget->setItem(i,7,persionname);
        }

        return true;
}

void Alarm_record::SetLabelName(QString name)
{
    ui->label->setText(name);
}

//鼠标移动窗口事件
void Alarm_record::mouseMoveEvent(QMouseEvent *event)
{
    if(m_bPressed)
    {
        move(event->pos()-m_point+pos());
    }
}

//鼠标点击事件
void Alarm_record::mousePressEvent(QMouseEvent *event)
{
    //如果点击了鼠标左键
    if(event->button()==Qt::LeftButton)
    {
        m_bPressed=true;
        m_point=event->pos();
    }
}





void Alarm_record::on_CloseBtn_clicked()
{
    this->close();
}
