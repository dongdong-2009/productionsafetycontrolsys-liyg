#ifndef ALARMWIDGET_H
#define ALARMWIDGET_H

#include <QWidget>
#include <QDateTime>
#include "Alarm_record/alarm_record.h"

namespace Ui {
class AlarmWidget;
}

class AlarmWidget : public QWidget
{
    Q_OBJECT

public:
    explicit AlarmWidget(QWidget *parent = 0);
    ~AlarmWidget();
    void InitWidget();
    void SetAlarmHis(QList<Alarm_His>);
private slots:
    void on_GoingIntervalBtn_clicked();

    void on_LeaveOutBtn_clicked();

    void on_PersonForbidBtn_clicked();

    void on_PersonHelpBtn_clicked();

    void on_personcommissionBtn_clicked();

    void on_outofjobBtn_clicked();

    void on_personcheckoutBtn_clicked();

    void on_NoWrokBtn_clicked();

    void on_doorwrongBtn_clicked();

    void on_numberofpeopleBtn_clicked();

    void on_scanworngBtn_clicked();

signals:
    void SignalGoingIntervalBtn_clicked(QString);
    void DevWrongClicked(QString);
    void LeaveOutClicked(QString);
    void PersonForbidClicked(QString);
    void PersonHelpClicked(QString);
    void CommissionClicked(QString);
    void DoorwrongClicked(QString);
    void NoCardClicked(QString);
    void NoTicketClicked(QString);
private:
    Ui::AlarmWidget *ui;
    Alarm_record *AlarmRecord;
    QList<Alarm_His> list;
    int going_wrong;
    int dev;
    int work_wrong;
    int Person;
    int person_help;
    int fatigued_operations;
    int commission;
    int outofjob;
    int numberofpeople;
    int NoWrok;
    int doorwrong;
    int personcheckout;
    int scanwronglabel;
};

#endif // ALARMWIDGET_H
