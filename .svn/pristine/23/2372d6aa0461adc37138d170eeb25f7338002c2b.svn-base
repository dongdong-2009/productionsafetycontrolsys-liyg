#ifndef CHOOSE_DOOR_STATE_H
#define CHOOSE_DOOR_STATE_H
#include "readdatafrommysql/readdatafrommysql.h"
#include <QDialog>

namespace Ui {
  class Choose_Door_State;
}

#define OPEN     1
#define CLOSE    2

class Choose_Door_State : public QDialog
{
  Q_OBJECT

public:
  explicit Choose_Door_State(QWidget *parent = 0);
  ~Choose_Door_State();
  int Get_Command();
  int Command;
  Door_Cmd Cmd_Door;
  int Door_Status;
//  ReadDataFromMysql *database;
  void Control_Door(int Command);
  void Set_Door_Button_State(int State);
  bool Allow_Flag;

private slots:
  void on_Door_Open_Button_clicked();

  void on_Door_Close_Button_clicked();

private:
  Ui::Choose_Door_State *ui;
};

#endif // CHOOSE_DOOR_STATE_H
