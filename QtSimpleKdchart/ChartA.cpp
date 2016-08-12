#include "ChartA.h"
#include "ui_ChartA.h"
#include <QDebug>

#include <KDChartChart>
#include <KDChartBarDiagram>
#include <KDChartTextAttributes>
#include <KDChartRulerAttributes>
#include <KDChartFrameAttributes>

using namespace KDChart;

ChartA::ChartA( QWidget *parent):
    QWidget(parent),
    ui(new Ui::ChartA)
{    
    ui->setupUi(this);
    m_chart = new Chart();
    ui->horizontalLayout->addWidget(m_chart);

    m_model.loadFromCSV( ":/barSimple.csv" );

    // Set up the diagram
    m_lines = new BarDiagram();
    m_lines->setModel( &m_model );

    // assign diagram to chart view
    m_chart->coordinatePlane()->replaceDiagram( m_lines );
}

ChartA::~ChartA()
{
    delete ui;
}
