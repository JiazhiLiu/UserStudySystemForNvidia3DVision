/********************************************************************************
** Form generated from reading UI file 'ExpComparisonForm.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPCOMPARISONFORM_H
#define UI_EXPCOMPARISONFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExpComparisonForm
{
public:
    QWidget *display3DWidget;
    QLabel *question;
    QRadioButton *rbtnLeft;
    QRadioButton *rbtnRight;
    QLabel *question_2;
    QLabel *question_3;
    QPushButton *pbtnLast;
    QPushButton *pbtnNext;

    void setupUi(QWidget *ExpComparisonForm)
    {
        if (ExpComparisonForm->objectName().isEmpty())
            ExpComparisonForm->setObjectName(QString::fromUtf8("ExpComparisonForm"));
        ExpComparisonForm->resize(1920, 1080);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ExpComparisonForm->sizePolicy().hasHeightForWidth());
        ExpComparisonForm->setSizePolicy(sizePolicy);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(255, 255, 255, 128));
        brush2.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        QBrush brush3(QColor(120, 120, 120, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush4(QColor(0, 0, 0, 128));
        brush4.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
#endif
        ExpComparisonForm->setPalette(palette);
        display3DWidget = new QWidget(ExpComparisonForm);
        display3DWidget->setObjectName(QString::fromUtf8("display3DWidget"));
        display3DWidget->setGeometry(QRect(0, 0, 1920, 1020));
        display3DWidget->setMaximumSize(QSize(9000, 9000));
        question = new QLabel(ExpComparisonForm);
        question->setObjectName(QString::fromUtf8("question"));
        question->setGeometry(QRect(10, 1030, 441, 16));
        QFont font;
        font.setPointSize(12);
        question->setFont(font);
        rbtnLeft = new QRadioButton(ExpComparisonForm);
        rbtnLeft->setObjectName(QString::fromUtf8("rbtnLeft"));
        rbtnLeft->setGeometry(QRect(730, 1030, 89, 16));
        rbtnLeft->setFont(font);
        rbtnRight = new QRadioButton(ExpComparisonForm);
        rbtnRight->setObjectName(QString::fromUtf8("rbtnRight"));
        rbtnRight->setGeometry(QRect(1320, 1030, 89, 16));
        rbtnRight->setFont(font);
        question_2 = new QLabel(ExpComparisonForm);
        question_2->setObjectName(QString::fromUtf8("question_2"));
        question_2->setGeometry(QRect(10, 1055, 231, 16));
        question_2->setFont(font);
        question_3 = new QLabel(ExpComparisonForm);
        question_3->setObjectName(QString::fromUtf8("question_3"));
        question_3->setGeometry(QRect(250, 1055, 231, 16));
        question_3->setFont(font);
        pbtnLast = new QPushButton(ExpComparisonForm);
        pbtnLast->setObjectName(QString::fromUtf8("pbtnLast"));
        pbtnLast->setGeometry(QRect(1620, 1055, 121, 23));
        pbtnLast->setFont(font);
        pbtnNext = new QPushButton(ExpComparisonForm);
        pbtnNext->setObjectName(QString::fromUtf8("pbtnNext"));
        pbtnNext->setGeometry(QRect(1780, 1055, 121, 23));
        pbtnNext->setFont(font);

        retranslateUi(ExpComparisonForm);

        QMetaObject::connectSlotsByName(ExpComparisonForm);
    } // setupUi

    void retranslateUi(QWidget *ExpComparisonForm)
    {
        ExpComparisonForm->setWindowTitle(QApplication::translate("ExpComparisonForm", "ExpComparisonWidget", nullptr));
        question->setText(QApplication::translate("ExpComparisonForm", "Which one do you prefer?", nullptr));
        rbtnLeft->setText(QApplication::translate("ExpComparisonForm", "The Left", nullptr));
        rbtnRight->setText(QApplication::translate("ExpComparisonForm", "The Right", nullptr));
        question_2->setText(QApplication::translate("ExpComparisonForm", "Screen Rate", nullptr));
        question_3->setText(QApplication::translate("ExpComparisonForm", "Video Rate", nullptr));
        pbtnLast->setText(QApplication::translate("ExpComparisonForm", "Last", nullptr));
        pbtnNext->setText(QApplication::translate("ExpComparisonForm", "Next", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExpComparisonForm: public Ui_ExpComparisonForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPCOMPARISONFORM_H
