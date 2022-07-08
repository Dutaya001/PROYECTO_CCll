#include "producto.h"
#include "ui_producto.h"

Producto::Producto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Producto)
{
    ui->setupUi(this);
}

Producto::~Producto()
{
    delete ui;
}
