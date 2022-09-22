#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Layout.h"

class Layout : public QMainWindow
{
    Q_OBJECT

public:
    Layout(QWidget *parent = Q_NULLPTR);

private:
    Ui::LayoutClass ui;
};
