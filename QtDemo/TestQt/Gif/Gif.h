#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Gif.h"

class Gif : public QMainWindow
{
    Q_OBJECT

public:
    Gif(QWidget *parent = Q_NULLPTR);

private:
    Ui::GifClass ui;
};
