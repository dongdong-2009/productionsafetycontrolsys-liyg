/********************************************************************************
** Form generated from reading UI file 'hk_video.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HK_VIDEO_H
#define UI_HK_VIDEO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_HK_Video
{
public:
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout;
    QListWidget *Video_listWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *personLabel;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QListWidget *listWidget;
    QFrame *camera_frame_7;
    QGridLayout *gridLayout_33;
    QLabel *HK_Video_Label;
    QTableWidget *Area_Alarm_tablwidget;

    void setupUi(QDialog *HK_Video)
    {
        if (HK_Video->objectName().isEmpty())
            HK_Video->setObjectName(QStringLiteral("HK_Video"));
        HK_Video->resize(1240, 676);
        HK_Video->setStyleSheet(QStringLiteral(""));
        gridLayout_3 = new QGridLayout(HK_Video);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        Video_listWidget = new QListWidget(HK_Video);
        Video_listWidget->setObjectName(QStringLiteral("Video_listWidget"));
        Video_listWidget->setMinimumSize(QSize(1, 1));
        Video_listWidget->setStyleSheet(QLatin1String("QListWidget#Video_listWidget\n"
"{\n"
"	background-color:transparent;\n"
"}"));
        Video_listWidget->setFrameShape(QFrame::Box);
        Video_listWidget->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(Video_listWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox = new QGroupBox(HK_Video);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setStyleSheet(QLatin1String("  font: 16px \"Microsoft YaHei UI\";\n"
"	color: rgb(255, 255, 255);"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(1, 1, 1, 1);
        personLabel = new QLabel(groupBox);
        personLabel->setObjectName(QStringLiteral("personLabel"));
        personLabel->setStyleSheet(QLatin1String("QLabel#personLabel\n"
"{\n"
"	font: 14px \"Microsoft YaHei UI\";\n"
"	color: rgb(255, 255, 255);\n"
"\n"
"}"));

        gridLayout_2->addWidget(personLabel, 0, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        groupBox_2 = new QGroupBox(HK_Video);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setStyleSheet(QLatin1String("  font: 16px \"Microsoft YaHei UI\";\n"
"	color: rgb(255, 255, 255);"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(9, 9, 9, 9);
        listWidget = new QListWidget(groupBox_2);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setStyleSheet(QLatin1String("QListWidget#listWidget\n"
"{\n"
"	border:0px;\n"
"}"));

        gridLayout->addWidget(listWidget, 0, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox_2);

        verticalLayout_2->setStretch(0, 5);
        verticalLayout_2->setStretch(1, 1);
        verticalLayout_2->setStretch(2, 7);

        horizontalLayout->addLayout(verticalLayout_2);

        camera_frame_7 = new QFrame(HK_Video);
        camera_frame_7->setObjectName(QStringLiteral("camera_frame_7"));
        sizePolicy.setHeightForWidth(camera_frame_7->sizePolicy().hasHeightForWidth());
        camera_frame_7->setSizePolicy(sizePolicy);
        camera_frame_7->setMinimumSize(QSize(1, 1));
        camera_frame_7->setStyleSheet(QLatin1String("QFrame#camera_frame_7\n"
"{\n"
"	border:1px solid rgb(60, 61, 66);\n"
"}"));
        camera_frame_7->setFrameShape(QFrame::Panel);
        camera_frame_7->setFrameShadow(QFrame::Plain);
        gridLayout_33 = new QGridLayout(camera_frame_7);
        gridLayout_33->setObjectName(QStringLiteral("gridLayout_33"));
        gridLayout_33->setContentsMargins(0, 10, 0, 0);
        HK_Video_Label = new QLabel(camera_frame_7);
        HK_Video_Label->setObjectName(QStringLiteral("HK_Video_Label"));
        sizePolicy.setHeightForWidth(HK_Video_Label->sizePolicy().hasHeightForWidth());
        HK_Video_Label->setSizePolicy(sizePolicy);
        HK_Video_Label->setStyleSheet(QLatin1String("QLabel#HK_Video_Label\n"
"{\n"
"	border-image: url(:/image/securitycamera_hover.png);\n"
"}\n"
""));
        HK_Video_Label->setAlignment(Qt::AlignCenter);

        gridLayout_33->addWidget(HK_Video_Label, 0, 0, 1, 1);


        horizontalLayout->addWidget(camera_frame_7);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout);

        Area_Alarm_tablwidget = new QTableWidget(HK_Video);
        if (Area_Alarm_tablwidget->columnCount() < 8)
            Area_Alarm_tablwidget->setColumnCount(8);
        if (Area_Alarm_tablwidget->rowCount() < 4)
            Area_Alarm_tablwidget->setRowCount(4);
        Area_Alarm_tablwidget->setObjectName(QStringLiteral("Area_Alarm_tablwidget"));
        Area_Alarm_tablwidget->setStyleSheet(QStringLiteral("border:0px;"));
        Area_Alarm_tablwidget->setRowCount(4);
        Area_Alarm_tablwidget->setColumnCount(8);

        verticalLayout->addWidget(Area_Alarm_tablwidget);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 7);
        verticalLayout->setStretch(2, 3);

        gridLayout_3->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(HK_Video);

        QMetaObject::connectSlotsByName(HK_Video);
    } // setupUi

    void retranslateUi(QDialog *HK_Video)
    {
        HK_Video->setWindowTitle(QApplication::translate("HK_Video", "Dialog", 0));
        groupBox->setTitle(QApplication::translate("HK_Video", "\347\216\260\345\234\272\344\275\234\344\270\232", 0));
        personLabel->setText(QString());
        groupBox_2->setTitle(QApplication::translate("HK_Video", "\347\216\260\345\234\272\344\272\272\345\221\230", 0));
        HK_Video_Label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class HK_Video: public Ui_HK_Video {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HK_VIDEO_H
