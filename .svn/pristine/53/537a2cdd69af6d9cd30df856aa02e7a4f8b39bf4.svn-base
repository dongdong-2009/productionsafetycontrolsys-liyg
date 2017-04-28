#ifndef HK_VIDEO_H
#define HK_VIDEO_H

#include <QDialog>
#include "include/HCNetSDK.h"
#include "include/plaympeg4.h"
#include <QLabel>
#include <QPushButton>
#include "hk_video/video_control.h"
#include <QTableWidgetItem>
#include <QTimer>
#include "hk_video.h"
#include "readdatafrommysql/readdatafrommysql.h"
#include <QWidget>

namespace Ui {
  class HK_Video;
}

class HK_Video : public QDialog
{
  Q_OBJECT

public:
  explicit HK_Video(QWidget *parent = 0);
  ~HK_Video();
  QLabel *CameraLabel;
  QPushButton*  CameraABtn;
  void CameraWidgetRealize();
  unsigned int Connect_Flag;    //数据库联接标记
  void Init_Alarm_Table();
  QTimer *Timer;
  int Flag;
  QPushButton *Front_Button;    //上一次按下的按钮
  QString Target_Camera_Name;   //指定显示的摄像头名称
  QString Curremt_Camera_Name;  //当前摄像头名
  QString Target_Area_Name;     //目标区域名称  kfss add 4
  QList<QPushButton*>  Last_List;


  int Start_Video(Video_Info Video_Info);
  Video_Control Target_Video;
  void CameraTableDisp(QList<Cameradata> list);
  void Appoint_Camera(QString Camera_Name);   //显示指定的摄像头名
  QStringList Current_Area_Name;    //当前区域名
  void Stop_Camera();
  void ClearData();
signals:
    void postAlarmID(QString);
public slots:
  void CameraBBtn_Clicked();  
  void timerUpdate();
  void CameraTableWiget(QTableWidgetItem *item);
public:

private:
  Ui::HK_Video *ui;
  Video_Info Video_Info_Temp;
  Cameradata data;
  QStringList nameList;
  QList<Cameradata> datalist;
protected:
  bool eventFilter(QObject *obj, QEvent *ev);
};



#endif // HK_VIDEO_H
