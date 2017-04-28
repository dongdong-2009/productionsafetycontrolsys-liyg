/********************************************************************************
** Form generated from reading UI file 'importantarea.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMPORTANTAREA_H
#define UI_IMPORTANTAREA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImportantArea
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QTableWidget *tableWidget;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *ImportantArea)
    {
        if (ImportantArea->objectName().isEmpty())
            ImportantArea->setObjectName(QStringLiteral("ImportantArea"));
        ImportantArea->resize(1360, 606);
        gridLayout = new QGridLayout(ImportantArea);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        tableWidget = new QTableWidget(ImportantArea);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setStyleSheet(QStringLiteral("border:0px;"));
        tableWidget->setRowCount(0);
        tableWidget->setColumnCount(0);

        verticalLayout->addWidget(tableWidget);

        verticalSpacer_2 = new QSpacerItem(20, 38, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 11);
        verticalLayout->setStretch(2, 1);

        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(ImportantArea);

        QMetaObject::connectSlotsByName(ImportantArea);
    } // setupUi

    void retranslateUi(QWidget *ImportantArea)
    {
        ImportantArea->setWindowTitle(QApplication::translate("ImportantArea", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class ImportantArea: public Ui_ImportantArea {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMPORTANTAREA_H
