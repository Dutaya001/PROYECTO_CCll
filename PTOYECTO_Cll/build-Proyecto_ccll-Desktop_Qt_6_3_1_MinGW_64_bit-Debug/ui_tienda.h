/********************************************************************************
** Form generated from reading UI file 'tienda.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIENDA_H
#define UI_TIENDA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tienda
{
public:
    QAction *actionVENTAS;
    QAction *actionADMINISTRADOR;
    QAction *actionCLIENTE;
    QAction *actionSTOCK;
    QAction *actionREPORTE_DE_VENTAS;
    QAction *actionPRODUCTO;
    QAction *actionSALIR;
    QAction *actionnueva;
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QGroupBox *groupBox_2;
    QLabel *label_9;
    QGroupBox *groupBox_3;
    QLabel *label_10;
    QLabel *label_7;
    QLabel *label_8;
    QMenuBar *menubar;
    QMenu *menuINICIO;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QToolBar *toolBar_2;

    void setupUi(QMainWindow *Tienda)
    {
        if (Tienda->objectName().isEmpty())
            Tienda->setObjectName(QString::fromUtf8("Tienda"));
        Tienda->resize(969, 484);
        actionVENTAS = new QAction(Tienda);
        actionVENTAS->setObjectName(QString::fromUtf8("actionVENTAS"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagenes/994649.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionVENTAS->setIcon(icon);
        actionADMINISTRADOR = new QAction(Tienda);
        actionADMINISTRADOR->setObjectName(QString::fromUtf8("actionADMINISTRADOR"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/imagenes/blogger.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionADMINISTRADOR->setIcon(icon1);
        actionCLIENTE = new QAction(Tienda);
        actionCLIENTE->setObjectName(QString::fromUtf8("actionCLIENTE"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/imagenes/customer.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCLIENTE->setIcon(icon2);
        actionSTOCK = new QAction(Tienda);
        actionSTOCK->setObjectName(QString::fromUtf8("actionSTOCK"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/imagenes/reporte de ventas.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSTOCK->setIcon(icon3);
        actionREPORTE_DE_VENTAS = new QAction(Tienda);
        actionREPORTE_DE_VENTAS->setObjectName(QString::fromUtf8("actionREPORTE_DE_VENTAS"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/imagenes/reportes.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionREPORTE_DE_VENTAS->setIcon(icon4);
        actionPRODUCTO = new QAction(Tienda);
        actionPRODUCTO->setObjectName(QString::fromUtf8("actionPRODUCTO"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/imagenes/received.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPRODUCTO->setIcon(icon5);
        actionSALIR = new QAction(Tienda);
        actionSALIR->setObjectName(QString::fromUtf8("actionSALIR"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/imagenes/salir.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSALIR->setIcon(icon6);
        actionnueva = new QAction(Tienda);
        actionnueva->setObjectName(QString::fromUtf8("actionnueva"));
        centralwidget = new QWidget(Tienda);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 420, 941, 171));
        QFont font;
        font.setFamilies({QString::fromUtf8("Century Gothic")});
        font.setPointSize(12);
        groupBox->setFont(font);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 50, 301, 101));
        label->setPixmap(QPixmap(QString::fromUtf8(":/imagenes/ventas.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(310, 50, 301, 101));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/imagenes/facturacion.png")));
        label_2->setScaledContents(true);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(610, 50, 301, 101));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/imagenes/tutorrial.png")));
        label_3->setScaledContents(true);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(120, 80, 121, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Century Gothic")});
        font1.setPointSize(16);
        label_4->setFont(font1);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(400, 80, 171, 41));
        label_5->setFont(font1);
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(730, 80, 121, 41));
        label_6->setFont(font1);
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(30, 90, 481, 331));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 20, 451, 281));
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/imagenes/estatics.png")));
        label_9->setScaledContents(true);
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(520, 90, 431, 331));
        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(30, 20, 371, 261));
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/imagenes/ventasa.png")));
        label_10->setScaledContents(true);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(360, 30, 291, 51));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/imagenes/Sin t\303\255tulo.png")));
        label_7->setScaledContents(true);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(200, 20, 451, 51));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial Black")});
        font2.setPointSize(16);
        font2.setBold(true);
        label_8->setFont(font2);
        Tienda->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Tienda);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 969, 22));
        menuINICIO = new QMenu(menubar);
        menuINICIO->setObjectName(QString::fromUtf8("menuINICIO"));
        Tienda->setMenuBar(menubar);
        statusbar = new QStatusBar(Tienda);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Tienda->setStatusBar(statusbar);
        toolBar = new QToolBar(Tienda);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        Tienda->addToolBar(Qt::TopToolBarArea, toolBar);
        toolBar_2 = new QToolBar(Tienda);
        toolBar_2->setObjectName(QString::fromUtf8("toolBar_2"));
        Tienda->addToolBar(Qt::TopToolBarArea, toolBar_2);

        menubar->addAction(menuINICIO->menuAction());
        menuINICIO->addAction(actionVENTAS);
        menuINICIO->addAction(actionADMINISTRADOR);
        menuINICIO->addAction(actionCLIENTE);
        menuINICIO->addAction(actionSTOCK);
        menuINICIO->addAction(actionREPORTE_DE_VENTAS);
        menuINICIO->addAction(actionPRODUCTO);
        menuINICIO->addAction(actionSALIR);
        menuINICIO->addAction(actionnueva);
        toolBar->addAction(actionVENTAS);
        toolBar->addAction(actionADMINISTRADOR);
        toolBar->addAction(actionCLIENTE);
        toolBar->addAction(actionPRODUCTO);
        toolBar->addAction(actionSTOCK);
        toolBar->addAction(actionREPORTE_DE_VENTAS);
        toolBar->addAction(actionSALIR);

        retranslateUi(Tienda);

        QMetaObject::connectSlotsByName(Tienda);
    } // setupUi

    void retranslateUi(QMainWindow *Tienda)
    {
        Tienda->setWindowTitle(QCoreApplication::translate("Tienda", "MainWindow", nullptr));
        actionVENTAS->setText(QCoreApplication::translate("Tienda", "VENTAS ", nullptr));
        actionADMINISTRADOR->setText(QCoreApplication::translate("Tienda", "ADMINISTRADOR ", nullptr));
        actionCLIENTE->setText(QCoreApplication::translate("Tienda", "CLIENTE", nullptr));
        actionSTOCK->setText(QCoreApplication::translate("Tienda", "STOCK", nullptr));
        actionREPORTE_DE_VENTAS->setText(QCoreApplication::translate("Tienda", "REPORTE DE VENTAS", nullptr));
        actionPRODUCTO->setText(QCoreApplication::translate("Tienda", "PRODUCTO", nullptr));
        actionSALIR->setText(QCoreApplication::translate("Tienda", "SALIR", nullptr));
        actionnueva->setText(QCoreApplication::translate("Tienda", "nueva", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Tienda", "ACCESOS DIRECTOS", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QCoreApplication::translate("Tienda", "VENTAS", nullptr));
        label_5->setText(QCoreApplication::translate("Tienda", "FACTURACION", nullptr));
        label_6->setText(QCoreApplication::translate("Tienda", "TUTORIALES", nullptr));
        groupBox_2->setTitle(QString());
        label_9->setText(QString());
        groupBox_3->setTitle(QString());
        label_10->setText(QString());
        label_7->setText(QString());
        label_8->setText(QCoreApplication::translate("Tienda", "BIENVENIDO A SU PUNTO DE VENTA ", nullptr));
        menuINICIO->setTitle(QCoreApplication::translate("Tienda", "INICIO", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("Tienda", "toolBar", nullptr));
        toolBar_2->setWindowTitle(QCoreApplication::translate("Tienda", "toolBar_2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tienda: public Ui_Tienda {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIENDA_H
