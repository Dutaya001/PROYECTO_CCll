#include "ventas.h"
#include "ui_ventas.h"
#include "resultadodeventas.h"

Ventas::Ventas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Ventas)
{
    ui->setupUi(this);
}

Ventas::~Ventas()
{
    delete ui;
}

void Ventas::on_pushButton_clicked()
{
    resultadodeventas=new Resultadodeventas(this);
    resultadodeventas->show();
}

