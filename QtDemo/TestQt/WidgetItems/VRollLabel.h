#pragma once

#include <QLabel>
#include <QTimer>
#include "ui_VRollLabel.h"

class VRollLabel : public QLabel
{
    Q_OBJECT

public:
    VRollLabel(QWidget *parent = Q_NULLPTR);
    ~VRollLabel();

public:
    void setText(const QString &str);

protected:
    void paintEvent(QPaintEvent *event) override;
    void showEvent(QShowEvent *event) override;

private:
    void check();

private:
    Ui::VRollLabel ui;
    QRect  m_rectText;
    QTimer m_timer;
    int    m_textWidth;
};
