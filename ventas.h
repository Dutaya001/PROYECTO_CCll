#ifndef VENTAS_H
#define VENTAS_H

#include <QDialog>
#include <resultadodeventas.h>
namespace Ui {
class Ventas;
}

class Ventas : public QDialog
{
    Q_OBJECT

public:
    explicit Ventas(QWidget *parent = nullptr);
    ~Ventas();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Ventas *ui;
    Resultadodeventas *resultadodeventas;
};

#endif // VENTAS_H
