#include "safetrendanalysis.h"
#include "ui_safetrendanalysis.h"
#include <QColor>
#include <QApplication>
#include <QDesktopWidget>

SafeTrendAnalysis::SafeTrendAnalysis(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SafeTrendAnalysis)
{
    ui->setupUi(this);
    AniLayout = new QVBoxLayout(ui->AnalysisWidget);
    AreaLayout = new QVBoxLayout(ui->AreaWidget);
}

SafeTrendAnalysis::~SafeTrendAnalysis()
{
    delete ui;

}

void SafeTrendAnalysis::InitAniLayoutChart(QList<AniLayoutChart> AniLayoutChartList)
{
    QLineSeries *series = new QLineSeries();

    QDateTime EndTime = QDateTime::currentDateTime();//获取系统现在的时间
    EndTime.setTime(QTime(0,0));
    int days = -(ANI_DISP_DAYS - 1);//显示总天数
    QDateTime StartTime = EndTime.addDays(days);
    StartTime.setTime(QTime(0,0));
    QDateTime xValue = StartTime;

    do
    {
        bool flag = false;
        for(int i = 0; i < AniLayoutChartList.count(); i++)
        {
            if(xValue.date() == AniLayoutChartList.at(i).Data_Time.date())
            {
                flag = true;
                series->append(AniLayoutChartList.at(i).Data_Time.toMSecsSinceEpoch(), AniLayoutChartList.at(i).Alarm_Num);
                break;
            }

        }
        if(!flag)
        {
            series->append(xValue.toMSecsSinceEpoch(), 0);
        }
        xValue = xValue.addDays(1);
      //  xValue.setTime(QTime(0,0));

    }while(xValue <= EndTime);

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->legend()->hide();
    chart->setTitle(QStringLiteral("安全趋势分析图"));

    QDateTimeAxis *axisX = new QDateTimeAxis;
    axisX->setTickCount(ANI_DISP_DAYS);
    axisX->setFormat("yyyy.MM.dd");
    //axisX->setTitleText("Date");
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    QValueAxis *axisY = new QValueAxis;
    axisY->setLabelFormat("%i");
    //axisY->setTitleText("Sunspots count");
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    AniLayout->addWidget(chartView);

}


void SafeTrendAnalysis::InitAreaLayoutChart(QList<AreaLayoutChart> AreaLayoutChartList)
{
    //qDebug()<<"111="<<AreaLayoutChartList.count();
	TempType << QStringLiteral("走错间隔") << QStringLiteral("人员代办") << QStringLiteral("智能门禁告警") << QStringLiteral("作业顺序错误") << QStringLiteral("作业空间人员求助") << QStringLiteral("作业未按期开工") << QStringLiteral("作业期间脱离工作岗位") << QStringLiteral("作业人员未签到") << QStringLiteral ("人员闯入禁止区域");

    for(int i = 0; i < ALARM_TYPE_NUM; i++)
    {
        set[i] = new QBarSet(TempType.at(i));
        connect(set[i],SIGNAL(hovered(bool,int)),this,SLOT(ShowData(bool,int)));
    }

    QDateTime EndTime = QDateTime::currentDateTime();//获取系统现在的时间
    EndTime.setTime(QTime(0,0));
    int days = -(AREA_DISP_DAYS - 1);
    QDateTime StartTime = EndTime.addDays(days);
    StartTime.setTime(QTime(0,0));
    QDateTime xValue = StartTime;
    QStringList categories;

    int Tmp[AREA_DISP_DAYS][ALARM_TYPE_NUM]={{0,0}};
    int y = 0;
    do
    {
        for(int i = 0; i < AreaLayoutChartList.count(); i++)
        {
            if(xValue.date() == AreaLayoutChartList.at(i).Data_Time.date())
            {
                for(int j = 0; j < TempType.count(); j++)
                {
                    if(AreaLayoutChartList.at(i).Alarm_Type  == TempType.at(j))
                    {
                        Tmp[y][j] = AreaLayoutChartList.at(i).Alarm_Num;
                    }
                }
            }
        }
        categories << xValue.date().toString("yyyy.MM.dd");
        xValue = xValue.addDays(1);
        y++;

    }while(xValue <= EndTime);

    for(int i = 0; i < AREA_DISP_DAYS; i++)
    {
        for(int j = 0; j < ALARM_TYPE_NUM; j++)
        {
            *set[j]<<Tmp[i][j];
        }
    }

    set[0]->setColor(QColor(255, 0, 0, 255));
    set[1]->setColor(QColor(255, 0, 0, 127));
    set[2]->setColor(QColor(170, 170, 127, 255));
    set[3]->setColor(QColor(0, 255, 0, 255));
    set[4]->setColor(QColor(0, 255, 255, 255));
    set[5]->setColor(QColor(255, 255, 0, 255));
    set[6]->setColor(QColor(255, 85, 255, 255));
    set[7]->setColor(QColor(255, 170, 0, 255));
    set[8]->setColor(QColor(0, 85, 127, 255));

    QPercentBarSeries *series = new QPercentBarSeries();

    for(int i = 0; i < ALARM_TYPE_NUM; i++)
    {
        series->append(set[i]);
    }

    chart = new QChart();
    chart->addSeries(series);
	chart->setTitle(QStringLiteral("安全趋势分析图"));
    chart->setAnimationOptions(QChart::SeriesAnimations);

    QBarCategoryAxis *axis = new QBarCategoryAxis();
    axis->append(categories);
    chart->createDefaultAxes();
    chart->setAxisX(axis, series);

    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignRight);

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    AreaLayout->addWidget(chartView);

}


void SafeTrendAnalysis::ShowData(bool status, int index)
{
    status=status;
    index=index;
    QObject *obj = sender();
    QBarSet *button_tmp = qobject_cast<QBarSet *>(obj);
    qDebug()<<"obj="<<button_tmp;
    if(button_tmp)
    {
       chart->setToolTip(button_tmp->label());
    }
}
