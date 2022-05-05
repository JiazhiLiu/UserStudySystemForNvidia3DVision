/********************************************************************************
** Form generated from reading UI file 'userstudy.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERSTUDY_H
#define UI_USERSTUDY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_userstudyClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *userstudyClass)
    {
        if (userstudyClass->objectName().isEmpty())
            userstudyClass->setObjectName(QString::fromUtf8("userstudyClass"));
        userstudyClass->resize(600, 400);
        menuBar = new QMenuBar(userstudyClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        userstudyClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(userstudyClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        userstudyClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(userstudyClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        userstudyClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(userstudyClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        userstudyClass->setStatusBar(statusBar);

        retranslateUi(userstudyClass);

        QMetaObject::connectSlotsByName(userstudyClass);
    } // setupUi

    void retranslateUi(QMainWindow *userstudyClass)
    {
        userstudyClass->setWindowTitle(QApplication::translate("userstudyClass", "userstudy", nullptr));
    } // retranslateUi

};

namespace Ui {
    class userstudyClass: public Ui_userstudyClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERSTUDY_H
