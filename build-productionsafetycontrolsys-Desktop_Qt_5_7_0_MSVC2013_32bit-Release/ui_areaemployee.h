/********************************************************************************
** Form generated from reading UI file 'areaemployee.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AREAEMPLOYEE_H
#define UI_AREAEMPLOYEE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AreaEmployee
{
public:
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *workSumBtn;
    QPushButton *SignPerSumBtn;
    QPushButton *NoSignPerSumBtn;
    QPushButton *startWorkBtn;
    QPushButton *NostartWorkBtn;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label;

    void setupUi(QWidget *AreaEmployee)
    {
        if (AreaEmployee->objectName().isEmpty())
            AreaEmployee->setObjectName(QStringLiteral("AreaEmployee"));
        AreaEmployee->resize(1366, 697);
        gridLayout_2 = new QGridLayout(AreaEmployee);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        workSumBtn = new QPushButton(AreaEmployee);
        workSumBtn->setObjectName(QStringLiteral("workSumBtn"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(workSumBtn->sizePolicy().hasHeightForWidth());
        workSumBtn->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(workSumBtn);

        SignPerSumBtn = new QPushButton(AreaEmployee);
        SignPerSumBtn->setObjectName(QStringLiteral("SignPerSumBtn"));
        sizePolicy.setHeightForWidth(SignPerSumBtn->sizePolicy().hasHeightForWidth());
        SignPerSumBtn->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(SignPerSumBtn);

        NoSignPerSumBtn = new QPushButton(AreaEmployee);
        NoSignPerSumBtn->setObjectName(QStringLiteral("NoSignPerSumBtn"));
        sizePolicy.setHeightForWidth(NoSignPerSumBtn->sizePolicy().hasHeightForWidth());
        NoSignPerSumBtn->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(NoSignPerSumBtn);

        startWorkBtn = new QPushButton(AreaEmployee);
        startWorkBtn->setObjectName(QStringLiteral("startWorkBtn"));
        sizePolicy.setHeightForWidth(startWorkBtn->sizePolicy().hasHeightForWidth());
        startWorkBtn->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(startWorkBtn);

        NostartWorkBtn = new QPushButton(AreaEmployee);
        NostartWorkBtn->setObjectName(QStringLiteral("NostartWorkBtn"));
        sizePolicy.setHeightForWidth(NostartWorkBtn->sizePolicy().hasHeightForWidth());
        NostartWorkBtn->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(NostartWorkBtn);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 1);
        horizontalLayout->setStretch(3, 1);
        horizontalLayout->setStretch(4, 1);

        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        tableWidget = new QTableWidget(AreaEmployee);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        if (tableWidget->rowCount() < 8)
            tableWidget->setRowCount(8);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setStyleSheet(QStringLiteral("border:0px;"));
        tableWidget->setRowCount(8);
        tableWidget->setColumnCount(5);

        gridLayout->addWidget(tableWidget, 1, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label = new QLabel(AreaEmployee);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label);

        horizontalLayout_2->setStretch(0, 10);
        horizontalLayout_2->setStretch(1, 2);

        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        gridLayout->setRowStretch(0, 1);
        gridLayout->setRowStretch(1, 30);
        gridLayout->setRowStretch(2, 2);

        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 1);

        gridLayout_2->setRowStretch(0, 1);
        gridLayout_2->setRowStretch(1, 10);

        retranslateUi(AreaEmployee);

        QMetaObject::connectSlotsByName(AreaEmployee);
    } // setupUi

    void retranslateUi(QWidget *AreaEmployee)
    {
        AreaEmployee->setWindowTitle(QApplication::translate("AreaEmployee", "Form", 0));
        workSumBtn->setText(QApplication::translate("AreaEmployee", "PushButton", 0));
        SignPerSumBtn->setText(QApplication::translate("AreaEmployee", "PushButton", 0));
        NoSignPerSumBtn->setText(QApplication::translate("AreaEmployee", "PushButton", 0));
        startWorkBtn->setText(QApplication::translate("AreaEmployee", "PushButton", 0));
        NostartWorkBtn->setText(QApplication::translate("AreaEmployee", "PushButton", 0));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AreaEmployee: public Ui_AreaEmployee {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AREAEMPLOYEE_H
