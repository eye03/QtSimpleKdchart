#include "LayerA.h"
#include "ui_LayerA.h"

LayerA::LayerA(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LayerA)
{
    ui->setupUi(this);
}

LayerA::~LayerA()
{
    delete ui;
}
