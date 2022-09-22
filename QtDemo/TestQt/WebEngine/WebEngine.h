#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_WebEngine.h"

class WebEngine : public QMainWindow
{
    Q_OBJECT

public:
    WebEngine(QWidget *parent = Q_NULLPTR);

private:
    Ui::WebEngineClass ui;
};
