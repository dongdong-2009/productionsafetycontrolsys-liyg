/********************************************************************************
** Form generated from reading UI file 'snapshop_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SNAPSHOP_DIALOG_H
#define UI_SNAPSHOP_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Snapshop_Dialog
{
public:
    QLabel *label;

    void setupUi(QDialog *Snapshop_Dialog)
    {
        if (Snapshop_Dialog->objectName().isEmpty())
            Snapshop_Dialog->setObjectName(QStringLiteral("Snapshop_Dialog"));
        Snapshop_Dialog->resize(630, 400);
        Snapshop_Dialog->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label = new QLabel(Snapshop_Dialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 590, 370));

        retranslateUi(Snapshop_Dialog);

        QMetaObject::connectSlotsByName(Snapshop_Dialog);
    } // setupUi

    void retranslateUi(QDialog *Snapshop_Dialog)
    {
        Snapshop_Dialog->setWindowTitle(QApplication::translate("Snapshop_Dialog", "\346\210\252\345\233\276\345\277\253\347\205\247", 0));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Snapshop_Dialog: public Ui_Snapshop_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SNAPSHOP_DIALOG_H
