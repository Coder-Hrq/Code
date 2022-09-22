#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Toast.h"

class Toast : public QMainWindow
{
    Q_OBJECT

public:
    Toast(QWidget *parent = Q_NULLPTR);

private:
    Ui::ToastClass ui;
};
