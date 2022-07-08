#include "reporteventas.h"
#include "ui_reporteventas.h"

Reporteventas::Reporteventas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Reporteventas)
{
    ui->setupUi(this);
}

Reporteventas::~Reporteventas()
{
    delete ui;
}
