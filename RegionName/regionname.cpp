#include "regionname.h"
#include "ui_regionname.h"

RegionName::RegionName(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RegionName)
{
    ui->setupUi(this);
    Gridlayout =new QGridLayout(ui->scrollAreaWidgetContents);
    Gridlayout->setMargin(15);
    Gridlayout->setSpacing(5);

}

RegionName::~RegionName()
{
    delete ui;
}

void RegionName::InitWidget(QString &AreaName,QString &alarm,QString &workNum,QString &person,QString &rowNum,QString &colNum)
{
    //从数据库获得区域显示的个数  

    Tablewidget=new QTableWidget();
    Tablewidget->setObjectName(QString("tablewidget%1").arg(rowNum));
    Tablewidget->setRowCount(3);
    Tablewidget->setColumnCount(3);
    Tablewidget->setSpan(0,0,1,3);
    Tablewidget->horizontalHeader()->setVisible(false);
    Tablewidget->setStyleSheet("QTableWidget{gridline-color: #ffffff;border:0px; }"
                               "QTableWidget:item{border-left:1px solid #ffffff;border-top:1px solid #ffffff;}");
    //设置单元格的显示内容、对齐方式
    QTableWidgetItem *item=new QTableWidgetItem;
    item->setText(AreaName);
    item->setTextAlignment(Qt::AlignCenter);
//    item->setTextColor(QColor(255,0,0));    //设置字体颜色
    item->setBackground(QBrush(QColor(0,20,200)));   //设置单元格的背景色

    QTableWidgetItem *item1=new QTableWidgetItem;
	item1->setText(QStringLiteral("告警数"));
    item1->setTextAlignment(Qt::AlignCenter);
    QTableWidgetItem *item2=new QTableWidgetItem;
	item2->setText(QStringLiteral("作业数"));
    item2->setTextAlignment(Qt::AlignCenter);
    QTableWidgetItem *item3=new QTableWidgetItem;
	item3->setText(QStringLiteral("人数"));
    item3->setTextAlignment(Qt::AlignCenter);

    QTableWidgetItem* AlarmNumItem=new QTableWidgetItem;
    AlarmNumItem->setTextAlignment(Qt::AlignCenter);
    AlarmNumItem->setText(alarm);

    QTableWidgetItem* WorkNumItem=new QTableWidgetItem;
    WorkNumItem->setTextAlignment(Qt::AlignCenter);
    WorkNumItem->setText(workNum);

    QTableWidgetItem* PersonNumItem=new QTableWidgetItem;
    PersonNumItem->setTextAlignment(Qt::AlignCenter);
    PersonNumItem->setText(person);

    Tablewidget->setItem(0,0,item);
    Tablewidget->setItem(1,0,item1);  //设置tablewidget单元格显示内容
    Tablewidget->setItem(1,1,item2);
    Tablewidget->setItem(1,2,item3);
    Tablewidget->setItem(2,0,AlarmNumItem);
    Tablewidget->setItem(2,1,WorkNumItem);
    Tablewidget->setItem(2,2,PersonNumItem);
    //Tablewidget->setStyleSheet("QTableWidget{border:0px;border-left:1px;}");
    //网格布局、设置网格显示
    Gridlayout->addWidget(Tablewidget,rowNum.toInt(),colNum.toInt());
}
