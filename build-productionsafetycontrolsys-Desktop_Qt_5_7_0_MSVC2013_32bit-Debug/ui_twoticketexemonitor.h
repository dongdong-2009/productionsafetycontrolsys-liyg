/********************************************************************************
** Form generated from reading UI file 'twoticketexemonitor.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TWOTICKETEXEMONITOR_H
#define UI_TWOTICKETEXEMONITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TwoTicketExeMonitor
{
public:
    QGridLayout *gridLayout_6;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_work;
    QPushButton *pushButton_operation;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame;
    QGridLayout *gridLayout_5;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *label_worknum;
    QSpacerItem *horizontalSpacer_4;
    QFrame *frame_2;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_workingnum;
    QSpacerItem *horizontalSpacer_5;
    QFrame *frame_3;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_nostartnum;
    QSpacerItem *horizontalSpacer_6;
    QFrame *frame_4;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_haveendnum;
    QSpacerItem *horizontalSpacer_7;
    QFrame *frame_5;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_allalarmnum;
    QSpacerItem *horizontalSpacer_8;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_8;
    QFrame *frame_6;
    QWidget *page_1;
    QGridLayout *gridLayout_7;
    QTableWidget *tableWidget;
    QSpacerItem *horizontalSpacer_2;
    QTableWidget *tableWidget_2;

    void setupUi(QWidget *TwoTicketExeMonitor)
    {
        if (TwoTicketExeMonitor->objectName().isEmpty())
            TwoTicketExeMonitor->setObjectName(QStringLiteral("TwoTicketExeMonitor"));
        TwoTicketExeMonitor->resize(1366, 768);
        gridLayout_6 = new QGridLayout(TwoTicketExeMonitor);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton_work = new QPushButton(TwoTicketExeMonitor);
        pushButton_work->setObjectName(QStringLiteral("pushButton_work"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_work->sizePolicy().hasHeightForWidth());
        pushButton_work->setSizePolicy(sizePolicy);
        pushButton_work->setStyleSheet(QLatin1String("font: 14px \"Microsoft YaHei UI\";\n"
"color: rgb(255, 255, 255);"));
        pushButton_work->setAutoRepeat(false);

        horizontalLayout_3->addWidget(pushButton_work);

        pushButton_operation = new QPushButton(TwoTicketExeMonitor);
        pushButton_operation->setObjectName(QStringLiteral("pushButton_operation"));
        sizePolicy.setHeightForWidth(pushButton_operation->sizePolicy().hasHeightForWidth());
        pushButton_operation->setSizePolicy(sizePolicy);
        pushButton_operation->setStyleSheet(QLatin1String("font: 14px \"Microsoft YaHei UI\";\n"
"color: rgb(255, 255, 255);"));
        pushButton_operation->setAutoRepeat(false);

        horizontalLayout_3->addWidget(pushButton_operation);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 1);
        horizontalLayout_3->setStretch(2, 10);

        verticalLayout_6->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(15);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        frame = new QFrame(TwoTicketExeMonitor);
        frame->setObjectName(QStringLiteral("frame"));
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setStyleSheet(QLatin1String("QFrame#frame\n"
"{\n"
"	border-image: url(:/image/TicketStep/WorkNum.png);\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(frame);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 62, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_worknum = new QLabel(frame);
        label_worknum->setObjectName(QStringLiteral("label_worknum"));
        sizePolicy.setHeightForWidth(label_worknum->sizePolicy().hasHeightForWidth());
        label_worknum->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QStringLiteral("Microsoft YaHei UI"));
        font.setPointSize(14);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label_worknum->setFont(font);
        label_worknum->setStyleSheet(QLatin1String("QLabel#label_worknum\n"
"{\n"
"	font: 14pt \"Microsoft YaHei UI\";\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(255, 255, 255,0);\n"
"}"));
        label_worknum->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_worknum);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        horizontalLayout->setStretch(0, 1);

        verticalLayout->addLayout(horizontalLayout);


        gridLayout_5->addLayout(verticalLayout, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(frame);

        frame_2 = new QFrame(TwoTicketExeMonitor);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setStyleSheet(QLatin1String("QFrame#frame_2\n"
"{\n"
"	border-image: url(:/image/TicketStep/WorkingNum.png);\n"
"}"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame_2);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 62, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_workingnum = new QLabel(frame_2);
        label_workingnum->setObjectName(QStringLiteral("label_workingnum"));
        sizePolicy.setHeightForWidth(label_workingnum->sizePolicy().hasHeightForWidth());
        label_workingnum->setSizePolicy(sizePolicy);
        label_workingnum->setFont(font);
        label_workingnum->setStyleSheet(QLatin1String("QLabel#label_workingnum\n"
"{\n"
"font: 14pt \"Microsoft YaHei UI\";\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(255, 255, 255,0);\n"
"}"));
        label_workingnum->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_workingnum);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        horizontalLayout_4->setStretch(0, 1);

        verticalLayout_2->addLayout(horizontalLayout_4);


        gridLayout_4->addLayout(verticalLayout_2, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(frame_2);

        frame_3 = new QFrame(TwoTicketExeMonitor);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        sizePolicy.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy);
        frame_3->setStyleSheet(QLatin1String("QFrame#frame_3\n"
"{\n"
"	border-image: url(:/image/TicketStep/NoStartWork.png);\n"
"}"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame_3);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalSpacer_3 = new QSpacerItem(20, 62, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_nostartnum = new QLabel(frame_3);
        label_nostartnum->setObjectName(QStringLiteral("label_nostartnum"));
        sizePolicy.setHeightForWidth(label_nostartnum->sizePolicy().hasHeightForWidth());
        label_nostartnum->setSizePolicy(sizePolicy);
        label_nostartnum->setFont(font);
        label_nostartnum->setStyleSheet(QLatin1String("QLabel#label_nostartnum\n"
"{font: 14pt \"Microsoft YaHei UI\";\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(255, 255, 255,0);\n"
"}"));
        label_nostartnum->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_nostartnum);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);

        horizontalLayout_5->setStretch(0, 1);

        verticalLayout_3->addLayout(horizontalLayout_5);


        gridLayout_3->addLayout(verticalLayout_3, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(frame_3);

        frame_4 = new QFrame(TwoTicketExeMonitor);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        sizePolicy.setHeightForWidth(frame_4->sizePolicy().hasHeightForWidth());
        frame_4->setSizePolicy(sizePolicy);
        frame_4->setStyleSheet(QLatin1String("QFrame#frame_4\n"
"{\n"
"	border-image: url(:/image/TicketStep/HaveEndNum.png);\n"
"}"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_4);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalSpacer_4 = new QSpacerItem(20, 62, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_haveendnum = new QLabel(frame_4);
        label_haveendnum->setObjectName(QStringLiteral("label_haveendnum"));
        sizePolicy.setHeightForWidth(label_haveendnum->sizePolicy().hasHeightForWidth());
        label_haveendnum->setSizePolicy(sizePolicy);
        label_haveendnum->setFont(font);
        label_haveendnum->setStyleSheet(QLatin1String("QLabel#label_haveendnum\n"
"{\n"
"font: 14pt \"Microsoft YaHei UI\";\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(255, 255, 255,0);\n"
"\n"
"}"));
        label_haveendnum->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(label_haveendnum);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);

        horizontalLayout_6->setStretch(0, 1);

        verticalLayout_4->addLayout(horizontalLayout_6);


        gridLayout_2->addLayout(verticalLayout_4, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(frame_4);

        frame_5 = new QFrame(TwoTicketExeMonitor);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        sizePolicy.setHeightForWidth(frame_5->sizePolicy().hasHeightForWidth());
        frame_5->setSizePolicy(sizePolicy);
        frame_5->setStyleSheet(QLatin1String("QFrame#frame_5\n"
"{\n"
"	border-image: url(:/image/TicketStep/AlarmWorkNum.png);\n"
"}"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_5);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalSpacer_5 = new QSpacerItem(20, 62, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_allalarmnum = new QLabel(frame_5);
        label_allalarmnum->setObjectName(QStringLiteral("label_allalarmnum"));
        sizePolicy.setHeightForWidth(label_allalarmnum->sizePolicy().hasHeightForWidth());
        label_allalarmnum->setSizePolicy(sizePolicy);
        label_allalarmnum->setFont(font);
        label_allalarmnum->setStyleSheet(QLatin1String("QLabel#label_allalarmnum\n"
"{\n"
"	font: 14pt \"Microsoft YaHei UI\";\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(255, 255, 255,0);\n"
"}"));
        label_allalarmnum->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(label_allalarmnum);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_8);

        horizontalLayout_7->setStretch(0, 1);

        verticalLayout_5->addLayout(horizontalLayout_7);


        gridLayout->addLayout(verticalLayout_5, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(frame_5);


        verticalLayout_6->addLayout(horizontalLayout_2);

        stackedWidget = new QStackedWidget(TwoTicketExeMonitor);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        stackedWidget->setStyleSheet(QStringLiteral(""));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        sizePolicy.setHeightForWidth(page->sizePolicy().hasHeightForWidth());
        page->setSizePolicy(sizePolicy);
        gridLayout_8 = new QGridLayout(page);
        gridLayout_8->setSpacing(0);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        frame_6 = new QFrame(page);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        frame_6->setStyleSheet(QStringLiteral("border:0px;"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);

        gridLayout_8->addWidget(frame_6, 0, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_1 = new QWidget();
        page_1->setObjectName(QStringLiteral("page_1"));
        page_1->setMaximumSize(QSize(16777215, 16777215));
        gridLayout_7 = new QGridLayout(page_1);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        tableWidget = new QTableWidget(page_1);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setMaximumSize(QSize(16777215, 450));
        tableWidget->setStyleSheet(QStringLiteral("border:0px;"));

        gridLayout_7->addWidget(tableWidget, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(695, 236, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_2, 1, 1, 1, 1);

        tableWidget_2 = new QTableWidget(page_1);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->setStyleSheet(QStringLiteral("border:0px;"));

        gridLayout_7->addWidget(tableWidget_2, 0, 1, 1, 1);

        stackedWidget->addWidget(page_1);

        verticalLayout_6->addWidget(stackedWidget);

        verticalLayout_6->setStretch(0, 1);
        verticalLayout_6->setStretch(1, 2);
        verticalLayout_6->setStretch(2, 18);

        gridLayout_6->addLayout(verticalLayout_6, 0, 0, 1, 1);


        retranslateUi(TwoTicketExeMonitor);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(TwoTicketExeMonitor);
    } // setupUi

    void retranslateUi(QWidget *TwoTicketExeMonitor)
    {
        TwoTicketExeMonitor->setWindowTitle(QApplication::translate("TwoTicketExeMonitor", "Form", 0));
        pushButton_work->setText(QApplication::translate("TwoTicketExeMonitor", "\345\267\245\344\275\234\347\245\250", 0));
        pushButton_operation->setText(QApplication::translate("TwoTicketExeMonitor", "\346\223\215\344\275\234\347\245\250", 0));
        label_worknum->setText(QString());
        label_workingnum->setText(QString());
        label_nostartnum->setText(QString());
        label_haveendnum->setText(QString());
        label_allalarmnum->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TwoTicketExeMonitor: public Ui_TwoTicketExeMonitor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TWOTICKETEXEMONITOR_H
