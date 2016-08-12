#ifndef ITEMA_H
#define ITEMA_H

#include <QWidget>

namespace Ui {
class ItemA;
}

class ItemA : public QWidget
{
    Q_OBJECT

public:
    explicit ItemA(QWidget *parent = 0);
    ~ItemA();

private:
    Ui::ItemA *ui;
};

#endif // ITEMA_H
