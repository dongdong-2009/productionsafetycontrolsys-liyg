#ifndef TICKETSTEPMONITOR_H
#define TICKETSTEPMONITOR_H

#include <QWidget>
#include "readdatafrommysql/readdatafrommysql.h"
#include <QTableWidgetItem>
#include "worksheet/worksheet.h"
#include "opersheet/opersheet.h"
namespace Ui {
class TicketStepMonitor;
}

class TicketStepMonitor : public QWidget
{
    Q_OBJECT

public:
    explicit TicketStepMonitor(QWidget *parent = 0);
    ~TicketStepMonitor();

    void initTicketStepTable(int ticketType, int rowNum);//初始化表格
    void updateStepTableData(QList<WorkMonitor> stepMonitorList); //更新显示
private slots:
    void on_pushButton_returnLastPage_clicked();
//    void on_tableWidgetClicked(QTableWidgetItem*);
    void on_tableWidget_TicketStep_cellDoubleClicked(int row, int column);

signals:
    void ReturnLastPage(); //返回上一页
private:
    Ui::TicketStepMonitor *ui;
    int type;
    WorkSheet *WorkTick;
    OperSheet *Opersheet;
    QList<WorkMonitor> monitorlist;
};

#endif // TICKETSTEPMONITOR_H
