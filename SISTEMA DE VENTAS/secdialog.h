#ifndef SECDIALOG_H
#define SECDIALOG_H

#include <QMainWindow>

namespace Ui {
class SecDialog;
}

class SecDialog : public QMainWindow
{
    Q_OBJECT

public:
    explicit SecDialog(QWidget *parent = nullptr);
    ~SecDialog();

private slots:
    void on_actionSALIR_triggered();



private:
    Ui::SecDialog *ui;
};

#endif // SECDIALOG_H
