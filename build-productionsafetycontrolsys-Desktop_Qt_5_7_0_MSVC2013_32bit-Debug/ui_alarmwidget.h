/********************************************************************************
** Form generated from reading UI file 'alarmwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALARMWIDGET_H
#define UI_ALARMWIDGET_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AlarmWidget
{
public:
    QGridLayout *gridLayout_15;
    QVBoxLayout *verticalLayout_15;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QFrame *GoingIntervalFrame;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *GoingIntervalBtn;
    QLabel *GoingIntervalLabel;
    QFrame *scanningWrongFrame;
    QGridLayout *gridLayout_13;
    QVBoxLayout *verticalLayout_13;
    QPushButton *scanworngBtn;
    QLabel *scanwronglabel;
    QFrame *LeaveOutBtnFrame;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_3;
    QPushButton *LeaveOutBtn;
    QLabel *LeaveOutLabel;
    QFrame *PersonForbidFrame;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_4;
    QPushButton *PersonForbidBtn;
    QLabel *PersonForbidLabel;
    QFrame *personhelpFrame;
    QGridLayout *gridLayout_5;
    QVBoxLayout *verticalLayout_6;
    QPushButton *PersonHelpBtn;
    QLabel *PersonHelpQLabel;
    QFrame *FatiguedOperationsFrame;
    QGridLayout *gridLayout_6;
    QVBoxLayout *verticalLayout_5;
    QPushButton *FatiguedOperationsBtn;
    QLabel *FatiguedOperationsLabel;
    QHBoxLayout *horizontalLayout_2;
    QFrame *personcommissionFrame;
    QGridLayout *gridLayout_7;
    QVBoxLayout *verticalLayout_7;
    QPushButton *personcommissionBtn;
    QLabel *personcommissionLabel;
    QFrame *outofjobFrame;
    QGridLayout *gridLayout_8;
    QVBoxLayout *verticalLayout_8;
    QPushButton *outofjobBtn;
    QLabel *outofjobLabel;
    QFrame *personcheckoutFrame;
    QGridLayout *gridLayout_9;
    QVBoxLayout *verticalLayout_9;
    QPushButton *personcheckoutBtn;
    QLabel *personcheckoutLabel;
    QFrame *numberofpeopleFrame;
    QGridLayout *gridLayout_10;
    QVBoxLayout *verticalLayout_10;
    QPushButton *numberofpeopleBtn;
    QLabel *numberofpeopleLabel;
    QFrame *doorworngFrame;
    QGridLayout *gridLayout_11;
    QVBoxLayout *verticalLayout_11;
    QPushButton *doorwrongBtn;
    QLabel *doorwrongLabel;
    QFrame *NowrokFrame;
    QGridLayout *gridLayout_12;
    QVBoxLayout *verticalLayout_12;
    QPushButton *NoWrokBtn;
    QLabel *NoworkLabel;
    QHBoxLayout *horizontalLayout_3;
    QFrame *frame;
    QGridLayout *gridLayout_14;
    QVBoxLayout *verticalLayout_14;
    QPushButton *pushButton;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *AlarmWidget)
    {
        if (AlarmWidget->objectName().isEmpty())
            AlarmWidget->setObjectName(QStringLiteral("AlarmWidget"));
        AlarmWidget->resize(1105, 461);
        gridLayout_15 = new QGridLayout(AlarmWidget);
        gridLayout_15->setObjectName(QStringLiteral("gridLayout_15"));
        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_15->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        GoingIntervalFrame = new QFrame(AlarmWidget);
        GoingIntervalFrame->setObjectName(QStringLiteral("GoingIntervalFrame"));
        GoingIntervalFrame->setStyleSheet(QLatin1String("QFrame#GoingIntervalFrame\n"
"{\n"
"	border-image: url(:/image/alarm_image/one.png);\n"
"}\n"
"\n"
"QFrame#GoingIntervalFrame::hover\n"
"{	\n"
"	border-image: url(:/image/alarm_image/one(hover).png);\n"
"}"));
        GoingIntervalFrame->setFrameShape(QFrame::StyledPanel);
        GoingIntervalFrame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(GoingIntervalFrame);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        GoingIntervalBtn = new QPushButton(GoingIntervalFrame);
        GoingIntervalBtn->setObjectName(QStringLiteral("GoingIntervalBtn"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GoingIntervalBtn->sizePolicy().hasHeightForWidth());
        GoingIntervalBtn->setSizePolicy(sizePolicy);
        GoingIntervalBtn->setStyleSheet(QLatin1String("QPushButton#GoingIntervalBtn\n"
"{\n"
"	background-color:transparent;\n"
"}"));

        verticalLayout->addWidget(GoingIntervalBtn);

        GoingIntervalLabel = new QLabel(GoingIntervalFrame);
        GoingIntervalLabel->setObjectName(QStringLiteral("GoingIntervalLabel"));
        GoingIntervalLabel->setStyleSheet(QLatin1String("QLabel#GoingIntervalLabel\n"
"{\n"
"	background-color: rgb(255, 255, 255,0);\n"
"	color: rgb(255, 255, 255);	\n"
"	font: 14pt \"Microsoft YaHei UI\";\n"
"}"));
        GoingIntervalLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(GoingIntervalLabel);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        horizontalLayout->addWidget(GoingIntervalFrame);

        scanningWrongFrame = new QFrame(AlarmWidget);
        scanningWrongFrame->setObjectName(QStringLiteral("scanningWrongFrame"));
        scanningWrongFrame->setStyleSheet(QLatin1String("QFrame#scanningWrongFrame\n"
"{\n"
"border-image: url(:/image/alarm_image/noblock_press.png);\n"
"}\n"
"\n"
"QFrame#scanningWrongFrame::hover\n"
"{\n"
"border-image: url(:/image/alarm_image/noblock_hover.png);\n"
"}\n"
"\n"
"QFrame#scanningWrongFrame::press\n"
"{\n"
"border-image: url(:/image/alarm_image/noblock_press.png);\n"
"}"));
        scanningWrongFrame->setFrameShape(QFrame::StyledPanel);
        scanningWrongFrame->setFrameShadow(QFrame::Raised);
        gridLayout_13 = new QGridLayout(scanningWrongFrame);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        scanworngBtn = new QPushButton(scanningWrongFrame);
        scanworngBtn->setObjectName(QStringLiteral("scanworngBtn"));
        sizePolicy.setHeightForWidth(scanworngBtn->sizePolicy().hasHeightForWidth());
        scanworngBtn->setSizePolicy(sizePolicy);
        scanworngBtn->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255,0);"));

        verticalLayout_13->addWidget(scanworngBtn);

        scanwronglabel = new QLabel(scanningWrongFrame);
        scanwronglabel->setObjectName(QStringLiteral("scanwronglabel"));
        scanwronglabel->setStyleSheet(QLatin1String("QLabel#scanwronglabel\n"
"{\n"
"	background-color: rgb(255, 255, 255,0);\n"
"	color: rgb(255, 255, 255);	\n"
"	font: 14pt \"Microsoft YaHei UI\";\n"
"}\n"
""));

        verticalLayout_13->addWidget(scanwronglabel);


        gridLayout_13->addLayout(verticalLayout_13, 0, 0, 1, 1);


        horizontalLayout->addWidget(scanningWrongFrame);

        LeaveOutBtnFrame = new QFrame(AlarmWidget);
        LeaveOutBtnFrame->setObjectName(QStringLiteral("LeaveOutBtnFrame"));
        LeaveOutBtnFrame->setStyleSheet(QLatin1String("QFrame#LeaveOutBtnFrame\n"
"{	\n"
"	border-image: url(:/image/alarm_image/three.png);\n"
"}\n"
"\n"
"QFrame#LeaveOutBtnFrame::hover\n"
"{\n"
"	border-image: url(:/image/alarm_image/three(hover).png);\n"
"}"));
        LeaveOutBtnFrame->setFrameShape(QFrame::StyledPanel);
        LeaveOutBtnFrame->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(LeaveOutBtnFrame);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        LeaveOutBtn = new QPushButton(LeaveOutBtnFrame);
        LeaveOutBtn->setObjectName(QStringLiteral("LeaveOutBtn"));
        sizePolicy.setHeightForWidth(LeaveOutBtn->sizePolicy().hasHeightForWidth());
        LeaveOutBtn->setSizePolicy(sizePolicy);
        LeaveOutBtn->setStyleSheet(QLatin1String("QPushButton#LeaveOutBtn\n"
"{\n"
"	background-color:transparent;\n"
"}\n"
"\n"
""));

        verticalLayout_3->addWidget(LeaveOutBtn);

        LeaveOutLabel = new QLabel(LeaveOutBtnFrame);
        LeaveOutLabel->setObjectName(QStringLiteral("LeaveOutLabel"));
        LeaveOutLabel->setStyleSheet(QLatin1String("QLabel#LeaveOutLabel\n"
"{\n"
"	background-color:transparent;\n"
"	font: 14pt \"Microsoft YaHei UI\";\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        LeaveOutLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(LeaveOutLabel);


        gridLayout_3->addLayout(verticalLayout_3, 0, 0, 1, 1);


        horizontalLayout->addWidget(LeaveOutBtnFrame);

        PersonForbidFrame = new QFrame(AlarmWidget);
        PersonForbidFrame->setObjectName(QStringLiteral("PersonForbidFrame"));
        PersonForbidFrame->setStyleSheet(QLatin1String("QFrame#PersonForbidFrame\n"
"{\n"
"	border-image: url(:/image/alarm_image/four.png);\n"
"}\n"
"\n"
"QFrame#PersonForbidFrame::hover\n"
"{\n"
"	border-image: url(:/image/alarm_image/four(hover).png);\n"
"\n"
"}"));
        PersonForbidFrame->setFrameShape(QFrame::StyledPanel);
        PersonForbidFrame->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(PersonForbidFrame);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        PersonForbidBtn = new QPushButton(PersonForbidFrame);
        PersonForbidBtn->setObjectName(QStringLiteral("PersonForbidBtn"));
        sizePolicy.setHeightForWidth(PersonForbidBtn->sizePolicy().hasHeightForWidth());
        PersonForbidBtn->setSizePolicy(sizePolicy);
        PersonForbidBtn->setStyleSheet(QLatin1String("QPushButton#PersonForbidBtn\n"
"{\n"
"	background-color:transparent;\n"
"}\n"
"\n"
""));

        verticalLayout_4->addWidget(PersonForbidBtn);

        PersonForbidLabel = new QLabel(PersonForbidFrame);
        PersonForbidLabel->setObjectName(QStringLiteral("PersonForbidLabel"));
        PersonForbidLabel->setStyleSheet(QLatin1String("QLabel#PersonForbidLabel\n"
"{\n"
"	background-color:transparent;\n"
"	font: 14pt \"Microsoft YaHei UI\";\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        PersonForbidLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(PersonForbidLabel);


        gridLayout_4->addLayout(verticalLayout_4, 0, 0, 1, 1);


        horizontalLayout->addWidget(PersonForbidFrame);

        personhelpFrame = new QFrame(AlarmWidget);
        personhelpFrame->setObjectName(QStringLiteral("personhelpFrame"));
        personhelpFrame->setStyleSheet(QLatin1String("QFrame#personhelpFrame\n"
"{\n"
"	border-image: url(:/image/alarm_image/five.png);\n"
"}\n"
"\n"
"QFrame#personhelpFrame::hover\n"
"{\n"
"	border-image: url(:/image/alarm_image/five(hover).png);\n"
"}"));
        personhelpFrame->setFrameShape(QFrame::StyledPanel);
        personhelpFrame->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(personhelpFrame);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        PersonHelpBtn = new QPushButton(personhelpFrame);
        PersonHelpBtn->setObjectName(QStringLiteral("PersonHelpBtn"));
        sizePolicy.setHeightForWidth(PersonHelpBtn->sizePolicy().hasHeightForWidth());
        PersonHelpBtn->setSizePolicy(sizePolicy);
        PersonHelpBtn->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255,0);"));

        verticalLayout_6->addWidget(PersonHelpBtn);

        PersonHelpQLabel = new QLabel(personhelpFrame);
        PersonHelpQLabel->setObjectName(QStringLiteral("PersonHelpQLabel"));
        PersonHelpQLabel->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255,0);\n"
"font: 14pt \"Microsoft YaHei UI\";	\n"
"color: rgb(255, 255, 255);"));

        verticalLayout_6->addWidget(PersonHelpQLabel);

        verticalLayout_6->setStretch(0, 5);
        verticalLayout_6->setStretch(1, 1);

        gridLayout_5->addLayout(verticalLayout_6, 0, 0, 1, 1);


        horizontalLayout->addWidget(personhelpFrame);

        FatiguedOperationsFrame = new QFrame(AlarmWidget);
        FatiguedOperationsFrame->setObjectName(QStringLiteral("FatiguedOperationsFrame"));
        FatiguedOperationsFrame->setStyleSheet(QLatin1String("QFrame#FatiguedOperationsFrame\n"
"{\n"
"	border-image: url(:/image/alarm_image/six.png);\n"
"}\n"
"\n"
"QFrame#FatiguedOperationsFrame::hover\n"
"{\n"
"	border-image: url(:/image/alarm_image/six(hover).png);\n"
"}"));
        FatiguedOperationsFrame->setFrameShape(QFrame::StyledPanel);
        FatiguedOperationsFrame->setFrameShadow(QFrame::Raised);
        gridLayout_6 = new QGridLayout(FatiguedOperationsFrame);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        FatiguedOperationsBtn = new QPushButton(FatiguedOperationsFrame);
        FatiguedOperationsBtn->setObjectName(QStringLiteral("FatiguedOperationsBtn"));
        sizePolicy.setHeightForWidth(FatiguedOperationsBtn->sizePolicy().hasHeightForWidth());
        FatiguedOperationsBtn->setSizePolicy(sizePolicy);
        FatiguedOperationsBtn->setStyleSheet(QLatin1String("QPushButton#FatiguedOperationsBtn\n"
"{\n"
"	\n"
"	background-color: rgb(255, 255, 255,0);\n"
"}\n"
"\n"
""));

        verticalLayout_5->addWidget(FatiguedOperationsBtn);

        FatiguedOperationsLabel = new QLabel(FatiguedOperationsFrame);
        FatiguedOperationsLabel->setObjectName(QStringLiteral("FatiguedOperationsLabel"));
        FatiguedOperationsLabel->setStyleSheet(QLatin1String("QLabel#FatiguedOperationsLabel\n"
"{\n"
"	background-color: rgb(255, 255, 255,0);\n"
"	font: 14pt \"Microsoft YaHei UI\";	\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        FatiguedOperationsLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(FatiguedOperationsLabel);


        gridLayout_6->addLayout(verticalLayout_5, 0, 0, 1, 1);


        horizontalLayout->addWidget(FatiguedOperationsFrame);


        verticalLayout_15->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        personcommissionFrame = new QFrame(AlarmWidget);
        personcommissionFrame->setObjectName(QStringLiteral("personcommissionFrame"));
        personcommissionFrame->setStyleSheet(QLatin1String("QFrame#personcommissionFrame\n"
"{\n"
"	border-image: url(:/image/alarm_image/personcom.png);\n"
"}\n"
"\n"
"QFrame#personcommissionFrame::hover\n"
"{\n"
"	border-image: url(:/image/alarm_image/personcom1.png);\n"
"}"));
        personcommissionFrame->setFrameShape(QFrame::StyledPanel);
        personcommissionFrame->setFrameShadow(QFrame::Raised);
        gridLayout_7 = new QGridLayout(personcommissionFrame);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        personcommissionBtn = new QPushButton(personcommissionFrame);
        personcommissionBtn->setObjectName(QStringLiteral("personcommissionBtn"));
        sizePolicy.setHeightForWidth(personcommissionBtn->sizePolicy().hasHeightForWidth());
        personcommissionBtn->setSizePolicy(sizePolicy);
        personcommissionBtn->setStyleSheet(QLatin1String("QPushButton#personcommissionBtn\n"
"{\n"
"	background-color: rgb(255, 255, 255,0);\n"
"}"));

        verticalLayout_7->addWidget(personcommissionBtn);

        personcommissionLabel = new QLabel(personcommissionFrame);
        personcommissionLabel->setObjectName(QStringLiteral("personcommissionLabel"));
        personcommissionLabel->setStyleSheet(QLatin1String("QLabel#personcommissionLabel\n"
"{\n"
"	background-color: rgb(255, 255, 255,0);\n"
"	color: rgb(255, 255, 255);	\n"
"	font: 14pt \"Microsoft YaHei UI\";\n"
"}\n"
""));

        verticalLayout_7->addWidget(personcommissionLabel);


        gridLayout_7->addLayout(verticalLayout_7, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(personcommissionFrame);

        outofjobFrame = new QFrame(AlarmWidget);
        outofjobFrame->setObjectName(QStringLiteral("outofjobFrame"));
        outofjobFrame->setStyleSheet(QLatin1String("QFrame#outofjobFrame\n"
"{\n"
"	border-image: url(:/image/alarm_image/outofjob.png);\n"
"}\n"
"\n"
"QFrame#outofjobFrame::hover\n"
"{\n"
"	border-image: url(:/image/alarm_image/outofjob1.png);\n"
"}"));
        outofjobFrame->setFrameShape(QFrame::StyledPanel);
        outofjobFrame->setFrameShadow(QFrame::Raised);
        gridLayout_8 = new QGridLayout(outofjobFrame);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        outofjobBtn = new QPushButton(outofjobFrame);
        outofjobBtn->setObjectName(QStringLiteral("outofjobBtn"));
        sizePolicy.setHeightForWidth(outofjobBtn->sizePolicy().hasHeightForWidth());
        outofjobBtn->setSizePolicy(sizePolicy);
        outofjobBtn->setStyleSheet(QLatin1String("QPushButton#outofjobBtn\n"
"{\n"
"	background-color: rgb(255, 255, 255,0);\n"
"}"));

        verticalLayout_8->addWidget(outofjobBtn);

        outofjobLabel = new QLabel(outofjobFrame);
        outofjobLabel->setObjectName(QStringLiteral("outofjobLabel"));
        outofjobLabel->setStyleSheet(QLatin1String("QLabel#outofjobLabel\n"
"{\n"
"	background-color: rgb(255, 255, 255,0);\n"
"	color: rgb(255, 255, 255);	\n"
"	font: 14pt \"Microsoft YaHei UI\";\n"
"}\n"
""));

        verticalLayout_8->addWidget(outofjobLabel);


        gridLayout_8->addLayout(verticalLayout_8, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(outofjobFrame);

        personcheckoutFrame = new QFrame(AlarmWidget);
        personcheckoutFrame->setObjectName(QStringLiteral("personcheckoutFrame"));
        personcheckoutFrame->setStyleSheet(QLatin1String("QFrame#personcheckoutFrame\n"
"{\n"
"	border-image: url(:/image/alarm_image/checkout.png);\n"
"}\n"
"\n"
"QFrame#personcheckoutFrame::hover\n"
"{\n"
"	border-image: url(:/image/alarm_image/checkout1.png);\n"
"}"));
        personcheckoutFrame->setFrameShape(QFrame::StyledPanel);
        personcheckoutFrame->setFrameShadow(QFrame::Raised);
        gridLayout_9 = new QGridLayout(personcheckoutFrame);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        personcheckoutBtn = new QPushButton(personcheckoutFrame);
        personcheckoutBtn->setObjectName(QStringLiteral("personcheckoutBtn"));
        sizePolicy.setHeightForWidth(personcheckoutBtn->sizePolicy().hasHeightForWidth());
        personcheckoutBtn->setSizePolicy(sizePolicy);
        personcheckoutBtn->setStyleSheet(QLatin1String("QPushButton#personcheckoutBtn\n"
"{\n"
"	background-color: rgb(255, 255, 255,0);\n"
"}"));

        verticalLayout_9->addWidget(personcheckoutBtn);

        personcheckoutLabel = new QLabel(personcheckoutFrame);
        personcheckoutLabel->setObjectName(QStringLiteral("personcheckoutLabel"));
        personcheckoutLabel->setStyleSheet(QLatin1String("QLabel#personcheckoutLabel\n"
"{\n"
"	background-color: rgb(255, 255, 255,0);\n"
"	color: rgb(255, 255, 255);	\n"
"	font: 14pt \"Microsoft YaHei UI\";\n"
"}"));

        verticalLayout_9->addWidget(personcheckoutLabel);


        gridLayout_9->addLayout(verticalLayout_9, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(personcheckoutFrame);

        numberofpeopleFrame = new QFrame(AlarmWidget);
        numberofpeopleFrame->setObjectName(QStringLiteral("numberofpeopleFrame"));
        numberofpeopleFrame->setStyleSheet(QLatin1String("QFrame#numberofpeopleFrame\n"
"{\n"
"	border-image: url(:/image/alarm_image/authentication.png);\n"
"}\n"
"\n"
"QFrame#numberofpeopleFrame::hover\n"
"{\n"
"	border-image: url(:/image/alarm_image/authentication(hover).png);\n"
"}"));
        numberofpeopleFrame->setFrameShape(QFrame::StyledPanel);
        numberofpeopleFrame->setFrameShadow(QFrame::Raised);
        gridLayout_10 = new QGridLayout(numberofpeopleFrame);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        numberofpeopleBtn = new QPushButton(numberofpeopleFrame);
        numberofpeopleBtn->setObjectName(QStringLiteral("numberofpeopleBtn"));
        sizePolicy.setHeightForWidth(numberofpeopleBtn->sizePolicy().hasHeightForWidth());
        numberofpeopleBtn->setSizePolicy(sizePolicy);
        numberofpeopleBtn->setStyleSheet(QLatin1String("QPushButton#numberofpeopleBtn\n"
"{\n"
"	background-color: rgb(255, 255, 255,0);\n"
"}"));

        verticalLayout_10->addWidget(numberofpeopleBtn);

        numberofpeopleLabel = new QLabel(numberofpeopleFrame);
        numberofpeopleLabel->setObjectName(QStringLiteral("numberofpeopleLabel"));
        numberofpeopleLabel->setStyleSheet(QLatin1String("QLabel#numberofpeopleLabel\n"
"{\n"
"	background-color: rgb(255, 255, 255,0);\n"
"	color: rgb(255, 255, 255);	\n"
"	font: 14pt \"Microsoft YaHei UI\";\n"
"}"));

        verticalLayout_10->addWidget(numberofpeopleLabel);


        gridLayout_10->addLayout(verticalLayout_10, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(numberofpeopleFrame);

        doorworngFrame = new QFrame(AlarmWidget);
        doorworngFrame->setObjectName(QStringLiteral("doorworngFrame"));
        doorworngFrame->setStyleSheet(QLatin1String("QFrame#doorworngFrame\n"
"{\n"
"	border-image: url(:/image/alarm_image/doorwrong.png);\n"
"}\n"
"\n"
"QFrame#doorworngFrame::hover\n"
"{\n"
"	border-image: url(:/image/alarm_image/doorwrong1.png);\n"
"}"));
        doorworngFrame->setFrameShape(QFrame::StyledPanel);
        doorworngFrame->setFrameShadow(QFrame::Raised);
        gridLayout_11 = new QGridLayout(doorworngFrame);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        doorwrongBtn = new QPushButton(doorworngFrame);
        doorwrongBtn->setObjectName(QStringLiteral("doorwrongBtn"));
        sizePolicy.setHeightForWidth(doorwrongBtn->sizePolicy().hasHeightForWidth());
        doorwrongBtn->setSizePolicy(sizePolicy);
        doorwrongBtn->setStyleSheet(QLatin1String("QPushButton#doorwrongBtn\n"
"{\n"
"	background-color: rgb(255, 255, 255,0);\n"
"}"));

        verticalLayout_11->addWidget(doorwrongBtn);

        doorwrongLabel = new QLabel(doorworngFrame);
        doorwrongLabel->setObjectName(QStringLiteral("doorwrongLabel"));
        doorwrongLabel->setStyleSheet(QLatin1String("QLabel#doorwrongLabel\n"
"{\n"
"	background-color:transparent;\n"
"	font: 14pt \"Microsoft YaHei UI\";\n"
"	color: rgb(255, 255, 255);\n"
"\n"
"}"));

        verticalLayout_11->addWidget(doorwrongLabel);


        gridLayout_11->addLayout(verticalLayout_11, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(doorworngFrame);

        NowrokFrame = new QFrame(AlarmWidget);
        NowrokFrame->setObjectName(QStringLiteral("NowrokFrame"));
        NowrokFrame->setStyleSheet(QLatin1String("QFrame#NowrokFrame\n"
"{\n"
"border-image: url(:/image/alarm_image/noticket_press.png)\n"
"}\n"
"\n"
"QFrame#NowrokFrame::hover\n"
"{\n"
"border-image: url(:/image/alarm_image/NoTickethover.png);\n"
"}\n"
"QFrame#NowrokFrame::press\n"
"{\n"
"border-image: url(:/image/alarm_image/noticket_press.png);\n"
"}"));
        NowrokFrame->setFrameShape(QFrame::StyledPanel);
        NowrokFrame->setFrameShadow(QFrame::Raised);
        gridLayout_12 = new QGridLayout(NowrokFrame);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        NoWrokBtn = new QPushButton(NowrokFrame);
        NoWrokBtn->setObjectName(QStringLiteral("NoWrokBtn"));
        sizePolicy.setHeightForWidth(NoWrokBtn->sizePolicy().hasHeightForWidth());
        NoWrokBtn->setSizePolicy(sizePolicy);
        NoWrokBtn->setStyleSheet(QLatin1String("QPushButton#NoWrokBtn\n"
"{\n"
"	background-color: rgb(255, 255, 255,0);\n"
"}"));

        verticalLayout_12->addWidget(NoWrokBtn);

        NoworkLabel = new QLabel(NowrokFrame);
        NoworkLabel->setObjectName(QStringLiteral("NoworkLabel"));
        NoworkLabel->setStyleSheet(QLatin1String("QLabel#NoworkLabel\n"
"{\n"
"	background-color: rgb(255, 255, 255,0);\n"
"	color: rgb(255, 255, 255);	\n"
"	font: 14pt \"Microsoft YaHei UI\";\n"
"}"));

        verticalLayout_12->addWidget(NoworkLabel);


        gridLayout_12->addLayout(verticalLayout_12, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(NowrokFrame);


        verticalLayout_15->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        frame = new QFrame(AlarmWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_14 = new QGridLayout(frame);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255,0);"));

        verticalLayout_14->addWidget(pushButton);

        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_14->addWidget(label);


        gridLayout_14->addLayout(verticalLayout_14, 0, 0, 1, 1);


        horizontalLayout_3->addWidget(frame);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 4);

        verticalLayout_15->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_15->addItem(verticalSpacer_2);

        verticalLayout_15->setStretch(1, 2);
        verticalLayout_15->setStretch(2, 2);
        verticalLayout_15->setStretch(3, 2);

        gridLayout_15->addLayout(verticalLayout_15, 0, 0, 1, 1);


        retranslateUi(AlarmWidget);

        QMetaObject::connectSlotsByName(AlarmWidget);
    } // setupUi

    void retranslateUi(QWidget *AlarmWidget)
    {
        AlarmWidget->setWindowTitle(QApplication::translate("AlarmWidget", "Form", 0));
        GoingIntervalBtn->setText(QString());
        GoingIntervalLabel->setText(QString());
        scanworngBtn->setText(QString());
        scanwronglabel->setText(QString());
        LeaveOutBtn->setText(QString());
        LeaveOutLabel->setText(QString());
        PersonForbidBtn->setText(QString());
        PersonForbidLabel->setText(QString());
        PersonHelpBtn->setText(QString());
        PersonHelpQLabel->setText(QString());
        FatiguedOperationsBtn->setText(QString());
        FatiguedOperationsLabel->setText(QString());
        personcommissionBtn->setText(QString());
        personcommissionLabel->setText(QString());
        outofjobBtn->setText(QString());
        outofjobLabel->setText(QString());
        personcheckoutBtn->setText(QString());
        personcheckoutLabel->setText(QString());
        numberofpeopleBtn->setText(QString());
        numberofpeopleLabel->setText(QString());
        doorwrongBtn->setText(QString());
        doorwrongLabel->setText(QString());
        NoWrokBtn->setText(QString());
        NoworkLabel->setText(QString());
        pushButton->setText(QString());
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AlarmWidget: public Ui_AlarmWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALARMWIDGET_H
