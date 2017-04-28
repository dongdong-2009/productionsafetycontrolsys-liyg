/****************************************************************************
**
** Copyright (C) 2016 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the Qt Charts module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:GPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3 or (at your option) any later version
** approved by the KDE Free Qt Foundation. The licenses are as published by
** the Free Software Foundation and appearing in the file LICENSE.GPL3
** included in the packaging of this file. Please review the following
** information to ensure the GNU General Public License requirements will
** be met: https://www.gnu.org/licenses/gpl-3.0.html.
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "chartview.h"
#include <QtCharts/QScatterSeries>
#include <QtCharts/QLegendMarker>
#include <QtGui/QImage>
#include <QtGui/QPainter>
#include <QtCore/QtMath>
#include <QLineSeries>
#include <QBarSet>
#include <QBarCategoryAxis>
#include <QValueAxis>

const float Pi = 3.14159f;

ChartView::ChartView(QWidget *parent) :
    QChartView(new QChart(), parent)
{



    //![1]
    QLineSeries *series0 = new QLineSeries;
    QLineSeries *series1 = new QLineSeries();
//    QLineSeries *series2 = new QLineSeries();  //画线条

    //![1]
    QStringList categories;
    categories<<tr("周一")<<tr("周二")<<tr("周三")<<tr("周四")<<tr("周五")<<tr("周六")<<tr("周日");
    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append(categories);

    QValueAxis *axisY = new QValueAxis();
    chart()->setAxisY(axisY, series0);
    chart()->setAnimationOptions(QChart::SeriesAnimations);  //设置动画
    chart()->setAnimationDuration(1000);
    //![2]
//    series0->append(0, 6);
//    series0->append(2, 4);
//    series0->append(3, 8);
//    series0->append(7, 4);
//    series0->append(10, 5);

//    *series1 << QPointF(1, 1) << QPointF(3, 3) << QPointF(7, 6) << QPointF(8, 3) << QPointF(10, 2);
//    *series2 << QPointF(1, 5) << QPointF(4, 6) << QPointF(6, 3) << QPointF(9, 5);
    datalist=database->SelectWorkTotalPic();
    WorkTotalPic work;
    for(int i=0;i<datalist.count();++i)
    {
        work=datalist.at(i);
        QString alarmtime=work.alarmtime;
        QString alarmtypetime=work.alarmtypetime;
        QString alarmcount=work.alarmcount;
        QString data=alarmtime.mid(0,4);
        QString x1=alarmtime.mid(5,2);
        QString x2=alarmtime.mid(8,2);
        data.append(x1);
        data.append(x2);
        //qDebug()<<"x="<<data;
        if(alarmtypetime.compare("人员闯入禁止区域")==0)
        {
            series0->setName(alarmtypetime);
            series0->append(alarmtime.toInt(),alarmcount.toInt());
            //qDebug()<<alarmtime.toInt()<<alarmcount.toInt();
        }

        if(alarmtypetime.compare("扫码错误")==0)
        {
            series1->setName(alarmtypetime);
            series1->append(alarmtime.toInt(),alarmcount.toInt());
        }

    }

    setRenderHint(QPainter::Antialiasing);
    chart()->setTitle(tr("本月安全趋势分析(曲线图)"));
    chart()->addSeries(series0);
    chart()->addSeries(series1);
//    chart()->addSeries(series2);
//    chart()->addSeries(series3);
//    chart()->addSeries(series4);
    chart()->setAxisX(axisX, series1);
    axisX->setRange(QString(tr("周一")), QString(tr("周日")));
    axisY->setRange(500,3000);
    chart()->setDropShadowEnabled(false);
}
