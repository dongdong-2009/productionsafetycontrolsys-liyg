/********************************************************************************
** Form generated from reading UI file 'choose_door_state.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSE_DOOR_STATE_H
#define UI_CHOOSE_DOOR_STATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Choose_Door_State
{
public:
    QPushButton *Door_Open_Button;
    QPushButton *Door_Close_Button;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *Choose_Door_State)
    {
        if (Choose_Door_State->objectName().isEmpty())
            Choose_Door_State->setObjectName(QStringLiteral("Choose_Door_State"));
        Choose_Door_State->resize(215, 129);
        Choose_Door_State->setMaximumSize(QSize(215, 129));
        Door_Open_Button = new QPushButton(Choose_Door_State);
        Door_Open_Button->setObjectName(QStringLiteral("Door_Open_Button"));
        Door_Open_Button->setGeometry(QRect(25, 20, 75, 61));
        Door_Open_Button->setStyleSheet(QStringLiteral("border-image: url(:/image/door2.png);"));
        Door_Close_Button = new QPushButton(Choose_Door_State);
        Door_Close_Button->setObjectName(QStringLiteral("Door_Close_Button"));
        Door_Close_Button->setGeometry(QRect(115, 20, 75, 61));
        Door_Close_Button->setStyleSheet(QStringLiteral("border-image: url(:/image/doo1.png);"));
        label = new QLabel(Choose_Door_State);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(35, 90, 61, 31));
        QFont font;
        font.setFamily(QStringLiteral("Adobe Arabic"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(Choose_Door_State);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(120, 90, 68, 31));
        label_2->setFont(font);

        retranslateUi(Choose_Door_State);

        QMetaObject::connectSlotsByName(Choose_Door_State);
    } // setupUi

    void retranslateUi(QDialog *Choose_Door_State)
    {
        Choose_Door_State->setWindowTitle(QApplication::translate("Choose_Door_State", "\351\227\250\347\212\266\346\200\201\346\216\247\345\210\266", 0));
        Door_Open_Button->setText(QString());
        Door_Close_Button->setText(QString());
        label->setText(QApplication::translate("Choose_Door_State", "     \345\274\200\351\227\250", 0));
        label_2->setText(QApplication::translate("Choose_Door_State", "     \345\205\263\351\227\250", 0));
    } // retranslateUi

};

namespace Ui {
    class Choose_Door_State: public Ui_Choose_Door_State {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSE_DOOR_STATE_H
