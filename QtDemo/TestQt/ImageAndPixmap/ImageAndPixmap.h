#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ImageAndPixmap.h"

class ImageAndPixmap : public QMainWindow
{
    Q_OBJECT

public:
    ImageAndPixmap(QWidget *parent = Q_NULLPTR);

protected:
    void paintEvent(QPaintEvent *event);

private:
    Ui::ImageAndPixmapClass ui;
    QPixmap m_pixmap = QPixmap("G:/git/github/qt/TestQt/qrc/images/1");
};
