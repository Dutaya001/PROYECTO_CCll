#ifndef REPORTE_H
#define REPORTE_H

#include <QDialog>

namespace Ui {
class Reporte;
}

class Reporte : public QDialog
{
    Q_OBJECT

public:
    explicit Reporte(QWidget *parent = nullptr);
    ~Reporte();

private:
    Ui::Reporte *ui;
};

#endif // REPORTE_H
