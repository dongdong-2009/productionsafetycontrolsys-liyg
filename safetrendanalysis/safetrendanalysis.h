#ifndef SAFETRENDANALYSIS_H
#define SAFETRENDANALYSIS_H

#include <QWidget>
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>
#include <QtCharts/QAreaSeries>
#include <QBarSet>
#include <QBarCategoryAxis>
#include <QValueAxis>
#include <QLineSeries>
#include <QObject>
#include <QtCore/QDateTime>
#include <QtCharts/QDateTimeAxis>
#include <QtCore/QFile>
#include <QtCore/QTextStream>
#include <QVBoxLayout>
#include <QtCharts/QPercentBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLegend>
#include <QtCharts/QBarCategoryAxis>
#include "readdatafrommysql/readdatafrommysql.h"
#include <QLabel>

QT_CHARTS_USE_NAMESPACE

#define ALARM_TYPE_NUM 9  //警报类型数
#define AREA_DISP_DAYS 7  //区域堆叠图显示天数
#define ANI_DISP_DAYS 14  //安全显示分析图显示天数

namespace Ui {
class SafeTrendAnalysis;
}

class SafeTrendAnalysis : public QWidget
{
    Q_OBJECT

public:
    explicit SafeTrendAnalysis(QWidget *parent = 0);
    ~SafeTrendAnalysis();
    void InitAniLayoutChart(QList<AniLayoutChart> AniLayoutChartList); //安全趋势分析
    void InitAreaLayoutChart(QList<AreaLayoutChart> AreaLayoutChartList); //告警类型堆叠图
private slots:
    void ShowData(bool,int);
private:
    Ui::SafeTrendAnalysis *ui;
    QVBoxLayout *AniLayout;
    QVBoxLayout *AreaLayout;
    QBarSet *set[ALARM_TYPE_NUM];
    QStringList TempType;
    QChart* chart;
};

#endif // SAFETRENDANALYSIS_H
