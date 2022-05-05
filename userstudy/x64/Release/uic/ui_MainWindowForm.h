/********************************************************************************
** Form generated from reading UI file 'MainWindowForm.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWFORM_H
#define UI_MAINWINDOWFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserStudyMainWindow
{
public:
    QAction *actionExp13D_2;
    QAction *action2D;
    QAction *actionExp2;
    QAction *actionExp3;
    QAction *actionColor;
    QAction *action3DDevice;
    QAction *actionStereo;
    QAction *actionExp1;
    QAction *actionNVIDIA3D;
    QAction *actionCommonShutter;
    QAction *actionexp2Sup;
    QAction *actionExperiment_3;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuhello;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *UserStudyMainWindow)
    {
        if (UserStudyMainWindow->objectName().isEmpty())
            UserStudyMainWindow->setObjectName(QString::fromUtf8("UserStudyMainWindow"));
        UserStudyMainWindow->resize(1200, 800);
        UserStudyMainWindow->setMinimumSize(QSize(1200, 800));
        actionExp13D_2 = new QAction(UserStudyMainWindow);
        actionExp13D_2->setObjectName(QString::fromUtf8("actionExp13D_2"));
        action2D = new QAction(UserStudyMainWindow);
        action2D->setObjectName(QString::fromUtf8("action2D"));
        actionExp2 = new QAction(UserStudyMainWindow);
        actionExp2->setObjectName(QString::fromUtf8("actionExp2"));
        actionExp3 = new QAction(UserStudyMainWindow);
        actionExp3->setObjectName(QString::fromUtf8("actionExp3"));
        actionColor = new QAction(UserStudyMainWindow);
        actionColor->setObjectName(QString::fromUtf8("actionColor"));
        action3DDevice = new QAction(UserStudyMainWindow);
        action3DDevice->setObjectName(QString::fromUtf8("action3DDevice"));
        actionStereo = new QAction(UserStudyMainWindow);
        actionStereo->setObjectName(QString::fromUtf8("actionStereo"));
        actionExp1 = new QAction(UserStudyMainWindow);
        actionExp1->setObjectName(QString::fromUtf8("actionExp1"));
        actionNVIDIA3D = new QAction(UserStudyMainWindow);
        actionNVIDIA3D->setObjectName(QString::fromUtf8("actionNVIDIA3D"));
        actionCommonShutter = new QAction(UserStudyMainWindow);
        actionCommonShutter->setObjectName(QString::fromUtf8("actionCommonShutter"));
        actionexp2Sup = new QAction(UserStudyMainWindow);
        actionexp2Sup->setObjectName(QString::fromUtf8("actionexp2Sup"));
        actionExperiment_3 = new QAction(UserStudyMainWindow);
        actionExperiment_3->setObjectName(QString::fromUtf8("actionExperiment_3"));
        centralWidget = new QWidget(UserStudyMainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        UserStudyMainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(UserStudyMainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1200, 21));
        menuhello = new QMenu(menuBar);
        menuhello->setObjectName(QString::fromUtf8("menuhello"));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        UserStudyMainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(UserStudyMainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        UserStudyMainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuhello->menuAction());
        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuhello->addAction(actionExp1);
        menuhello->addAction(actionExp2);
        menuhello->addAction(actionExperiment_3);
        menu->addAction(actionColor);
        menu->addAction(action3DDevice);
        menu->addAction(actionStereo);
        menu_2->addAction(actionNVIDIA3D);
        menu_2->addAction(actionCommonShutter);

        retranslateUi(UserStudyMainWindow);

        QMetaObject::connectSlotsByName(UserStudyMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *UserStudyMainWindow)
    {
        UserStudyMainWindow->setWindowTitle(QApplication::translate("UserStudyMainWindow", "User Study System", nullptr));
        actionExp13D_2->setText(QApplication::translate("UserStudyMainWindow", "3D\346\265\213\350\257\225", nullptr));
        action2D->setText(QApplication::translate("UserStudyMainWindow", "2D\346\265\213\350\257\225", nullptr));
        actionExp2->setText(QApplication::translate("UserStudyMainWindow", "Experiment 2: Verifying Simple 2D-Ghost-Free Stereo", nullptr));
        actionExp3->setText(QApplication::translate("UserStudyMainWindow", "Experiment 3: Assessment", nullptr));
        actionColor->setText(QApplication::translate("UserStudyMainWindow", "Color Blind Test", nullptr));
        action3DDevice->setText(QApplication::translate("UserStudyMainWindow", "3D Device Test", nullptr));
        actionStereo->setText(QApplication::translate("UserStudyMainWindow", "Stereo Blind Test", nullptr));
        actionExp1->setText(QApplication::translate("UserStudyMainWindow", "Experiment 1: Determining Gaussian Blurring", nullptr));
        actionNVIDIA3D->setText(QApplication::translate("UserStudyMainWindow", "NVIDIA 3D VISION Mode", nullptr));
        actionCommonShutter->setText(QApplication::translate("UserStudyMainWindow", "COMMON SHUTTER 3D Mode", nullptr));
        actionexp2Sup->setText(QApplication::translate("UserStudyMainWindow", "\345\256\236\351\252\2142\350\241\245\345\205\205", nullptr));
        actionExperiment_3->setText(QApplication::translate("UserStudyMainWindow", "Experiment 3: Assessment", nullptr));
        menuhello->setTitle(QApplication::translate("UserStudyMainWindow", "Experiment", nullptr));
        menu->setTitle(QApplication::translate("UserStudyMainWindow", "Test", nullptr));
        menu_2->setTitle(QApplication::translate("UserStudyMainWindow", "Mode", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserStudyMainWindow: public Ui_UserStudyMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWFORM_H
