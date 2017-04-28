/********************************************************************************
** Form generated from reading UI file 'opersheet.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPERSHEET_H
#define UI_OPERSHEET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OperSheet
{
public:
    QToolButton *closeBtn;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_worktitle;
    QLabel *label_workplace;
    QHBoxLayout *horizontalLayout;
    QLabel *label_1;
    QLabel *label_dutyperson;
    QLabel *label_11;
    QLabel *label_plantime;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *label_operperson;
    QLabel *label_22;
    QLabel *label_realtime;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLabel *label_alarmrecord;
    QTableWidget *tableWidget_opersheet;

    void setupUi(QWidget *OperSheet)
    {
        if (OperSheet->objectName().isEmpty())
            OperSheet->setObjectName(QStringLiteral("OperSheet"));
        OperSheet->resize(854, 632);
        OperSheet->setStyleSheet(QLatin1String("QWidget#OperSheet\n"
"{\n"
"	\n"
"	background-color: rgb(36, 36, 44);\n"
"}"));
        closeBtn = new QToolButton(OperSheet);
        closeBtn->setObjectName(QStringLiteral("closeBtn"));
        closeBtn->setGeometry(QRect(820, 10, 21, 21));
        closeBtn->setStyleSheet(QLatin1String("QToolButton#closeBtn\n"
"{\n"
"	border-image: url(:/image/work_close  (1).png);\n"
"}"));
        layoutWidget = new QWidget(OperSheet);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 38, 831, 581));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_worktitle = new QLabel(layoutWidget);
        label_worktitle->setObjectName(QStringLiteral("label_worktitle"));
        label_worktitle->setStyleSheet(QLatin1String("QLabel#label_worktitle\n"
"{\n"
"	border-width: 1px;\n"
"	border-style: solid;\n"
"	border-color: rgb(0, 0, 0);\n"
"	font:  14px \"Microsoft YaHei UI\";\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
""));
        label_worktitle->setLineWidth(1);
        label_worktitle->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_worktitle);

        label_workplace = new QLabel(layoutWidget);
        label_workplace->setObjectName(QStringLiteral("label_workplace"));
        label_workplace->setStyleSheet(QLatin1String("QLabel#label_workplace\n"
"{\n"
"	border-width: 1px;\n"
"	border-style: solid;\n"
"	border-color: rgb(0, 0, 0);\n"
"	font: 14px \"Microsoft YaHei UI\";\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
""));
        label_workplace->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_workplace);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_1 = new QLabel(layoutWidget);
        label_1->setObjectName(QStringLiteral("label_1"));
        label_1->setStyleSheet(QLatin1String("QLabel#label_1\n"
"{\n"
"	border-width: 1px;\n"
"	border-style: solid;\n"
"	border-color: rgb(0, 0, 0);	\n"
"	color: rgb(255, 255, 255);\n"
"	font: 14px \"Microsoft YaHei UI\";\n"
"}\n"
""));
        label_1->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_1);

        label_dutyperson = new QLabel(layoutWidget);
        label_dutyperson->setObjectName(QStringLiteral("label_dutyperson"));
        label_dutyperson->setStyleSheet(QLatin1String("font:  14px \"Microsoft YaHei UI\";\n"
"color: rgb(255, 255, 255);\n"
"border-width: 1px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0);"));
        label_dutyperson->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_dutyperson);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setStyleSheet(QLatin1String("QLabel#label_11\n"
"{\n"
"\n"
"	border-width: 1px;\n"
"	border-style: solid;\n"
"	border-color: rgb(0, 0, 0);	\n"
"	color: rgb(255, 255, 255);\n"
"	font: 14px \"Microsoft YaHei UI\";\n"
"}\n"
""));
        label_11->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_11);

        label_plantime = new QLabel(layoutWidget);
        label_plantime->setObjectName(QStringLiteral("label_plantime"));
        label_plantime->setStyleSheet(QLatin1String("QLabel#label_plantime\n"
"{\n"
"	font: 14px \"Microsoft YaHei UI\";\n"
"	color: rgb(255, 255, 255);\n"
"	border-width: 1px;\n"
"	border-style: solid;\n"
"	border-color: rgb(0, 0, 0);\n"
"}\n"
""));
        label_plantime->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_plantime);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 1);
        horizontalLayout->setStretch(3, 2);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QLatin1String("QLabel#label_2\n"
"{\n"
"\n"
"	border-width: 1px;\n"
"	border-style: solid;\n"
"	border-color: rgb(0, 0, 0);\n"
"	font: 75 14px \"Microsoft YaHei UI\";\n"
"	color: rgb(255, 255, 255);	\n"
"}\n"
""));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_2);

        label_operperson = new QLabel(layoutWidget);
        label_operperson->setObjectName(QStringLiteral("label_operperson"));
        label_operperson->setStyleSheet(QLatin1String("QLabel#label_operperson\n"
"{\n"
"	border-width: 1px;\n"
"	border-style: solid;\n"
"	border-color: rgb(0, 0, 0);\n"
"	font: 14px \"Microsoft YaHei UI\";\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
""));
        label_operperson->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_operperson);

        label_22 = new QLabel(layoutWidget);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setStyleSheet(QLatin1String("QLabel#label_22\n"
"{\n"
"\n"
"	border-width: 1px;\n"
"	border-style: solid;\n"
"	border-color: rgb(0, 0, 0);\n"
"	font: 75 14px \"Microsoft YaHei UI\";\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
""));
        label_22->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_22);

        label_realtime = new QLabel(layoutWidget);
        label_realtime->setObjectName(QStringLiteral("label_realtime"));
        label_realtime->setStyleSheet(QLatin1String("QLabel#label_realtime\n"
"{\n"
"	font:  14px \"Microsoft YaHei UI\";\n"
"	color: rgb(255, 255, 255);\n"
"	border-width: 1px;\n"
"	border-style: solid;\n"
"	border-color: rgb(0, 0, 0);\n"
"}\n"
""));
        label_realtime->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_realtime);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 1);
        horizontalLayout_2->setStretch(2, 1);
        horizontalLayout_2->setStretch(3, 2);

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QLatin1String("QLabel#label_3\n"
"{\n"
"\n"
"	border-width: 1px;\n"
"	border-style: solid;\n"
"	border-color: rgb(0, 0, 0);\n"
"	font: 75 14px \"Microsoft YaHei UI\";\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_3);

        label_alarmrecord = new QLabel(layoutWidget);
        label_alarmrecord->setObjectName(QStringLiteral("label_alarmrecord"));
        label_alarmrecord->setStyleSheet(QLatin1String("QLabel#label_alarmrecord\n"
"{\n"
"	font: 14px \"Microsoft YaHei UI\";	\n"
"	color: rgb(255, 255, 255);\n"
"	border-width: 1px;\n"
"	border-style: solid;\n"
"	border-color: rgb(0, 0, 0);\n"
"}\n"
""));
        label_alarmrecord->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_alarmrecord->setMargin(20);

        horizontalLayout_3->addWidget(label_alarmrecord);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 4);

        verticalLayout->addLayout(horizontalLayout_3);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);
        verticalLayout->setStretch(3, 1);
        verticalLayout->setStretch(4, 1);

        verticalLayout_2->addLayout(verticalLayout);

        tableWidget_opersheet = new QTableWidget(layoutWidget);
        if (tableWidget_opersheet->columnCount() < 4)
            tableWidget_opersheet->setColumnCount(4);
        if (tableWidget_opersheet->rowCount() < 9)
            tableWidget_opersheet->setRowCount(9);
        tableWidget_opersheet->setObjectName(QStringLiteral("tableWidget_opersheet"));
        tableWidget_opersheet->setStyleSheet(QStringLiteral("background-color: rgb(36, 36, 44);"));
        tableWidget_opersheet->setRowCount(9);
        tableWidget_opersheet->setColumnCount(4);

        verticalLayout_2->addWidget(tableWidget_opersheet);


        retranslateUi(OperSheet);

        QMetaObject::connectSlotsByName(OperSheet);
    } // setupUi

    void retranslateUi(QWidget *OperSheet)
    {
        OperSheet->setWindowTitle(QApplication::translate("OperSheet", "Form", 0));
        closeBtn->setText(QString());
        label_worktitle->setText(QString());
        label_workplace->setText(QString());
        label_1->setText(QApplication::translate("OperSheet", "\350\264\243\344\273\273\344\272\272", 0));
        label_dutyperson->setText(QString());
        label_11->setText(QApplication::translate("OperSheet", "\350\256\241\345\210\222\350\265\267\346\255\242\346\227\266\351\227\264", 0));
        label_plantime->setText(QString());
        label_2->setText(QApplication::translate("OperSheet", "\346\223\215\344\275\234\344\272\272", 0));
        label_operperson->setText(QString());
        label_22->setText(QApplication::translate("OperSheet", "\345\256\236\351\231\205\350\265\267\346\255\242\346\227\266\351\227\264", 0));
        label_realtime->setText(QString());
        label_3->setText(QApplication::translate("OperSheet", "\345\256\211\345\205\250\345\221\212\350\255\246\350\256\260\345\275\225", 0));
        label_alarmrecord->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class OperSheet: public Ui_OperSheet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPERSHEET_H
