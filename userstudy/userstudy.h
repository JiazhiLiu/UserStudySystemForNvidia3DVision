#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_userstudy.h"

class userstudy : public QMainWindow
{
    Q_OBJECT

public:
    userstudy(QWidget *parent = Q_NULLPTR);

private:
    Ui::userstudyClass ui;
};
