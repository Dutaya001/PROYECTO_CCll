/********************************************************************************
** Form generated from reading UI file 'resultadodeventas.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULTADODEVENTAS_H
#define UI_RESULTADODEVENTAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_Resultadodeventas
{
public:
    QLabel *label_3;
    QTableWidget *tableWidget;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;

    void setupUi(QDialog *Resultadodeventas)
    {
        if (Resultadodeventas->objectName().isEmpty())
            Resultadodeventas->setObjectName(QString::fromUtf8("Resultadodeventas"));
        Resultadodeventas->resize(758, 536);
        label_3 = new QLabel(Resultadodeventas);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(530, 120, 181, 21));
        tableWidget = new QTableWidget(Resultadodeventas);
        if (tableWidget->columnCount() < 7)
            tableWidget->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(90, 180, 591, 201));
        label = new QLabel(Resultadodeventas);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 110, 91, 41));
        lineEdit = new QLineEdit(Resultadodeventas);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(180, 120, 321, 21));
        label_2 = new QLabel(Resultadodeventas);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(290, 70, 161, 31));

        retranslateUi(Resultadodeventas);

        QMetaObject::connectSlotsByName(Resultadodeventas);
    } // setupUi

    void retranslateUi(QDialog *Resultadodeventas)
    {
        Resultadodeventas->setWindowTitle(QCoreApplication::translate("Resultadodeventas", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("Resultadodeventas", "ALMACEN: Base de datos", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Resultadodeventas", "Cant", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Resultadodeventas", "Add", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Resultadodeventas", "Codigo", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Resultadodeventas", "Nombre", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Resultadodeventas", "Marca", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("Resultadodeventas", "Precio", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("Resultadodeventas", "Stock", nullptr));
        label->setText(QCoreApplication::translate("Resultadodeventas", "Busqueda  Nombre/Marca/Codigo", nullptr));
        label_2->setText(QCoreApplication::translate("Resultadodeventas", "MOSTRANDO RESULTADOS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Resultadodeventas: public Ui_Resultadodeventas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULTADODEVENTAS_H
