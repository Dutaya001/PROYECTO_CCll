/********************************************************************************
** Form generated from reading UI file 'reporte.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORTE_H
#define UI_REPORTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Reporte
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *label_4;
    QTableWidget *tableWidget;
    QLabel *label;
    QLabel *label_3;

    void setupUi(QDialog *Reporte)
    {
        if (Reporte->objectName().isEmpty())
            Reporte->setObjectName(QString::fromUtf8("Reporte"));
        Reporte->resize(679, 515);
        layoutWidget = new QWidget(Reporte);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(36, 87, 591, 21));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        tableWidget = new QTableWidget(Reporte);
        if (tableWidget->columnCount() < 6)
            tableWidget->setColumnCount(6);
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
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(30, 120, 611, 311));
        label = new QLabel(Reporte);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(240, 40, 191, 31));
        label_3 = new QLabel(Reporte);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(400, 460, 241, 21));

        retranslateUi(Reporte);

        QMetaObject::connectSlotsByName(Reporte);
    } // setupUi

    void retranslateUi(QDialog *Reporte)
    {
        Reporte->setWindowTitle(QCoreApplication::translate("Reporte", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("Reporte", "Usuario: ", nullptr));
        label_4->setText(QCoreApplication::translate("Reporte", "id usuario", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Reporte", "Cant", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Reporte", "Fecha", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Reporte", "Codigo", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Reporte", "Nombre", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Reporte", "Marca", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("Reporte", "Precio", nullptr));
        label->setText(QCoreApplication::translate("Reporte", "REPORTE DETALLADO DE VENTAS", nullptr));
        label_3->setText(QCoreApplication::translate("Reporte", "Suma Total", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Reporte: public Ui_Reporte {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTE_H
