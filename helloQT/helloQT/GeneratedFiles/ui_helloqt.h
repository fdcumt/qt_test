/********************************************************************************
** Form generated from reading UI file 'helloqt.ui'
**
** Created: Thu Jan 15 11:27:46 2015
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELLOQT_H
#define UI_HELLOQT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_helloQTClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *helloQTClass)
    {
        if (helloQTClass->objectName().isEmpty())
            helloQTClass->setObjectName(QString::fromUtf8("helloQTClass"));
        helloQTClass->resize(600, 400);
        menuBar = new QMenuBar(helloQTClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        helloQTClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(helloQTClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        helloQTClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(helloQTClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        helloQTClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(helloQTClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        helloQTClass->setStatusBar(statusBar);

        retranslateUi(helloQTClass);

        QMetaObject::connectSlotsByName(helloQTClass);
    } // setupUi

    void retranslateUi(QMainWindow *helloQTClass)
    {
        helloQTClass->setWindowTitle(QApplication::translate("helloQTClass", "helloQT", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class helloQTClass: public Ui_helloQTClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELLOQT_H
