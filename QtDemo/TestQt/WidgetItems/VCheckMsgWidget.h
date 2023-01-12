#pragma once

#include <QWidget>
#include "ui_VCheckMsgWidget.h"

class VCheckMsgWidget : public QWidget
{
    Q_OBJECT

public:
    VCheckMsgWidget(QWidget *parent = Q_NULLPTR);
    ~VCheckMsgWidget();

private:
    Ui::VCheckMsgWidget ui;
};
