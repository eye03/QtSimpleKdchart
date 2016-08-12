#include "ChartA.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ChartA chartA;
    chartA.show();

    return a.exec();
}
