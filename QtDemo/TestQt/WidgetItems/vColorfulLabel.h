#pragma once

#include <QLabel>
#include "ui_vColorfulLabel.h"

class vColorfulLabel : public QLabel
{
    Q_OBJECT

public:
    vColorfulLabel(QWidget *parent = Q_NULLPTR);
    ~vColorfulLabel();

protected:
    void paintEvent(QPaintEvent *event) override;

private:
    Ui::vColorfulLabel ui;
};
