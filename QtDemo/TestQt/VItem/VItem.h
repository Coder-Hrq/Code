#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_VItem.h"

class VItem : public QMainWindow
{
    Q_OBJECT

public:
    VItem(QWidget *parent = Q_NULLPTR);

private:
    Ui::VItemClass ui;
};
