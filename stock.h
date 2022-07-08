#ifndef STOCK_H
#define STOCK_H

#include <QDialog>

namespace Ui {
class Stock;
}

class Stock : public QDialog
{
    Q_OBJECT

public:
    explicit Stock(QWidget *parent = nullptr);
    ~Stock();

private:
    Ui::Stock *ui;
};

#endif // STOCK_H
