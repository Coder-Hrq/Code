#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_WebSocketServer.h"

class WebSocketServer : public QMainWindow
{
    Q_OBJECT

public:
    WebSocketServer(QWidget *parent = Q_NULLPTR);

private:
    Ui::WebSocketServerClass ui;
};
