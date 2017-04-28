#ifndef ALARM_RECORD_H
#define ALARM_RECORD_H

#include <QWidget>
#include "readdatafrommysql/readdatafrommysql.h"
#include <QDebug>
#include <QFont>
#include <QMessageBox>
#include <QDesktopWidget>
#include <QRect>
#include <QMouseEvent>

namespace Ui {
class Alarm_record;
}

class Alarm_record : public QWidget
{
    Q_OBJECT

public:
    explicit Alarm_record(QWidget *parent = 0);
    ~Alarm_record();
    void InitTableWidget();
    void InitWidget();
    bool InsertTableWidget(QList<Alarm_His>);
    void SetLabelName(QString);
    void mouseMoveEvent(QMouseEvent* event);
    void mousePressEvent(QMouseEvent *event);
private slots:

    void on_CloseBtn_clicked();

private:
    Ui::Alarm_record *ui;
    int j;
    bool m_bPressed;
    QPoint m_point;
};

#endif // ALARM_RECORD_H
