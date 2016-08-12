#ifndef LAYERB_H
#define LAYERB_H

#include <QWidget>

namespace Ui {
class LayerB;
}

class LayerB : public QWidget
{
    Q_OBJECT

public:
    explicit LayerB(QWidget *parent = 0);
    ~LayerB();

private:
    Ui::LayerB *ui;
};

#endif // LAYERB_H
