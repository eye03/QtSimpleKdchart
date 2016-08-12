#ifndef LAYERA_H
#define LAYERA_H

#include <QWidget>

namespace Ui {
class LayerA;
}

class LayerA : public QWidget
{
    Q_OBJECT

public:
    explicit LayerA(QWidget *parent = 0);
    ~LayerA();

private:
    Ui::LayerA *ui;
};

#endif // LAYERA_H
