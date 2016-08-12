#include "LayerB.h"
#include "ui_LayerB.h"

LayerB::LayerB(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LayerB)
{
    ui->setupUi(this);
}

LayerB::~LayerB()
{
    delete ui;
}
