#ifndef SNAPSHOP_DIALOG_H
#define SNAPSHOP_DIALOG_H

#include <QDialog>

namespace Ui {
  class Snapshop_Dialog;
}

class Snapshop_Dialog : public QDialog
{
  Q_OBJECT

public:
  explicit Snapshop_Dialog(QWidget *parent = 0);
  ~Snapshop_Dialog();

private:
  Ui::Snapshop_Dialog *ui;
};

#endif // SNAPSHOP_DIALOG_H
