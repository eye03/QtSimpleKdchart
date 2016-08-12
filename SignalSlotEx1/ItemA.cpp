#include "ItemA.h"
#include "ui_ItemA.h"

ItemA::ItemA(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ItemA)
{
    ui->setupUi(this);
}

ItemA::~ItemA()
{
    delete ui;
}
