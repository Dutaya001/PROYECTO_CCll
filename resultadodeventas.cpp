#include "resultadodeventas.h"
#include "ui_resultadodeventas.h"

Resultadodeventas::Resultadodeventas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Resultadodeventas)
{
    ui->setupUi(this);
}

Resultadodeventas::~Resultadodeventas()
{
    delete ui;
}
