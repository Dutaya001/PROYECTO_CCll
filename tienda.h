#ifndef TIENDA_H
#define TIENDA_H

#include <QMainWindow>
#include <ventas.h>
#include <administrador.h>
#include <cliente.h>
#include <stock.h>
#include <reporte.h>
#include <producto.h>
namespace Ui {
class Tienda;
}

class Tienda : public QMainWindow
{
    Q_OBJECT

public:
    explicit Tienda(QWidget *parent = nullptr);
    ~Tienda();


private slots:
    void on_actionVENTAS_triggered();

    void on_actionADMINISTRADOR_triggered();

    void on_actionCLIENTE_triggered();

    void on_actionSTOCK_triggered();

    void on_actionREPORTE_DE_VENTAS_triggered();

    void on_actionPRODUCTO_triggered();

    void on_actionSALIR_triggered();

private:
    Ui::Tienda *ui;
    Ventas *ventas;
    Administrador *administrador;
    Cliente *cliente;
    Stock *stock;
    Reporte *reporte;
    Producto *producto;
};

#endif // TIENDA_H
