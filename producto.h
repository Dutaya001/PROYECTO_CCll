#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <QDialog>

namespace Ui {
class Producto;
}

class Producto : public QDialog
{
    Q_OBJECT

public:
    explicit Producto(QWidget *parent = nullptr);
    ~Producto();

private:
    Ui::Producto *ui;
};

#endif // PRODUCTO_H
