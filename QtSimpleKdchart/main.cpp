#include "ChartA.h"
#include <QApplication>
//#include <KDChartWidget>
//#include <KDChartLineDiagram>
//#include <KDChartLegend>
#include <QDebug>

int main(int argc, char *argv[])
{
    qDebug() << "<main>";

    QApplication a(argc, argv);
    ChartA chartA;
    chartA.show();
    qDebug() << "<main before a.exec>";
    return a.exec();
}
