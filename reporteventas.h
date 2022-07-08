#ifndef REPORTEVENTAS_H
#define REPORTEVENTAS_H

#include <QDialog>

namespace Ui {
class Reporteventas;
}

class Reporteventas : public QDialog
{
    Q_OBJECT

public:
    explicit Reporteventas(QWidget *parent = nullptr);
    ~Reporteventas();

private:
    Ui::Reporteventas *ui;
};

#endif // REPORTEVENTAS_H
