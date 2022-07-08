/********************************************************************************
** Form generated from reading UI file 'producto.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCTO_H
#define UI_PRODUCTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Producto
{
public:

    void setupUi(QDialog *Producto)
    {
        if (Producto->objectName().isEmpty())
            Producto->setObjectName(QString::fromUtf8("Producto"));
        Producto->resize(609, 581);

        retranslateUi(Producto);

        QMetaObject::connectSlotsByName(Producto);
    } // setupUi

    void retranslateUi(QDialog *Producto)
    {
        Producto->setWindowTitle(QCoreApplication::translate("Producto", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Producto: public Ui_Producto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCTO_H
