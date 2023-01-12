#pragma once

#include <QWidget>
#include "ui_VCheckIdWidget.h"

class VCheckIdWidget : public QWidget
{
    Q_OBJECT

public:
    VCheckIdWidget(QWidget *parent = Q_NULLPTR);
    ~VCheckIdWidget();

private:
    Ui::VCheckIdWidget ui;
};
