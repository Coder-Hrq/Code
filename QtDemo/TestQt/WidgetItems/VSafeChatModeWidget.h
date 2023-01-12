#pragma once

#include <QWidget>
#include "ui_VSafeChatModeWidget.h"

class VSafeChatModeWidget : public QWidget
{
    Q_OBJECT

public:
    VSafeChatModeWidget(QWidget *parent = Q_NULLPTR);
    ~VSafeChatModeWidget();

signals:
    void sigLinkActivated(QString);
    void sigCheckMsg();
    void sigCheckId();
    void sigCheckOrder();

private:
    void init();

private:
    Ui::VSafeChatModeWidget ui;
};
