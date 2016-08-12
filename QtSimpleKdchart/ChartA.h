#ifndef CHARTA_H
#define CHARTA_H


#include <TableModel.h>
#include <KDChartChart>

#include <QtWidgets/QFrame>

#endif // CHARTA_H

namespace KDChart {
    class Chart;
    class BarDiagram;
}
namespace Ui {
class ChartA;
}

class ChartA:public QWidget
{
    Q_OBJECT

public:
    explicit ChartA(QWidget* parent=0);
    ~ChartA();
    QFrame *chartFrame;

private:
    Ui::ChartA *ui;
    KDChart::Chart* m_chart;
    TableModel m_model;
    KDChart::BarDiagram*  m_lines;
};
