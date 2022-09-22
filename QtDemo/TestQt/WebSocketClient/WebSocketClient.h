#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_WebSocketClient.h"

class WebSocketClient : public QMainWindow
{
    Q_OBJECT

public:
    WebSocketClient(QWidget *parent = Q_NULLPTR);

private:
    Ui::WebSocketClientClass ui;
};
