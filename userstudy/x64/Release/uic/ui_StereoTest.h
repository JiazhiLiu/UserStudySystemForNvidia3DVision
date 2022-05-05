/********************************************************************************
** Form generated from reading UI file 'StereoTest.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STEREOTEST_H
#define UI_STEREOTEST_H

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

class Ui_StereoTestForm
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QGroupBox *StereoImageWidget;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QRadioButton *noNumber;
    QRadioButton *Number;
    QLineEdit *lineEditNumber;
    QRadioButton *radioButton_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *LastImage;
    QPushButton *NextImage;

    void setupUi(QWidget *StereoTestForm)
    {
        if (StereoTestForm->objectName().isEmpty())
            StereoTestForm->setObjectName(QString::fromUtf8("StereoTestForm"));
        StereoTestForm->resize(631, 648);
        verticalLayout = new QVBoxLayout(StereoTestForm);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(StereoTestForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(16777215, 25));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei UI"));
        font.setPointSize(14);
        label->setFont(font);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(StereoTestForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(16777215, 25));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Microsoft YaHei UI"));
        font1.setPointSize(10);
        label_2->setFont(font1);

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(StereoTestForm);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(16777215, 25));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font2.setPointSize(10);
        label_3->setFont(font2);

        verticalLayout->addWidget(label_3);

        StereoImageWidget = new QGroupBox(StereoTestForm);
        StereoImageWidget->setObjectName(QString::fromUtf8("StereoImageWidget"));
        StereoImageWidget->setMinimumSize(QSize(500, 500));

        verticalLayout->addWidget(StereoImageWidget);

        groupBox = new QGroupBox(StereoTestForm);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMaximumSize(QSize(16777215, 60));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        noNumber = new QRadioButton(groupBox);
        noNumber->setObjectName(QString::fromUtf8("noNumber"));

        horizontalLayout->addWidget(noNumber);

        Number = new QRadioButton(groupBox);
        Number->setObjectName(QString::fromUtf8("Number"));

        horizontalLayout->addWidget(Number);

        lineEditNumber = new QLineEdit(groupBox);
        lineEditNumber->setObjectName(QString::fromUtf8("lineEditNumber"));
        lineEditNumber->setMaximumSize(QSize(80, 16777215));

        horizontalLayout->addWidget(lineEditNumber);

        radioButton_3 = new QRadioButton(groupBox);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        horizontalLayout->addWidget(radioButton_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        LastImage = new QPushButton(groupBox);
        LastImage->setObjectName(QString::fromUtf8("LastImage"));

        horizontalLayout->addWidget(LastImage);

        NextImage = new QPushButton(groupBox);
        NextImage->setObjectName(QString::fromUtf8("NextImage"));

        horizontalLayout->addWidget(NextImage);


        verticalLayout->addWidget(groupBox);


        retranslateUi(StereoTestForm);

        QMetaObject::connectSlotsByName(StereoTestForm);
    } // setupUi

    void retranslateUi(QWidget *StereoTestForm)
    {
        StereoTestForm->setWindowTitle(QApplication::translate("StereoTestForm", "Form", nullptr));
        label->setText(QApplication::translate("StereoTestForm", "Stereo Blind Test", nullptr));
        label_2->setText(QApplication::translate("StereoTestForm", "There are 9 images, from which you may recognize numbers with stereo glasses. ", nullptr));
        label_3->setText(QApplication::translate("StereoTestForm", "Test Image:", nullptr));
        StereoImageWidget->setTitle(QString());
        groupBox->setTitle(QString());
        noNumber->setText(QApplication::translate("StereoTestForm", "No number", nullptr));
        Number->setText(QApplication::translate("StereoTestForm", "Number", nullptr));
        radioButton_3->setText(QApplication::translate("StereoTestForm", "RadioButton", nullptr));
        LastImage->setText(QApplication::translate("StereoTestForm", "Last", nullptr));
        NextImage->setText(QApplication::translate("StereoTestForm", "Next", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StereoTestForm: public Ui_StereoTestForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STEREOTEST_H
