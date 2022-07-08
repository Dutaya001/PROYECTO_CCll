#ifndef RESULTADODEVENTAS_H
#define RESULTADODEVENTAS_H

#include <QDialog>

namespace Ui {
class Resultadodeventas;
}

class Resultadodeventas : public QDialog
{
    Q_OBJECT

public:
    explicit Resultadodeventas(QWidget *parent = nullptr);
    ~Resultadodeventas();

private:
    Ui::Resultadodeventas *ui;
};

#endif // RESULTADODEVENTAS_H
