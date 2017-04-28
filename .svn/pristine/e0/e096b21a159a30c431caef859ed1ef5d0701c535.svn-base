#ifndef REGIONNAME_H
#define REGIONNAME_H

#include <QWidget>
#include <QGridLayout>
#include <QTableWidget>
#include <QString>
#include <QTableWidgetItem>
#include <QDebug>
#include <QLabel>

namespace Ui {
class RegionName;
}

class RegionName : public QWidget
{
    Q_OBJECT

public:
    explicit RegionName(QWidget *parent = 0);
    ~RegionName();
    void InitWidget(QString&,QString&,QString&,QString&,QString&,QString&);
private:
    Ui::RegionName *ui;
    QGridLayout *Gridlayout;
    QTableWidget *Tablewidget;

};

#endif // REGIONNAME_H
