#pragma once

#include <QWidget>
#include "ui_VCheckOrderWidget.h"

class VCheckOrderWidget : public QWidget
{
    Q_OBJECT

public:
    VCheckOrderWidget(QWidget *parent = Q_NULLPTR);
    ~VCheckOrderWidget();

private:
    Ui::VCheckOrderWidget ui;
};
