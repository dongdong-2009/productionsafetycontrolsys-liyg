#ifndef AREAEMPLOYEE_H
#define AREAEMPLOYEE_H

#include <QWidget>
#include <QStringList>
#include <QHeaderView>
#include <QTableView>
#include <QTableWidget>
#include "readdatafrommysql/readdatafrommysql.h"

namespace Ui {
class AreaEmployee;
}

class AreaEmployee : public QWidget
{
    Q_OBJECT

public:
    explicit AreaEmployee(QWidget *parent = 0);
    ~AreaEmployee();
    void InitWidget();
    void UpdateTableInfo(QList<Area_person> list); //更新表格
private:
    Ui::AreaEmployee *ui;
};

#endif // AREAEMPLOYEE_H
