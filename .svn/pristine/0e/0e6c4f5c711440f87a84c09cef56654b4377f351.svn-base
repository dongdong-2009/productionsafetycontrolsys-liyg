#ifndef CAMERAWIDGET_H
#define CAMERAWIDGET_H

#include <QWidget>
#include "readdatafrommysql/readdatafrommysql.h"
#include <QDebug>
#include "hk_video/hk_video.h"
#include "importantarea/importantarea.h"
#include <QTimer>
#include <QMessageBox>
#include "choosedoorstate/choose_door_state.h"
#include <QUuid>
#include <QEvent>
#include <QMouseEvent>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkReply>
#include <QUrl>
#include <QByteArray>

namespace Ui {
class CameraWidget;
}

class CameraWidget : public QWidget
{
    Q_OBJECT

public:
    explicit CameraWidget(QWidget *parent = 0);
    ~CameraWidget();

    void Update_list();
    
    void Update_door_state();
    
 //   void Updata_work_tablewidget();
    void Updata_Work_Alarm_Table();
    void Updata_Alarm_tableWidget(QList<Alarm_Table> Alarm_Data);
    void Updata_Work_tableWidget(QList<Work_Table> Alarm_Data);
    void Area_Pic(QString AreaID);
    void InitListWidget();

    void TableWidgetInit();  //初始化tablewidget
    void Updata_List();
    void Updata_Door_State();
    void InitWidget();

signals:
    void CameraClicked();
private slots:
    void on_Video_Button_clicked();
    void CamertimerUpdate();
    void Button_Clicked();
  //   void View(QString Area_Name);
    void on_Door_Button_clicked();

    void on_Alarm_Lamp_Button_clicked();
    void ReceiveredData(QNetworkReply*);
private:
    Ui::CameraWidget *ui;
   // ReadDataFromMysql database;
    QString Current_Area_Id;
    QString Area_Name;
    QList<Alarm_Table> Alarm_Table_Data;

    unsigned int Door_Status;    //门状态 数据库上下来的
    unsigned int Door_Status_Real;
    unsigned int Alarm_Lamp_Status; //告警灯状态
    int Area_Count;        //当前区域数量
    int Current_Row;       //当前选中的行
    int Back_Up_Row;

    QList<QString> BackUp_Area_List;
    QList<QString> BackUp_List;
    QList<QPushButton*> Button_List;
    ImportantArea* Importarea;
    QString Target_Name;
    QTimer *timer;
    QPushButton* Last_Button;
    QNetworkAccessManager *manager;
    QNetworkReply *reply;
};

#endif // CAMERAWIDGET_H
