#ifndef WORKSHEET_H
#define WORKSHEET_H

#include <QWidget>
#include "readdatafrommysql/readdatafrommysql.h"
namespace Ui {
class WorkSheet;
}

class WorkSheet : public QWidget
{
    Q_OBJECT

public:
    explicit WorkSheet(QWidget *parent = 0);
    ~WorkSheet();
    void UpdateWorkSheetInfo(WorkSheet_Info workSheetInfo); //更新信息
private slots:
    void on_closeBtn_clicked();

private:
    Ui::WorkSheet *ui;
};

#endif // WORKSHEET_H
