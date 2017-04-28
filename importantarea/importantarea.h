#ifndef IMPORTANTAREA_H
#define IMPORTANTAREA_H

#include <QWidget>
#include "readdatafrommysql/readdatafrommysql.h"

namespace Ui {
class ImportantArea;
}

class ImportantArea : public QWidget
{
    Q_OBJECT

public:
    explicit ImportantArea(QWidget *parent = 0);
    ~ImportantArea();
    void InitWidget();
    void UpdataTableInfo(QList<Import_Area> ImportAreaList); //更新表格
    int Row_Count;
signals:
    void View_Id(QString Area_Name);

private slots:
//    void on_tableWidget_cellClicked(int row, int column);


private:
    Ui::ImportantArea *ui;
};

#endif // IMPORTANTAREA_H
