#include "tienda.h"
#include "ui_tienda.h"
#include "tienda.h"
#include "producto.h"

Tienda::Tienda(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Tienda)
{
    ui->setupUi(this);
}

Tienda::~Tienda()
{
    delete ui;
}





void Tienda::on_actionVENTAS_triggered()
{
    ventas = new Ventas(this);
    ventas->show();
}


void Tienda::on_actionADMINISTRADOR_triggered()
{
    administrador= new Administrador(this);
    administrador->show();
}


void Tienda::on_actionCLIENTE_triggered()
{
    cliente= new Cliente(this);
    cliente->show();
}


void Tienda::on_actionSTOCK_triggered()
{
    stock=new Stock(this);
    stock->show();
}


void Tienda::on_actionREPORTE_DE_VENTAS_triggered()
{
    reporte=new Reporte(this);
    reporte->show();
}


void Tienda::on_actionPRODUCTO_triggered()
{
    producto= new Producto(this);
    producto->show();
}


void Tienda::on_actionSALIR_triggered()
{
    QCoreApplication::quit();
}

