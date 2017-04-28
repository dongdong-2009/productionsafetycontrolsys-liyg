#include "opersheet.h"
#include "ui_opersheet.h"

OperSheet::OperSheet(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OperSheet)
{
    ui->setupUi(this);
    this->setWindowTitle(QStringLiteral("操作票"));
    this->setWindowFlags(Qt::FramelessWindowHint); //去掉标题栏
    InitWidget();

}

OperSheet::~OperSheet()
{
    delete ui;
}

void OperSheet::InitWidget()
{
    //设置关闭按钮样式及鼠标移上去显示提示
    ui->closeBtn->setToolTip(QStringLiteral("关闭"));

    QStringList header;
    ui->tableWidget_opersheet->verticalHeader()->setHidden(true);
    ui->tableWidget_opersheet->horizontalHeader()->setStretchLastSection(true);
    header.clear();
	header << QStringLiteral("操作序号") << QStringLiteral("操作项") << QStringLiteral("是否完成") << QStringLiteral("完成时间");
    ui->tableWidget_opersheet->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget_opersheet->horizontalHeader()->setFixedHeight(40);
    ui->tableWidget_opersheet->setHorizontalHeaderLabels(header);
    ui->tableWidget_opersheet->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget_opersheet->horizontalHeader()->setStretchLastSection(true);
    ui->tableWidget_opersheet->verticalHeader()->setStretchLastSection(true);
    ui->tableWidget_opersheet->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableWidget_opersheet->setEditTriggers(QAbstractItemView::NoEditTriggers);

}


void OperSheet::UpdateOperSheetInfo(WorkSheet_Info workSheetInfo, QList<OperSheet_WorkStep> WorkStepList)
{

    int i = 0;
    QStringList header;
    OperSheet_WorkStep Temp;
    ui->label_worktitle->clear();
    ui->label_worktitle->setText(workSheetInfo.Work_Name);
    ui->label_workplace->clear();
    ui->label_workplace->setText(workSheetInfo.Work_Addr);
    ui->label_dutyperson->clear();
    if((workSheetInfo.DutyPerson_Name.isEmpty()) || (workSheetInfo.DutyPerson_IsSign == 0))
    {
		ui->label_dutyperson->setText(QStringLiteral("未签到"));
    }
    else
    {
        ui->label_dutyperson->setText(workSheetInfo.DutyPerson_Name);
    }

    ui->label_operperson->clear();
    if((workSheetInfo.OperPerson_Name.isEmpty()) || (workSheetInfo.OperPerson_IsSign == 0))
    {
		ui->label_operperson->setText(QStringLiteral("未签到"));
    }
    else
    {
        ui->label_operperson->setText(workSheetInfo.OperPerson_Name);
    }
    ui->label_plantime->clear();
    ui->label_plantime->setText(workSheetInfo.Plan_BeginTime + "  -  " + workSheetInfo.Plan_EndTime);
    ui->label_realtime->clear();
    ui->label_realtime->setText(workSheetInfo.Act_BeginTime + "  -  " + workSheetInfo.Act_EndTime);
    ui->label_alarmrecord->clear();

    QString TempStr;
    QString AlarmStr;

    for(int i = 0; i < workSheetInfo.AllAlarmInfoList.count(); i++)
    {
        AlarmStr = workSheetInfo.AllAlarmInfoList.at(i).AlarmContent;
        TempStr = TempStr + AlarmStr;
        if(i != workSheetInfo.AllAlarmInfoList.count() - 1)
        {
			TempStr = TempStr + QStringLiteral("、");
        }
    }
    ui->label_alarmrecord->setText(TempStr);


    ui->tableWidget_opersheet->clear();
    for(i = 0; i < WorkStepList.count(); i++)
    {
        if(i > 8)
        {
            break;
        }
        Temp = WorkStepList.at(i);

        ui->tableWidget_opersheet->setItem(i,0,new QTableWidgetItem(Temp.Step_Order));
        ui->tableWidget_opersheet->setItem(i,1,new QTableWidgetItem(Temp.Step_Desc));
        ui->tableWidget_opersheet->setItem(i,2,new QTableWidgetItem(Temp.Is_Op));
        ui->tableWidget_opersheet->setItem(i,3,new QTableWidgetItem(Temp.Op_Time));

        ui->tableWidget_opersheet->item(i,0)->setTextAlignment(Qt::AlignCenter);
        ui->tableWidget_opersheet->item(i,1)->setTextAlignment(Qt::AlignCenter);
        ui->tableWidget_opersheet->item(i,2)->setTextAlignment(Qt::AlignCenter);
        ui->tableWidget_opersheet->item(i,3)->setTextAlignment(Qt::AlignCenter);
    }

	header << QStringLiteral("操作序号") << QStringLiteral("操作项") << QStringLiteral("是否完成") << QStringLiteral("完成时间");
    ui->tableWidget_opersheet->setHorizontalHeaderLabels(header);
}

//关闭界面按钮实现
void OperSheet::on_closeBtn_clicked()
{
    this->close();
}

