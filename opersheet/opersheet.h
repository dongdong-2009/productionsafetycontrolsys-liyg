#ifndef OPERSHEET_H
#define OPERSHEET_H

#include <QWidget>
#include "worksheet/worksheet.h"
namespace Ui {
class OperSheet;
}

class OperSheet : public QWidget
{
    Q_OBJECT

public:
    explicit OperSheet(QWidget *parent = 0);
    ~OperSheet();
    void InitWidget();
    void UpdateOperSheetInfo(WorkSheet_Info workSheetInfo, QList<OperSheet_WorkStep> WorkStepList); //更新信息
private slots:

    void on_closeBtn_clicked();

private:
    Ui::OperSheet *ui;
};

#endif // OPERSHEET_H
