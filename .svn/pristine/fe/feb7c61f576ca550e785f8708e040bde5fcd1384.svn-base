#include "worksheet.h"
#include "ui_worksheet.h"

WorkSheet::WorkSheet(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WorkSheet)
{
    ui->setupUi(this);
	this->setWindowTitle(QStringLiteral("工作票"));
    this->setWindowFlags(Qt::FramelessWindowHint); //去掉标题栏
	ui->closeBtn->setToolTip(QStringLiteral("关闭"));
}

WorkSheet::~WorkSheet()
{
    delete ui;
}


void WorkSheet::UpdateWorkSheetInfo(WorkSheet_Info workSheetInfo)
{
    ui->label_worktitle->clear();
    ui->label_worktitle->setText(workSheetInfo.Work_Name);
    ui->label_workplace->clear();
    ui->label_workplace->setText(workSheetInfo.Work_Addr);
    ui->label_content->clear();
    ui->label_content->setText(workSheetInfo.Work_Desc);
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
        AlarmStr = workSheetInfo.AllAlarmInfoList.at(i).AlarmContent + " " + workSheetInfo.AllAlarmInfoList.at(i).AlarmTime;
        TempStr = TempStr + AlarmStr + "\n";
    }
    ui->label_alarmrecord->setText(TempStr);

}

//界面关闭按钮事件实现
void WorkSheet::on_closeBtn_clicked()
{
    this->close();
}
