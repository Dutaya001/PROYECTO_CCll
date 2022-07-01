#include "secdialog.h"
#include "ui_secdialog.h"

SecDialog::SecDialog(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SecDialog)
{
    ui->setupUi(this);
}

SecDialog::~SecDialog()
{
    delete ui;
}

void SecDialog::on_actionSALIR_triggered()
{
    QApplication::quit();
    //close();
}




