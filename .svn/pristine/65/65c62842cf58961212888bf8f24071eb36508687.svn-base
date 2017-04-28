#include "snapshop_dialog.h"
#include "ui_snapshop_dialog.h"
#include <QMessageBox>
#include <QImage>
#include <qdebug.h>

Snapshop_Dialog::Snapshop_Dialog(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::Snapshop_Dialog)
{
  ui->setupUi(this);
  QString filename= QCoreApplication::applicationDirPath()+"/test.jpg";
  QImage image;
  image.load(filename);//fileName为图片的路径
  //this->setGeometry(5,0,image.size().width(),image.size().height());
  //ui->label->setGeometry(20,10,image.size().width(),image.size().height());
  QImage result = image.scaled(590, 370);
  ui->label->setPixmap(QPixmap::fromImage(result));//在Label控件上显示图片
}

Snapshop_Dialog::~Snapshop_Dialog()
{
  delete ui;
}
