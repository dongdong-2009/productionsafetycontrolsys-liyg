/********************************************************************************
** Form generated from reading UI file 'safetrendanalysis.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAFETRENDANALYSIS_H
#define UI_SAFETRENDANALYSIS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SafeTrendAnalysis
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QWidget *AnalysisWidget;
    QWidget *AreaWidget;

    void setupUi(QWidget *SafeTrendAnalysis)
    {
        if (SafeTrendAnalysis->objectName().isEmpty())
            SafeTrendAnalysis->setObjectName(QStringLiteral("SafeTrendAnalysis"));
        SafeTrendAnalysis->resize(1363, 664);
        gridLayout = new QGridLayout(SafeTrendAnalysis);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(-1, -1, -1, 0);
        AnalysisWidget = new QWidget(SafeTrendAnalysis);
        AnalysisWidget->setObjectName(QStringLiteral("AnalysisWidget"));

        verticalLayout->addWidget(AnalysisWidget);

        AreaWidget = new QWidget(SafeTrendAnalysis);
        AreaWidget->setObjectName(QStringLiteral("AreaWidget"));

        verticalLayout->addWidget(AreaWidget);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);

        verticalLayout_2->addLayout(verticalLayout);

        verticalLayout_2->setStretch(0, 3);

        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);


        retranslateUi(SafeTrendAnalysis);

        QMetaObject::connectSlotsByName(SafeTrendAnalysis);
    } // setupUi

    void retranslateUi(QWidget *SafeTrendAnalysis)
    {
        SafeTrendAnalysis->setWindowTitle(QApplication::translate("SafeTrendAnalysis", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class SafeTrendAnalysis: public Ui_SafeTrendAnalysis {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAFETRENDANALYSIS_H
