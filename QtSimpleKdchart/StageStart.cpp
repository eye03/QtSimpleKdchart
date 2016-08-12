#include "StageStart.h"
#include "ui_StageStart.h"

StageStart::StageStart(QWidget *parent) :
    StageBase(parent),
    ui(new Ui::StageStart)
{
    ui->setupUi(this);

    GLOBAL().fn();
}

StageStart::~StageStart()
{
    delete ui;
}
