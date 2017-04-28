#ifndef TWOTICKETEXEMONITOR_H
#define TWOTICKETEXEMONITOR_H

#include <QWidget>
#include "readdatafrommysql/readdatafrommysql.h"
#include <QTableWidgetItem>
#include <QDebug>
#include "worksheet/worksheet.h"
#include "opersheet/opersheet.h"
#include <QColor>
#include <QPalette>
#include <QMessageBox>
#include <QStringList>
#include <QScrollArea>
#include <QPalette>
#include <QList>
#include <QGridLayout>
#include <QBoxLayout>
#include <QPushButton>
#include "TicketStepMonitor/ticketstepmonitor.h"

namespace Ui {
class TwoTicketExeMonitor;
}

class TwoTicketExeMonitor : public QWidget
{
    Q_OBJECT

public:
    explicit TwoTicketExeMonitor(QWidget *parent = 0);
    ~TwoTicketExeMonitor();


    void InitTwoTicketWidget();
    void InitTwoTicketData();
private slots:

    void on_pushButton_work_clicked();

    void on_pushButton_operation_clicked();
    void ClickedTableWidget(QTableWidgetItem*);
    void ClickedOperationWidget(QTableWidgetItem*);
signals:
    void Signal_ticketMtepMonitor(QString);
    void Signal_OperationWidget(QString);
private:
    Ui::TwoTicketExeMonitor *ui;
    QList<QTableWidget*> listTableWidget;
    WorkSheet* worksheet;
    OperSheet* opersheet;
    bool workid;
    int row;
    tickettype data;
    TicketStepMonitor *ticketMtepMonitor;
    tickettype workTicketData;
};

#endif // TWOTICKETEXEMONITOR_H
