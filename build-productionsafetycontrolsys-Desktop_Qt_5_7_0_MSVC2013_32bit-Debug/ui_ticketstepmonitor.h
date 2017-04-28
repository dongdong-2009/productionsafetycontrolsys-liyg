/********************************************************************************
** Form generated from reading UI file 'ticketstepmonitor.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TICKETSTEPMONITOR_H
#define UI_TICKETSTEPMONITOR_H

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
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TicketStepMonitor
{
public:
    QGridLayout *gridLayout_6;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout;
    QLabel *label_TicketNameDisp;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_returnLastPage;
    QHBoxLayout *horizontalLayout_7;
    QFrame *frame;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *worklabel;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_WorkNum;
    QSpacerItem *horizontalSpacer_2;
    QFrame *frame_2;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *joblabel;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_WorkingNum;
    QSpacerItem *horizontalSpacer_3;
    QFrame *frame_3;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *endlabel;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_NoStart;
    QSpacerItem *horizontalSpacer_4;
    QFrame *frame_4;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *endworklabel;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_HaveEnd;
    QSpacerItem *horizontalSpacer_5;
    QFrame *frame_5;
    QGridLayout *gridLayout_5;
    QVBoxLayout *verticalLayout_5;
    QLabel *worksumLabel;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_AlarmWorkNum;
    QSpacerItem *horizontalSpacer_6;
    QTableWidget *tableWidget_TicketStep;

    void setupUi(QWidget *TicketStepMonitor)
    {
        if (TicketStepMonitor->objectName().isEmpty())
            TicketStepMonitor->setObjectName(QStringLiteral("TicketStepMonitor"));
        TicketStepMonitor->resize(1366, 695);
        TicketStepMonitor->setStyleSheet(QLatin1String("QWidget#TicketStepMonitor\n"
"{\n"
"	\n"
"	background-color: rgb(0, 0, 0);\n"
"}"));
        gridLayout_6 = new QGridLayout(TicketStepMonitor);
        gridLayout_6->setSpacing(0);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(20, 10, 20, 10);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(10);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(150);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_TicketNameDisp = new QLabel(TicketStepMonitor);
        label_TicketNameDisp->setObjectName(QStringLiteral("label_TicketNameDisp"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_TicketNameDisp->sizePolicy().hasHeightForWidth());
        label_TicketNameDisp->setSizePolicy(sizePolicy);
        label_TicketNameDisp->setStyleSheet(QString::fromUtf8("QLabel#label_TicketNameDisp\n"
"{\n"
"color: rgb(255, 255, 255);\n"
"	font: 75 20px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        label_TicketNameDisp->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_TicketNameDisp);

        horizontalSpacer = new QSpacerItem(218, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_returnLastPage = new QPushButton(TicketStepMonitor);
        pushButton_returnLastPage->setObjectName(QStringLiteral("pushButton_returnLastPage"));
        sizePolicy.setHeightForWidth(pushButton_returnLastPage->sizePolicy().hasHeightForWidth());
        pushButton_returnLastPage->setSizePolicy(sizePolicy);
        pushButton_returnLastPage->setStyleSheet(QLatin1String("QPushButton#pushButton_returnLastPage\n"
"{\n"
"	background-color: rgb(255, 255, 255,0);\n"
"	border-image: url(:/image/TicketStep/getback.png);\n"
"}"));

        horizontalLayout->addWidget(pushButton_returnLastPage);

        horizontalLayout->setStretch(0, 5);
        horizontalLayout->setStretch(1, 26);
        horizontalLayout->setStretch(2, 1);

        verticalLayout_6->addLayout(horizontalLayout);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(20);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        frame = new QFrame(TicketStepMonitor);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setStyleSheet(QLatin1String("QFrame#frame\n"
"{\n"
"border-image: url(:/image/TicketStep/WorkNum.png);\n"
"}\n"
"\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 10);
        worklabel = new QLabel(frame);
        worklabel->setObjectName(QStringLiteral("worklabel"));
        worklabel->setStyleSheet(QLatin1String("QLabel#worklabel\n"
"{\n"
"	background-color: rgb(255, 255, 255,0);\n"
"}"));
        worklabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(worklabel);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_WorkNum = new QLabel(frame);
        label_WorkNum->setObjectName(QStringLiteral("label_WorkNum"));
        label_WorkNum->setStyleSheet(QString::fromUtf8("QLabel#label_WorkNum\n"
"{\n"
"	background-color: rgb(255, 255, 255,0);\n"
"	color: rgb(255, 255, 255);\n"
"	font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        label_WorkNum->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_WorkNum);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        horizontalLayout_2->setStretch(0, 3);
        horizontalLayout_2->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_2);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);

        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        horizontalLayout_7->addWidget(frame);

        frame_2 = new QFrame(TicketStepMonitor);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setStyleSheet(QLatin1String("QFrame#frame_2\n"
"{\n"
"border-image: url(:/image/TicketStep/WorkingNum.png);\n"
"}\n"
"\n"
""));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, -1, -1, 10);
        joblabel = new QLabel(frame_2);
        joblabel->setObjectName(QStringLiteral("joblabel"));
        joblabel->setStyleSheet(QLatin1String("QLabel#joblabel\n"
"{\n"
"	background-color: rgb(255, 255, 255,0);\n"
"}\n"
""));
        joblabel->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(joblabel);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_WorkingNum = new QLabel(frame_2);
        label_WorkingNum->setObjectName(QStringLiteral("label_WorkingNum"));
        label_WorkingNum->setStyleSheet(QString::fromUtf8("QLabel#label_WorkingNum\n"
"{\n"
"	background-color: rgb(255, 255, 255,0);\n"
"	color: rgb(255, 255, 255);\n"
"	font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        label_WorkingNum->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_WorkingNum);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        horizontalLayout_3->setStretch(0, 3);
        horizontalLayout_3->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 1);

        gridLayout_2->addLayout(verticalLayout_2, 0, 0, 1, 1);


        horizontalLayout_7->addWidget(frame_2);

        frame_3 = new QFrame(TicketStepMonitor);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setStyleSheet(QLatin1String("QFrame#frame_3\n"
"{\n"
"border-image: url(:/image/TicketStep/NoStartWork.png);\n"
"}\n"
"\n"
""));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame_3);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, -1, -1, 10);
        endlabel = new QLabel(frame_3);
        endlabel->setObjectName(QStringLiteral("endlabel"));
        endlabel->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255,0);"));
        endlabel->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(endlabel);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_NoStart = new QLabel(frame_3);
        label_NoStart->setObjectName(QStringLiteral("label_NoStart"));
        label_NoStart->setStyleSheet(QString::fromUtf8("\n"
"QLabel#label_NoStart\n"
"{	\n"
"	background-color: rgb(255, 255, 255,0);\n"
"	color: rgb(255, 255, 255);\n"
"	font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        label_NoStart->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_NoStart);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        horizontalLayout_4->setStretch(0, 3);
        horizontalLayout_4->setStretch(1, 1);

        verticalLayout_3->addLayout(horizontalLayout_4);

        verticalLayout_3->setStretch(0, 1);
        verticalLayout_3->setStretch(1, 1);

        gridLayout_3->addLayout(verticalLayout_3, 0, 0, 1, 1);


        horizontalLayout_7->addWidget(frame_3);

        frame_4 = new QFrame(TicketStepMonitor);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setStyleSheet(QLatin1String("QFrame#frame_4\n"
"{\n"
"border-image: url(:/image/TicketStep/HaveEndNum.png);\n"
"}\n"
"\n"
""));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame_4);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, -1, -1, 10);
        endworklabel = new QLabel(frame_4);
        endworklabel->setObjectName(QStringLiteral("endworklabel"));
        endworklabel->setStyleSheet(QLatin1String("QLabel#endworklabel\n"
"{\n"
"	\n"
"	background-color: rgb(255, 255, 255,0);\n"
"}"));
        endworklabel->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(endworklabel);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_HaveEnd = new QLabel(frame_4);
        label_HaveEnd->setObjectName(QStringLiteral("label_HaveEnd"));
        label_HaveEnd->setStyleSheet(QString::fromUtf8("QLabel#label_HaveEnd\n"
"{\n"
"	background-color: rgb(255, 255, 255,0);\n"
"	color: rgb(255, 255, 255);\n"
"	font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        label_HaveEnd->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_HaveEnd);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        horizontalLayout_5->setStretch(0, 3);
        horizontalLayout_5->setStretch(1, 1);

        verticalLayout_4->addLayout(horizontalLayout_5);

        verticalLayout_4->setStretch(0, 1);
        verticalLayout_4->setStretch(1, 1);

        gridLayout_4->addLayout(verticalLayout_4, 0, 0, 1, 1);


        horizontalLayout_7->addWidget(frame_4);

        frame_5 = new QFrame(TicketStepMonitor);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setStyleSheet(QLatin1String("QFrame#frame_5\n"
"{\n"
"border-image: url(:/image/TicketStep/AlarmWorkNum.png);\n"
"}\n"
"\n"
""));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(frame_5);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(-1, -1, -1, 10);
        worksumLabel = new QLabel(frame_5);
        worksumLabel->setObjectName(QStringLiteral("worksumLabel"));
        worksumLabel->setStyleSheet(QLatin1String("QLabel#worksumLabel\n"
"{\n"
"	background-color: rgb(255, 255, 255,0);\n"
"}"));
        worksumLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(worksumLabel);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_AlarmWorkNum = new QLabel(frame_5);
        label_AlarmWorkNum->setObjectName(QStringLiteral("label_AlarmWorkNum"));
        label_AlarmWorkNum->setStyleSheet(QString::fromUtf8("QLabel#label_AlarmWorkNum\n"
"{\n"
"	background-color: rgb(255, 255, 255,0);\n"
"	color: rgb(255, 255, 255);\n"
"	font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        label_AlarmWorkNum->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(label_AlarmWorkNum);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        horizontalLayout_6->setStretch(0, 3);
        horizontalLayout_6->setStretch(1, 1);

        verticalLayout_5->addLayout(horizontalLayout_6);

        verticalLayout_5->setStretch(0, 1);
        verticalLayout_5->setStretch(1, 1);

        gridLayout_5->addLayout(verticalLayout_5, 0, 0, 1, 1);


        horizontalLayout_7->addWidget(frame_5);

        horizontalLayout_7->setStretch(0, 1);
        horizontalLayout_7->setStretch(1, 1);
        horizontalLayout_7->setStretch(2, 1);
        horizontalLayout_7->setStretch(3, 1);
        horizontalLayout_7->setStretch(4, 1);

        verticalLayout_6->addLayout(horizontalLayout_7);

        tableWidget_TicketStep = new QTableWidget(TicketStepMonitor);
        tableWidget_TicketStep->setObjectName(QStringLiteral("tableWidget_TicketStep"));

        verticalLayout_6->addWidget(tableWidget_TicketStep);

        verticalLayout_6->setStretch(0, 1);
        verticalLayout_6->setStretch(1, 2);
        verticalLayout_6->setStretch(2, 16);

        gridLayout_6->addLayout(verticalLayout_6, 0, 0, 1, 1);


        retranslateUi(TicketStepMonitor);

        QMetaObject::connectSlotsByName(TicketStepMonitor);
    } // setupUi

    void retranslateUi(QWidget *TicketStepMonitor)
    {
        TicketStepMonitor->setWindowTitle(QApplication::translate("TicketStepMonitor", "Form", 0));
        label_TicketNameDisp->setText(QApplication::translate("TicketStepMonitor", "\347\224\265\345\231\250\347\254\254\344\270\200\347\247\215\345\267\245\344\275\234\347\245\250", 0));
        pushButton_returnLastPage->setText(QString());
        worklabel->setText(QString());
        label_WorkNum->setText(QApplication::translate("TicketStepMonitor", "18", 0));
        joblabel->setText(QString());
        label_WorkingNum->setText(QApplication::translate("TicketStepMonitor", "2", 0));
        endlabel->setText(QString());
        label_NoStart->setText(QApplication::translate("TicketStepMonitor", "0", 0));
        endworklabel->setText(QString());
        label_HaveEnd->setText(QApplication::translate("TicketStepMonitor", "0", 0));
        worksumLabel->setText(QString());
        label_AlarmWorkNum->setText(QApplication::translate("TicketStepMonitor", "13", 0));
    } // retranslateUi

};

namespace Ui {
    class TicketStepMonitor: public Ui_TicketStepMonitor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TICKETSTEPMONITOR_H
