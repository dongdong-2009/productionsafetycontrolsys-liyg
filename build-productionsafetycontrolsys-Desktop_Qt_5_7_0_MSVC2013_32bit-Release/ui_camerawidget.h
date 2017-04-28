/********************************************************************************
** Form generated from reading UI file 'camerawidget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERAWIDGET_H
#define UI_CAMERAWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CameraWidget
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QListWidget *Camera_listWidget;
    QHBoxLayout *horizontalLayout;
    QFrame *frame_12;
    QGridLayout *gridLayout_6;
    QVBoxLayout *verticalLayout_12;
    QLabel *man;
    QSpacerItem *verticalSpacer_9;
    QPushButton *Door_Button;
    QSpacerItem *verticalSpacer_8;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_23;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_24;
    QLabel *label_17;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_21;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label_22;
    QVBoxLayout *verticalLayout_13;
    QSpacerItem *verticalSpacer_11;
    QPushButton *Video_Button;
    QSpacerItem *verticalSpacer_10;
    QPushButton *Alarm_Lamp_Button;
    QTableWidget *tableWidget_Work;
    QVBoxLayout *verticalLayout_3;
    QTableWidget *tableWidget_Alarm;

    void setupUi(QWidget *CameraWidget)
    {
        if (CameraWidget->objectName().isEmpty())
            CameraWidget->setObjectName(QStringLiteral("CameraWidget"));
        CameraWidget->resize(1392, 713);
        layoutWidget = new QWidget(CameraWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 10, 1371, 691));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(15, 15, 15, 15);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, -1, -1, -1);
        Camera_listWidget = new QListWidget(layoutWidget);
        Camera_listWidget->setObjectName(QStringLiteral("Camera_listWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Camera_listWidget->sizePolicy().hasHeightForWidth());
        Camera_listWidget->setSizePolicy(sizePolicy);
        Camera_listWidget->setMinimumSize(QSize(1, 1));
        Camera_listWidget->setMaximumSize(QSize(16777215, 16777215));
        Camera_listWidget->setFlow(QListView::LeftToRight);
        Camera_listWidget->setResizeMode(QListView::Adjust);

        verticalLayout->addWidget(Camera_listWidget);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        frame_12 = new QFrame(layoutWidget);
        frame_12->setObjectName(QStringLiteral("frame_12"));
        sizePolicy.setHeightForWidth(frame_12->sizePolicy().hasHeightForWidth());
        frame_12->setSizePolicy(sizePolicy);
        frame_12->setStyleSheet(QStringLiteral(""));
        frame_12->setFrameShape(QFrame::Box);
        frame_12->setFrameShadow(QFrame::Raised);
        gridLayout_6 = new QGridLayout(frame_12);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(1, 1, 1, 1);
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(1, -1, 1, -1);
        man = new QLabel(frame_12);
        man->setObjectName(QStringLiteral("man"));

        verticalLayout_12->addWidget(man);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_12->addItem(verticalSpacer_9);

        Door_Button = new QPushButton(frame_12);
        Door_Button->setObjectName(QStringLiteral("Door_Button"));
        sizePolicy.setHeightForWidth(Door_Button->sizePolicy().hasHeightForWidth());
        Door_Button->setSizePolicy(sizePolicy);
        Door_Button->setMinimumSize(QSize(40, 0));
        Door_Button->setMaximumSize(QSize(50, 50));
        Door_Button->setStyleSheet(QStringLiteral(""));

        verticalLayout_12->addWidget(Door_Button);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_12->addItem(verticalSpacer_8);

        verticalLayout_12->setStretch(0, 1);
        verticalLayout_12->setStretch(1, 2);
        verticalLayout_12->setStretch(2, 1);
        verticalLayout_12->setStretch(3, 4);

        gridLayout_6->addLayout(verticalLayout_12, 0, 0, 1, 1);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_8);

        label_23 = new QLabel(frame_12);
        label_23->setObjectName(QStringLiteral("label_23"));
        sizePolicy.setHeightForWidth(label_23->sizePolicy().hasHeightForWidth());
        label_23->setSizePolicy(sizePolicy);
        label_23->setPixmap(QPixmap(QString::fromUtf8(":/image/mini.png")));

        horizontalLayout_10->addWidget(label_23);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_9);

        label_24 = new QLabel(frame_12);
        label_24->setObjectName(QStringLiteral("label_24"));
        sizePolicy.setHeightForWidth(label_24->sizePolicy().hasHeightForWidth());
        label_24->setSizePolicy(sizePolicy);
        label_24->setPixmap(QPixmap(QString::fromUtf8(":/image/mini.png")));

        horizontalLayout_10->addWidget(label_24);


        verticalLayout_11->addLayout(horizontalLayout_10);

        label_17 = new QLabel(frame_12);
        label_17->setObjectName(QStringLiteral("label_17"));
        sizePolicy.setHeightForWidth(label_17->sizePolicy().hasHeightForWidth());
        label_17->setSizePolicy(sizePolicy);
        label_17->setFrameShape(QFrame::NoFrame);
        label_17->setPixmap(QPixmap(QString::fromUtf8(":/image/Real_Area2.png")));

        verticalLayout_11->addWidget(label_17);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_11);

        label_21 = new QLabel(frame_12);
        label_21->setObjectName(QStringLiteral("label_21"));
        sizePolicy.setHeightForWidth(label_21->sizePolicy().hasHeightForWidth());
        label_21->setSizePolicy(sizePolicy);
        label_21->setPixmap(QPixmap(QString::fromUtf8(":/image/mini.png")));

        horizontalLayout_11->addWidget(label_21);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_10);

        label_22 = new QLabel(frame_12);
        label_22->setObjectName(QStringLiteral("label_22"));
        sizePolicy.setHeightForWidth(label_22->sizePolicy().hasHeightForWidth());
        label_22->setSizePolicy(sizePolicy);
        label_22->setPixmap(QPixmap(QString::fromUtf8(":/image/mini.png")));

        horizontalLayout_11->addWidget(label_22);


        verticalLayout_11->addLayout(horizontalLayout_11);

        verticalLayout_11->setStretch(0, 1);
        verticalLayout_11->setStretch(1, 10);
        verticalLayout_11->setStretch(2, 1);

        gridLayout_6->addLayout(verticalLayout_11, 0, 1, 1, 1);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(1, -1, 1, -1);
        verticalSpacer_11 = new QSpacerItem(20, 118, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_13->addItem(verticalSpacer_11);

        Video_Button = new QPushButton(frame_12);
        Video_Button->setObjectName(QStringLiteral("Video_Button"));
        sizePolicy.setHeightForWidth(Video_Button->sizePolicy().hasHeightForWidth());
        Video_Button->setSizePolicy(sizePolicy);
        Video_Button->setMinimumSize(QSize(40, 0));
        Video_Button->setMaximumSize(QSize(50, 16777215));
        Video_Button->setStyleSheet(QStringLiteral(" border-image: url(:/image/securitycamera.png);"));

        verticalLayout_13->addWidget(Video_Button);

        verticalSpacer_10 = new QSpacerItem(20, 140, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_13->addItem(verticalSpacer_10);

        Alarm_Lamp_Button = new QPushButton(frame_12);
        Alarm_Lamp_Button->setObjectName(QStringLiteral("Alarm_Lamp_Button"));
        sizePolicy.setHeightForWidth(Alarm_Lamp_Button->sizePolicy().hasHeightForWidth());
        Alarm_Lamp_Button->setSizePolicy(sizePolicy);
        Alarm_Lamp_Button->setMinimumSize(QSize(5, 5));
        Alarm_Lamp_Button->setMaximumSize(QSize(50, 50));
        Alarm_Lamp_Button->setStyleSheet(QStringLiteral("border-image: url(:/image/ooopic_1437667045.png);"));

        verticalLayout_13->addWidget(Alarm_Lamp_Button);

        verticalLayout_13->setStretch(0, 4);
        verticalLayout_13->setStretch(1, 1);
        verticalLayout_13->setStretch(2, 4);
        verticalLayout_13->setStretch(3, 1);

        gridLayout_6->addLayout(verticalLayout_13, 0, 2, 1, 1);


        horizontalLayout->addWidget(frame_12);

        tableWidget_Work = new QTableWidget(layoutWidget);
        tableWidget_Work->setObjectName(QStringLiteral("tableWidget_Work"));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush1(QColor(73, 79, 56, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        QBrush brush2(QColor(120, 120, 120, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        tableWidget_Work->setPalette(palette);
        QFont font;
        font.setPointSize(10);
        tableWidget_Work->setFont(font);
        tableWidget_Work->setStyleSheet(QStringLiteral(""));
        tableWidget_Work->setGridStyle(Qt::SolidLine);
        tableWidget_Work->setRowCount(0);
        tableWidget_Work->setColumnCount(0);

        horizontalLayout->addWidget(tableWidget_Work);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        tableWidget_Alarm = new QTableWidget(layoutWidget);
        if (tableWidget_Alarm->columnCount() < 9)
            tableWidget_Alarm->setColumnCount(9);
        if (tableWidget_Alarm->rowCount() < 7)
            tableWidget_Alarm->setRowCount(7);
        tableWidget_Alarm->setObjectName(QStringLiteral("tableWidget_Alarm"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        tableWidget_Alarm->setPalette(palette1);
        tableWidget_Alarm->setFont(font);
        tableWidget_Alarm->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        tableWidget_Alarm->setRowCount(7);
        tableWidget_Alarm->setColumnCount(9);
        tableWidget_Alarm->verticalHeader()->setDefaultSectionSize(30);

        verticalLayout_3->addWidget(tableWidget_Alarm);

        verticalLayout_3->setStretch(0, 15);

        verticalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 10);
        verticalLayout_2->setStretch(2, 7);

        retranslateUi(CameraWidget);

        QMetaObject::connectSlotsByName(CameraWidget);
    } // setupUi

    void retranslateUi(QWidget *CameraWidget)
    {
        CameraWidget->setWindowTitle(QApplication::translate("CameraWidget", "Form", 0));
        man->setText(QString());
        Door_Button->setText(QString());
        label_23->setText(QString());
        label_24->setText(QString());
        label_17->setText(QString());
        label_21->setText(QString());
        label_22->setText(QString());
        Video_Button->setText(QString());
        Alarm_Lamp_Button->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CameraWidget: public Ui_CameraWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERAWIDGET_H
