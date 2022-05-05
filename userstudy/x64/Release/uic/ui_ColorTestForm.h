/********************************************************************************
** Form generated from reading UI file 'ColorTestForm.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLORTESTFORM_H
#define UI_COLORTESTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ColorTestForm
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label0;
    QLabel *label_2;
    QLabel *labImageNumber;
    QLabel *labPixture;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QRadioButton *rbnNothing;
    QRadioButton *rbnNumber;
    QLineEdit *lineEditNumber;
    QRadioButton *rbtnThird;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbtnLastQues;
    QPushButton *pbtnNextQues;

    void setupUi(QWidget *ColorTestForm)
    {
        if (ColorTestForm->objectName().isEmpty())
            ColorTestForm->setObjectName(QString::fromUtf8("ColorTestForm"));
        ColorTestForm->resize(699, 453);
        verticalLayout = new QVBoxLayout(ColorTestForm);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label0 = new QLabel(ColorTestForm);
        label0->setObjectName(QString::fromUtf8("label0"));
        label0->setMaximumSize(QSize(16777215, 25));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei UI"));
        font.setPointSize(14);
        label0->setFont(font);

        verticalLayout->addWidget(label0);

        label_2 = new QLabel(ColorTestForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(16777215, 25));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font1.setPointSize(10);
        label_2->setFont(font1);

        verticalLayout->addWidget(label_2);

        labImageNumber = new QLabel(ColorTestForm);
        labImageNumber->setObjectName(QString::fromUtf8("labImageNumber"));
        labImageNumber->setMaximumSize(QSize(16777215, 25));
        labImageNumber->setFont(font1);

        verticalLayout->addWidget(labImageNumber);

        labPixture = new QLabel(ColorTestForm);
        labPixture->setObjectName(QString::fromUtf8("labPixture"));
        labPixture->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labPixture);

        groupBox = new QGroupBox(ColorTestForm);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMaximumSize(QSize(16777215, 60));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        rbnNothing = new QRadioButton(groupBox);
        rbnNothing->setObjectName(QString::fromUtf8("rbnNothing"));
        rbnNothing->setFont(font1);

        horizontalLayout->addWidget(rbnNothing);

        rbnNumber = new QRadioButton(groupBox);
        rbnNumber->setObjectName(QString::fromUtf8("rbnNumber"));
        rbnNumber->setFont(font1);

        horizontalLayout->addWidget(rbnNumber);

        lineEditNumber = new QLineEdit(groupBox);
        lineEditNumber->setObjectName(QString::fromUtf8("lineEditNumber"));

        horizontalLayout->addWidget(lineEditNumber);

        rbtnThird = new QRadioButton(groupBox);
        rbtnThird->setObjectName(QString::fromUtf8("rbtnThird"));

        horizontalLayout->addWidget(rbtnThird);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pbtnLastQues = new QPushButton(groupBox);
        pbtnLastQues->setObjectName(QString::fromUtf8("pbtnLastQues"));

        horizontalLayout->addWidget(pbtnLastQues);

        pbtnNextQues = new QPushButton(groupBox);
        pbtnNextQues->setObjectName(QString::fromUtf8("pbtnNextQues"));

        horizontalLayout->addWidget(pbtnNextQues);


        verticalLayout->addWidget(groupBox);


        retranslateUi(ColorTestForm);

        QMetaObject::connectSlotsByName(ColorTestForm);
    } // setupUi

    void retranslateUi(QWidget *ColorTestForm)
    {
        ColorTestForm->setWindowTitle(QApplication::translate("ColorTestForm", "Form", nullptr));
        label0->setText(QApplication::translate("ColorTestForm", "Ishihara Color Blind Test", nullptr));
        label_2->setText(QApplication::translate("ColorTestForm", "There are 15 images. For each image, you may recognize a number. Please complete the questions below.", nullptr));
        labImageNumber->setText(QApplication::translate("ColorTestForm", "Test images", nullptr));
        labPixture->setText(QString());
        groupBox->setTitle(QString());
        rbnNothing->setText(QApplication::translate("ColorTestForm", "No number", nullptr));
        rbnNumber->setText(QApplication::translate("ColorTestForm", "Number", nullptr));
        rbtnThird->setText(QApplication::translate("ColorTestForm", "RadioButton", nullptr));
        pbtnLastQues->setText(QApplication::translate("ColorTestForm", "Last", nullptr));
        pbtnNextQues->setText(QApplication::translate("ColorTestForm", "Next", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ColorTestForm: public Ui_ColorTestForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLORTESTFORM_H
