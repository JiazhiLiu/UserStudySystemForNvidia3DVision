/********************************************************************************
** Form generated from reading UI file 'Exp1.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXP1_H
#define UI_EXP1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Experiment1Form
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEditNumber;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QRadioButton *rbtnMan;
    QRadioButton *rbtnWoman;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_4;
    QSpinBox *spinBoxAge;
    QSpacerItem *horizontalSpacer_4;
    QGroupBox *stereoblind_result_2;
    QGridLayout *gridLayout;
    QLabel *device_result;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_5;
    QCheckBox *checkBox_2;
    QPushButton *pbtnColor;
    QLabel *labColorResult;
    QCheckBox *checkBox;
    QPushButton *pbtnDevice;
    QLineEdit *lineEditStereo;
    QLineEdit *lineEditColor;
    QLabel *labDeviceResult;
    QPushButton *pbtnStereo;
    QLabel *labStereoResult;
    QLabel *colorblind_result;
    QLabel *stereoblind_result;
    QLabel *label_5;
    QTextEdit *Introduction;
    QCheckBox *checkBoxRead;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pbtn1;
    QPushButton *pbtn2;
    QPushButton *pbtn3;

    void setupUi(QWidget *Experiment1Form)
    {
        if (Experiment1Form->objectName().isEmpty())
            Experiment1Form->setObjectName(QString::fromUtf8("Experiment1Form"));
        Experiment1Form->resize(900, 700);
        Experiment1Form->setMinimumSize(QSize(900, 600));
        Experiment1Form->setStyleSheet(QString::fromUtf8("QPushButton:hover{\n"
"border:2px solid rgb(71,186,204);\n"
"color:rgb(71,186,204);\n"
"background:transparent;\n"
"}\n"
"QPushButton:pressed{\n"
"border:2px solid black;\n"
"color:black;\n"
"background-color:rgb(71,186,204);\n"
"}\n"
"QPushButton:!enabled\n"
"{\n"
"border:2px solid rgb(130,130,130);\n"
"color:rgb(130,130,130);\n"
"}\n"
"\n"
""));
        verticalLayout = new QVBoxLayout(Experiment1Form);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(Experiment1Form);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 25));
        label->setMaximumSize(QSize(16777215, 60));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei UI"));
        font.setPointSize(14);
        label->setFont(font);

        verticalLayout->addWidget(label);

        groupBox = new QGroupBox(Experiment1Form);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(0, 60));
        groupBox->setMaximumSize(QSize(16777215, 120));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Microsoft YaHei UI"));
        font1.setPointSize(9);
        groupBox->setFont(font1);
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(0, 30));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Microsoft YaHei UI"));
        font2.setPointSize(10);
        label_2->setFont(font2);

        horizontalLayout->addWidget(label_2);

        lineEditNumber = new QLineEdit(groupBox);
        lineEditNumber->setObjectName(QString::fromUtf8("lineEditNumber"));
        lineEditNumber->setMinimumSize(QSize(120, 15));
        lineEditNumber->setMaximumSize(QSize(80, 16777215));

        horizontalLayout->addWidget(lineEditNumber);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(0, 30));
        label_3->setFont(font2);

        horizontalLayout->addWidget(label_3);

        rbtnMan = new QRadioButton(groupBox);
        rbtnMan->setObjectName(QString::fromUtf8("rbtnMan"));
        rbtnMan->setMinimumSize(QSize(0, 30));
        rbtnMan->setFont(font2);

        horizontalLayout->addWidget(rbtnMan);

        rbtnWoman = new QRadioButton(groupBox);
        rbtnWoman->setObjectName(QString::fromUtf8("rbtnWoman"));
        rbtnWoman->setMinimumSize(QSize(0, 30));
        rbtnWoman->setFont(font2);

        horizontalLayout->addWidget(rbtnWoman);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(0, 30));
        label_4->setFont(font2);

        horizontalLayout->addWidget(label_4);

        spinBoxAge = new QSpinBox(groupBox);
        spinBoxAge->setObjectName(QString::fromUtf8("spinBoxAge"));
        spinBoxAge->setMinimumSize(QSize(0, 15));
        spinBoxAge->setValue(25);

        horizontalLayout->addWidget(spinBoxAge);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout->addWidget(groupBox);

        stereoblind_result_2 = new QGroupBox(Experiment1Form);
        stereoblind_result_2->setObjectName(QString::fromUtf8("stereoblind_result_2"));
        stereoblind_result_2->setFont(font1);
        gridLayout = new QGridLayout(stereoblind_result_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        device_result = new QLabel(stereoblind_result_2);
        device_result->setObjectName(QString::fromUtf8("device_result"));
        device_result->setFont(font2);

        gridLayout->addWidget(device_result, 0, 1, 1, 2);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 3, 5, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 1, 5, 1, 1);

        checkBox_2 = new QCheckBox(stereoblind_result_2);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setFont(font2);

        gridLayout->addWidget(checkBox_2, 3, 1, 1, 1);

        pbtnColor = new QPushButton(stereoblind_result_2);
        pbtnColor->setObjectName(QString::fromUtf8("pbtnColor"));
        pbtnColor->setMinimumSize(QSize(150, 20));
        pbtnColor->setMaximumSize(QSize(150, 16777215));
        pbtnColor->setFont(font2);
        pbtnColor->setCheckable(false);
        pbtnColor->setChecked(false);

        gridLayout->addWidget(pbtnColor, 1, 0, 1, 1);

        labColorResult = new QLabel(stereoblind_result_2);
        labColorResult->setObjectName(QString::fromUtf8("labColorResult"));
        labColorResult->setFont(font2);

        gridLayout->addWidget(labColorResult, 0, 6, 1, 1);

        checkBox = new QCheckBox(stereoblind_result_2);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setFont(font2);

        gridLayout->addWidget(checkBox, 1, 1, 1, 1);

        pbtnDevice = new QPushButton(stereoblind_result_2);
        pbtnDevice->setObjectName(QString::fromUtf8("pbtnDevice"));
        pbtnDevice->setMinimumSize(QSize(150, 20));
        pbtnDevice->setMaximumSize(QSize(150, 16777215));
        pbtnDevice->setFont(font2);

        gridLayout->addWidget(pbtnDevice, 0, 0, 1, 1);

        lineEditStereo = new QLineEdit(stereoblind_result_2);
        lineEditStereo->setObjectName(QString::fromUtf8("lineEditStereo"));
        lineEditStereo->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(lineEditStereo, 3, 3, 1, 1);

        lineEditColor = new QLineEdit(stereoblind_result_2);
        lineEditColor->setObjectName(QString::fromUtf8("lineEditColor"));
        lineEditColor->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(lineEditColor, 1, 3, 1, 1);

        labDeviceResult = new QLabel(stereoblind_result_2);
        labDeviceResult->setObjectName(QString::fromUtf8("labDeviceResult"));
        labDeviceResult->setFont(font2);

        gridLayout->addWidget(labDeviceResult, 1, 6, 1, 1);

        pbtnStereo = new QPushButton(stereoblind_result_2);
        pbtnStereo->setObjectName(QString::fromUtf8("pbtnStereo"));
        pbtnStereo->setMinimumSize(QSize(150, 20));
        pbtnStereo->setMaximumSize(QSize(150, 16777215));
        pbtnStereo->setFont(font2);

        gridLayout->addWidget(pbtnStereo, 3, 0, 1, 1);

        labStereoResult = new QLabel(stereoblind_result_2);
        labStereoResult->setObjectName(QString::fromUtf8("labStereoResult"));
        labStereoResult->setFont(font2);

        gridLayout->addWidget(labStereoResult, 3, 6, 1, 1);

        colorblind_result = new QLabel(stereoblind_result_2);
        colorblind_result->setObjectName(QString::fromUtf8("colorblind_result"));
        colorblind_result->setFont(font2);

        gridLayout->addWidget(colorblind_result, 1, 4, 1, 1);

        stereoblind_result = new QLabel(stereoblind_result_2);
        stereoblind_result->setObjectName(QString::fromUtf8("stereoblind_result"));
        stereoblind_result->setFont(font2);

        gridLayout->addWidget(stereoblind_result, 3, 4, 1, 1);


        verticalLayout->addWidget(stereoblind_result_2);

        label_5 = new QLabel(Experiment1Form);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(0, 20));
        label_5->setMaximumSize(QSize(16777215, 15));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Microsoft YaHei UI Light"));
        font3.setPointSize(9);
        label_5->setFont(font3);
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout->addWidget(label_5);

        Introduction = new QTextEdit(Experiment1Form);
        Introduction->setObjectName(QString::fromUtf8("Introduction"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Microsoft YaHei UI"));
        font4.setPointSize(12);
        Introduction->setFont(font4);

        verticalLayout->addWidget(Introduction);

        checkBoxRead = new QCheckBox(Experiment1Form);
        checkBoxRead->setObjectName(QString::fromUtf8("checkBoxRead"));
        checkBoxRead->setMaximumSize(QSize(16777215, 20));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Microsoft YaHei UI Light"));
        checkBoxRead->setFont(font5);

        verticalLayout->addWidget(checkBoxRead);

        groupBox_3 = new QGroupBox(Experiment1Form);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setMinimumSize(QSize(0, 30));
        horizontalLayout_2 = new QHBoxLayout(groupBox_3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        pbtn1 = new QPushButton(groupBox_3);
        pbtn1->setObjectName(QString::fromUtf8("pbtn1"));
        pbtn1->setMinimumSize(QSize(80, 25));
        pbtn1->setFont(font2);

        horizontalLayout_2->addWidget(pbtn1);

        pbtn2 = new QPushButton(groupBox_3);
        pbtn2->setObjectName(QString::fromUtf8("pbtn2"));
        pbtn2->setMinimumSize(QSize(80, 25));
        pbtn2->setFont(font2);

        horizontalLayout_2->addWidget(pbtn2);

        pbtn3 = new QPushButton(groupBox_3);
        pbtn3->setObjectName(QString::fromUtf8("pbtn3"));
        pbtn3->setMinimumSize(QSize(80, 25));
        pbtn3->setFont(font2);

        horizontalLayout_2->addWidget(pbtn3);


        verticalLayout->addWidget(groupBox_3);


        retranslateUi(Experiment1Form);

        QMetaObject::connectSlotsByName(Experiment1Form);
    } // setupUi

    void retranslateUi(QWidget *Experiment1Form)
    {
        Experiment1Form->setWindowTitle(QApplication::translate("Experiment1Form", "Form", nullptr));
        label->setText(QApplication::translate("Experiment1Form", "Experiment 1: Determining Gaussian Bluring", nullptr));
        groupBox->setTitle(QApplication::translate("Experiment1Form", "Basic Information", nullptr));
        label_2->setText(QApplication::translate("Experiment1Form", "Number", nullptr));
        label_3->setText(QApplication::translate("Experiment1Form", "Gender", nullptr));
        rbtnMan->setText(QApplication::translate("Experiment1Form", "Male", nullptr));
        rbtnWoman->setText(QApplication::translate("Experiment1Form", "Famale", nullptr));
        label_4->setText(QApplication::translate("Experiment1Form", "Age", nullptr));
        stereoblind_result_2->setTitle(QApplication::translate("Experiment1Form", "Basic Test", nullptr));
        device_result->setText(QString());
        checkBox_2->setText(QApplication::translate("Experiment1Form", "has passed", nullptr));
        pbtnColor->setText(QApplication::translate("Experiment1Form", "Color Blind Test", nullptr));
        labColorResult->setText(QString());
        checkBox->setText(QApplication::translate("Experiment1Form", "has passed", nullptr));
        pbtnDevice->setText(QApplication::translate("Experiment1Form", "3D Device Test", nullptr));
        labDeviceResult->setText(QString());
        pbtnStereo->setText(QApplication::translate("Experiment1Form", "Stereo Blind Test", nullptr));
        labStereoResult->setText(QString());
        colorblind_result->setText(QString());
        stereoblind_result->setText(QString());
        label_5->setText(QApplication::translate("Experiment1Form", "Introduction", nullptr));
        Introduction->setHtml(QApplication::translate("Experiment1Form", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1. Before the experiment, please make sure you have passed &quot;Color Blind Test&quot;, &quot;3D Device Test&quot;, and &quot;Stereo Blind Test&quot;.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2. There are two sessions: one is 3D where viewers need to wear stereo glasses; the other is 2D where viewers do not"
                        " wear stereo glasses. All the trials in this experiment are also conducted in the double-blind, two-alternative forced choice (2AFC). At each trial, two stimuli are arranged on a screen in a randomized horizontal order. A 500ms blank  screen is  inserted between two trials. </p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">* <span style=\" font-style:italic;\">3D session. </span>This session consists of 54 double-blind 2AFC trials. The first 27 trials correspond to the first question: which stimulus has more depth. The last 27 trials correspond to the second question: which stimulus is more comfortable. In each trial, a subject was shown two stimuli side by side. </p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0"
                        "px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">* <span style=\" font-style:italic;\">2D session. </span>This session consists of 27 double-blind 2AFC trials. Each subject without stereo glasses is asked to choose the one they perfer to according to their first impression. </p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; t"
                        "ext-indent:0px;\"><br /></p></body></html>", nullptr));
        checkBoxRead->setText(QApplication::translate("Experiment1Form", "Read", nullptr));
        groupBox_3->setTitle(QString());
        pbtn1->setText(QString());
        pbtn2->setText(QString());
        pbtn3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Experiment1Form: public Ui_Experiment1Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXP1_H
