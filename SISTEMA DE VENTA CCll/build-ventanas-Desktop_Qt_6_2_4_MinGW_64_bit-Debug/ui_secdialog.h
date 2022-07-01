/********************************************************************************
** Form generated from reading UI file 'secdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECDIALOG_H
#define UI_SECDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SecDialog
{
public:
    QAction *actionVENTAS;
    QAction *actionADMINISTRADOR;
    QAction *actionCLIENTE;
    QAction *actionREPORTE;
    QAction *actionSALIR;
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QMenu *menuINICIO;
    QToolBar *toolBar;

    void setupUi(QMainWindow *SecDialog)
    {
        if (SecDialog->objectName().isEmpty())
            SecDialog->setObjectName(QString::fromUtf8("SecDialog"));
        SecDialog->resize(640, 480);
        actionVENTAS = new QAction(SecDialog);
        actionVENTAS->setObjectName(QString::fromUtf8("actionVENTAS"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/ICONS/sales.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionVENTAS->setIcon(icon);
        actionADMINISTRADOR = new QAction(SecDialog);
        actionADMINISTRADOR->setObjectName(QString::fromUtf8("actionADMINISTRADOR"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/ICONS/blogger.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionADMINISTRADOR->setIcon(icon1);
        actionCLIENTE = new QAction(SecDialog);
        actionCLIENTE->setObjectName(QString::fromUtf8("actionCLIENTE"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/ICONS/customer.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCLIENTE->setIcon(icon2);
        actionREPORTE = new QAction(SecDialog);
        actionREPORTE->setObjectName(QString::fromUtf8("actionREPORTE"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/ICONS/reporte de ventas.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionREPORTE->setIcon(icon3);
        actionSALIR = new QAction(SecDialog);
        actionSALIR->setObjectName(QString::fromUtf8("actionSALIR"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/ICONS/salir.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSALIR->setIcon(icon4);
        centralwidget = new QWidget(SecDialog);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 571, 191));
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(19, 7, 576, 26));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout->addWidget(lineEdit_2);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        SecDialog->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(SecDialog);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 640, 22));
        menuINICIO = new QMenu(menuBar);
        menuINICIO->setObjectName(QString::fromUtf8("menuINICIO"));
        SecDialog->setMenuBar(menuBar);
        toolBar = new QToolBar(SecDialog);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        SecDialog->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menuINICIO->menuAction());
        menuINICIO->addAction(actionVENTAS);
        menuINICIO->addAction(actionADMINISTRADOR);
        menuINICIO->addAction(actionCLIENTE);
        menuINICIO->addAction(actionREPORTE);
        menuINICIO->addAction(actionSALIR);
        toolBar->addAction(actionVENTAS);
        toolBar->addAction(actionADMINISTRADOR);
        toolBar->addAction(actionCLIENTE);
        toolBar->addAction(actionREPORTE);
        toolBar->addAction(actionSALIR);

        retranslateUi(SecDialog);

        QMetaObject::connectSlotsByName(SecDialog);
    } // setupUi

    void retranslateUi(QMainWindow *SecDialog)
    {
        SecDialog->setWindowTitle(QCoreApplication::translate("SecDialog", "MainWindow", nullptr));
        actionVENTAS->setText(QCoreApplication::translate("SecDialog", "VENTAS", nullptr));
        actionADMINISTRADOR->setText(QCoreApplication::translate("SecDialog", "ADMINISTRADOR", nullptr));
        actionCLIENTE->setText(QCoreApplication::translate("SecDialog", "CLIENTE", nullptr));
        actionREPORTE->setText(QCoreApplication::translate("SecDialog", "REPORTE", nullptr));
        actionSALIR->setText(QCoreApplication::translate("SecDialog", "SALIR", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("SecDialog", "cantidad", nullptr));
        label_2->setText(QCoreApplication::translate("SecDialog", "Bucar producto", nullptr));
        pushButton->setText(QCoreApplication::translate("SecDialog", "+", nullptr));
        pushButton_2->setText(QCoreApplication::translate("SecDialog", "-", nullptr));
        menuINICIO->setTitle(QCoreApplication::translate("SecDialog", "INICIO", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("SecDialog", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecDialog: public Ui_SecDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECDIALOG_H
