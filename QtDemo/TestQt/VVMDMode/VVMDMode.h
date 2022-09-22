#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_VVMDMode.h"

class VVMDMode : public QMainWindow
{
    Q_OBJECT

public:
    VVMDMode(QWidget *parent = Q_NULLPTR);

private:
    Ui::VVMDModeClass ui;
};
