#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_WidgetItems.h"

class WidgetItems : public QMainWindow
{
    Q_OBJECT

public:
    WidgetItems(QWidget *parent = Q_NULLPTR);

private:
    Ui::WidgetItemsClass ui;
};
