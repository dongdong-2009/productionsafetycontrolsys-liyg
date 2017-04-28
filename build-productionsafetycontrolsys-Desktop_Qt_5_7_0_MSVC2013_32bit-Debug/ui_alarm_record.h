/********************************************************************************
** Form generated from reading UI file 'alarm_record.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALARM_RECORD_H
#define UI_ALARM_RECORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Alarm_record
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QToolButton *CloseBtn;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *AlarmReTableWidget;

    void setupUi(QWidget *Alarm_record)
    {
        if (Alarm_record->objectName().isEmpty())
            Alarm_record->setObjectName(QStringLiteral("Alarm_record"));
        Alarm_record->resize(1336, 568);
        Alarm_record->setStyleSheet(QStringLiteral(""));
        gridLayout_2 = new QGridLayout(Alarm_record);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        frame = new QFrame(Alarm_record);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setStyleSheet(QLatin1String("QFrame#frame\n"
"{\n"
"	background-color: rgb(113, 115, 115);\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QLatin1String("QLabel#label\n"
"{\n"
"	background-color: rgb(255, 255, 255,0);\n"
"	font: 14pt \"Microsoft YaHei UI\";\n"
"	color: rgb(255, 255, 255);\n"
"}"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        CloseBtn = new QToolButton(frame);
        CloseBtn->setObjectName(QStringLiteral("CloseBtn"));
        CloseBtn->setStyleSheet(QLatin1String("QToolButton#CloseBtn\n"
"{\n"
"	background-color: rgb(255, 255, 255,0);\n"
"	border-image: url(:/image/work_close  (1).png);\n"
"}"));

        horizontalLayout->addWidget(CloseBtn);

        horizontalLayout->setStretch(0, 3);
        horizontalLayout->setStretch(1, 10);
        horizontalLayout->setStretch(2, 1);

        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        verticalLayout_3->addWidget(frame);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(10);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        AlarmReTableWidget = new QTableWidget(Alarm_record);
        if (AlarmReTableWidget->columnCount() < 8)
            AlarmReTableWidget->setColumnCount(8);
        if (AlarmReTableWidget->rowCount() < 8)
            AlarmReTableWidget->setRowCount(8);
        AlarmReTableWidget->setObjectName(QStringLiteral("AlarmReTableWidget"));
        QFont font;
        font.setPointSize(10);
        AlarmReTableWidget->setFont(font);
        AlarmReTableWidget->setStyleSheet(QStringLiteral(""));
        AlarmReTableWidget->setDragEnabled(false);
        AlarmReTableWidget->setRowCount(8);
        AlarmReTableWidget->setColumnCount(8);

        verticalLayout_2->addWidget(AlarmReTableWidget);


        verticalLayout_3->addLayout(verticalLayout_2);

        verticalLayout_3->setStretch(1, 10);

        gridLayout_2->addLayout(verticalLayout_3, 0, 0, 1, 1);


        retranslateUi(Alarm_record);

        QMetaObject::connectSlotsByName(Alarm_record);
    } // setupUi

    void retranslateUi(QWidget *Alarm_record)
    {
        Alarm_record->setWindowTitle(QApplication::translate("Alarm_record", "Form", 0));
        label->setText(QApplication::translate("Alarm_record", "\346\240\207\351\242\230\346\240\217", 0));
        CloseBtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Alarm_record: public Ui_Alarm_record {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALARM_RECORD_H
