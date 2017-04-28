/********************************************************************************
** Form generated from reading UI file 'regionname.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGIONNAME_H
#define UI_REGIONNAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegionName
{
public:
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;

    void setupUi(QWidget *RegionName)
    {
        if (RegionName->objectName().isEmpty())
            RegionName->setObjectName(QStringLiteral("RegionName"));
        RegionName->resize(832, 409);
        RegionName->setStyleSheet(QStringLiteral(""));
        gridLayout = new QGridLayout(RegionName);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(RegionName);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 830, 407));
        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);


        retranslateUi(RegionName);

        QMetaObject::connectSlotsByName(RegionName);
    } // setupUi

    void retranslateUi(QWidget *RegionName)
    {
        RegionName->setWindowTitle(QApplication::translate("RegionName", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class RegionName: public Ui_RegionName {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGIONNAME_H
