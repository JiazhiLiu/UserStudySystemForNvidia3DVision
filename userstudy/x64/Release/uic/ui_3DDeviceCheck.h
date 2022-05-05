/********************************************************************************
** Form generated from reading UI file '3DDeviceCheck.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_3DDEVICECHECK_H
#define UI_3DDEVICECHECK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Device3DCheckForm
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QGroupBox *TestImage;
    QLabel *label_5;
    QGroupBox *SeenBox;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *LSeen_Box_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_6;
    QGroupBox *LSeen_Box;
    QHBoxLayout *horizontalLayout;
    QPushButton *LSeen1;
    QPushButton *LSeen2;
    QPushButton *LSeen3;
    QGroupBox *RSeen_Box_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_7;
    QGroupBox *RSeen_Box;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *RSeen1;
    QPushButton *RSeen2;
    QPushButton *RSeen3;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbtnOK;
    QSpacerItem *verticalSpacer;
    QButtonGroup *buttonGroup;
    QButtonGroup *buttonGroup_2;

    void setupUi(QWidget *Device3DCheckForm)
    {
        if (Device3DCheckForm->objectName().isEmpty())
            Device3DCheckForm->setObjectName(QString::fromUtf8("Device3DCheckForm"));
        Device3DCheckForm->resize(983, 734);
        verticalLayout = new QVBoxLayout(Device3DCheckForm);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(Device3DCheckForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(16777215, 25));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei UI"));
        font.setPointSize(14);
        label->setFont(font);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(Device3DCheckForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(16777215, 25));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Microsoft YaHei UI"));
        font1.setPointSize(10);
        label_2->setFont(font1);

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(Device3DCheckForm);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(16777215, 25));
        label_3->setFont(font1);

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(Device3DCheckForm);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(16777215, 25));
        label_4->setFont(font1);

        verticalLayout->addWidget(label_4);

        TestImage = new QGroupBox(Device3DCheckForm);
        TestImage->setObjectName(QString::fromUtf8("TestImage"));
        TestImage->setMinimumSize(QSize(569, 342));
        TestImage->setMaximumSize(QSize(569, 342));

        verticalLayout->addWidget(TestImage);

        label_5 = new QLabel(Device3DCheckForm);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMaximumSize(QSize(16777215, 25));
        label_5->setFont(font1);

        verticalLayout->addWidget(label_5);

        SeenBox = new QGroupBox(Device3DCheckForm);
        SeenBox->setObjectName(QString::fromUtf8("SeenBox"));
        horizontalLayout_3 = new QHBoxLayout(SeenBox);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        LSeen_Box_2 = new QGroupBox(SeenBox);
        LSeen_Box_2->setObjectName(QString::fromUtf8("LSeen_Box_2"));
        verticalLayout_2 = new QVBoxLayout(LSeen_Box_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_6 = new QLabel(LSeen_Box_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMaximumSize(QSize(16777215, 25));
        label_6->setFont(font1);

        verticalLayout_2->addWidget(label_6);

        LSeen_Box = new QGroupBox(LSeen_Box_2);
        LSeen_Box->setObjectName(QString::fromUtf8("LSeen_Box"));
        horizontalLayout = new QHBoxLayout(LSeen_Box);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        LSeen1 = new QPushButton(LSeen_Box);
        buttonGroup = new QButtonGroup(Device3DCheckForm);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(LSeen1);
        LSeen1->setObjectName(QString::fromUtf8("LSeen1"));
        LSeen1->setMinimumSize(QSize(100, 100));
        LSeen1->setMaximumSize(QSize(100, 100));
        LSeen1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"image: url(3DDeviceCheck/Seen1.jpg);\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:hover {\n"
"border:3px solid red;\n"
"}\n"
"QPushButton:checked {\n"
"border:3px solid red;\n"
"}"));
        LSeen1->setCheckable(true);

        horizontalLayout->addWidget(LSeen1);

        LSeen2 = new QPushButton(LSeen_Box);
        buttonGroup->addButton(LSeen2);
        LSeen2->setObjectName(QString::fromUtf8("LSeen2"));
        LSeen2->setMinimumSize(QSize(100, 100));
        LSeen2->setMaximumSize(QSize(100, 100));
        LSeen2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"image: url(3DDeviceCheck/Seen2.jpg);\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:hover {\n"
"border:3px solid red;\n"
"}\n"
"QPushButton:checked {\n"
"border:3px solid red;\n"
"}"));
        LSeen2->setCheckable(true);

        horizontalLayout->addWidget(LSeen2);

        LSeen3 = new QPushButton(LSeen_Box);
        buttonGroup->addButton(LSeen3);
        LSeen3->setObjectName(QString::fromUtf8("LSeen3"));
        LSeen3->setMinimumSize(QSize(100, 100));
        LSeen3->setMaximumSize(QSize(100, 100));
        LSeen3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"image: url(3DDeviceCheck/Seen3.jpg);\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:hover {\n"
"border:3px solid red;\n"
"}\n"
"QPushButton:checked {\n"
"border:3px solid red;\n"
"}"));
        LSeen3->setCheckable(true);

        horizontalLayout->addWidget(LSeen3);


        verticalLayout_2->addWidget(LSeen_Box);


        horizontalLayout_3->addWidget(LSeen_Box_2);

        RSeen_Box_2 = new QGroupBox(SeenBox);
        RSeen_Box_2->setObjectName(QString::fromUtf8("RSeen_Box_2"));
        verticalLayout_3 = new QVBoxLayout(RSeen_Box_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_7 = new QLabel(RSeen_Box_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMaximumSize(QSize(16777215, 25));
        label_7->setFont(font1);

        verticalLayout_3->addWidget(label_7);

        RSeen_Box = new QGroupBox(RSeen_Box_2);
        RSeen_Box->setObjectName(QString::fromUtf8("RSeen_Box"));
        horizontalLayout_2 = new QHBoxLayout(RSeen_Box);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        RSeen1 = new QPushButton(RSeen_Box);
        buttonGroup_2 = new QButtonGroup(Device3DCheckForm);
        buttonGroup_2->setObjectName(QString::fromUtf8("buttonGroup_2"));
        buttonGroup_2->addButton(RSeen1);
        RSeen1->setObjectName(QString::fromUtf8("RSeen1"));
        RSeen1->setMinimumSize(QSize(100, 100));
        RSeen1->setMaximumSize(QSize(100, 100));
        RSeen1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"image: url(3DDeviceCheck/Seen1.jpg);\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:hover {\n"
"border:3px solid red;\n"
"}\n"
"QPushButton:checked {\n"
"border:3px solid red;\n"
"}"));
        RSeen1->setCheckable(true);

        horizontalLayout_2->addWidget(RSeen1);

        RSeen2 = new QPushButton(RSeen_Box);
        buttonGroup_2->addButton(RSeen2);
        RSeen2->setObjectName(QString::fromUtf8("RSeen2"));
        RSeen2->setMinimumSize(QSize(100, 100));
        RSeen2->setMaximumSize(QSize(100, 100));
        RSeen2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"image: url(3DDeviceCheck/Seen2.jpg);\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:hover {\n"
"border:3px solid red;\n"
"}\n"
"QPushButton:checked {\n"
"border:3px solid red;\n"
"}"));
        RSeen2->setCheckable(true);

        horizontalLayout_2->addWidget(RSeen2);

        RSeen3 = new QPushButton(RSeen_Box);
        buttonGroup_2->addButton(RSeen3);
        RSeen3->setObjectName(QString::fromUtf8("RSeen3"));
        RSeen3->setMinimumSize(QSize(100, 100));
        RSeen3->setMaximumSize(QSize(100, 100));
        RSeen3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"image: url(3DDeviceCheck/Seen3.jpg);\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:hover {\n"
"border:3px solid red;\n"
"}\n"
"QPushButton:checked {\n"
"border:3px solid red;\n"
"}"));
        RSeen3->setCheckable(true);

        horizontalLayout_2->addWidget(RSeen3);


        verticalLayout_3->addWidget(RSeen_Box);


        horizontalLayout_3->addWidget(RSeen_Box_2);


        verticalLayout->addWidget(SeenBox);

        groupBox = new QGroupBox(Device3DCheckForm);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(0, 40));
        groupBox->setFont(font1);
        horizontalLayout_4 = new QHBoxLayout(groupBox);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(861, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        pbtnOK = new QPushButton(groupBox);
        pbtnOK->setObjectName(QString::fromUtf8("pbtnOK"));
        pbtnOK->setMinimumSize(QSize(0, 25));

        horizontalLayout_4->addWidget(pbtnOK);


        verticalLayout->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(Device3DCheckForm);

        QMetaObject::connectSlotsByName(Device3DCheckForm);
    } // setupUi

    void retranslateUi(QWidget *Device3DCheckForm)
    {
        Device3DCheckForm->setWindowTitle(QApplication::translate("Device3DCheckForm", "Form", nullptr));
        label->setText(QApplication::translate("Device3DCheckForm", "3D Device Check", nullptr));
        label_2->setText(QApplication::translate("Device3DCheckForm", "Please complete the following procedures to ensure the 3D device works well!", nullptr));
        label_3->setText(QApplication::translate("Device3DCheckForm", "1. With stereo glasses, watch the following image using your left and right eyes in turn.", nullptr));
        label_4->setText(QApplication::translate("Device3DCheckForm", "Warning: please do not open both the eyes simultaneously to watch the image!", nullptr));
        TestImage->setTitle(QString());
        label_5->setText(QApplication::translate("Device3DCheckForm", "2. Please choose what you see.", nullptr));
        SeenBox->setTitle(QString());
        LSeen_Box_2->setTitle(QString());
        label_6->setText(QApplication::translate("Device3DCheckForm", "Using your left eye (closing your right)", nullptr));
        LSeen_Box->setTitle(QString());
        LSeen1->setText(QString());
        LSeen2->setText(QString());
        LSeen3->setText(QString());
        RSeen_Box_2->setTitle(QString());
        label_7->setText(QApplication::translate("Device3DCheckForm", "Using your right eye (closing your left)", nullptr));
        RSeen_Box->setTitle(QString());
        RSeen1->setText(QString());
        RSeen2->setText(QString());
        RSeen3->setText(QString());
        groupBox->setTitle(QString());
        pbtnOK->setText(QApplication::translate("Device3DCheckForm", "Done", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Device3DCheckForm: public Ui_Device3DCheckForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_3DDEVICECHECK_H
