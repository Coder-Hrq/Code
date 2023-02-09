#pragma once

#include <QWidget>
#include "ui_VCaptureWidget.h"

class VCaptureWidget : public QWidget
{
    Q_OBJECT

public:
    VCaptureWidget(QWidget *parent = Q_NULLPTR);
    ~VCaptureWidget();

private:
    Ui::VCaptureWidget ui;
};
