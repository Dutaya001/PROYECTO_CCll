#include "reporte.h"
#include "ui_reporte.h"

Reporte::Reporte(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Reporte)
{
    ui->setupUi(this);
}

Reporte::~Reporte()
{
    delete ui;
}
