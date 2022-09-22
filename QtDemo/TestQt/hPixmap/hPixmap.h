#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_hPixmap.h"

class hPixmap : public QMainWindow
{
    Q_OBJECT

public:
    hPixmap(QWidget *parent = Q_NULLPTR);

private:
    Ui::hPixmapClass ui;
};
