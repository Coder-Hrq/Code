#include "ImageAndPixmap.h"

ImageAndPixmap::ImageAndPixmap(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
}

void ImageAndPixmap::paintEvent(QPaintEvent *event)
{
    QImage imageOrig = m_pixmap.toImage();
    int width = imageOrig.width();
    int height = imageOrig.height();
    QImage imageGray(width, height, QImage::Format_ARGB32_Premultiplied);

    for (int x = 0; x < width; ++x)
    {
        for (int y = 0; y < height; ++y)
        {
            QRgb pixel = imageOrig.pixel(x, y);
            int alpha = qAlpha(pixel);
            int gray = qGray(pixel);
            QRgb grayPixel = qRgba(gray, gray, gray, alpha);
            imageGray.setPixel(x, y, grayPixel);
        } 
    } 

    QImage imageOrig1 = QPixmap("G:/git/github/qt/TestQt/qrc/images/1").toImage();
    int width1 = imageOrig1.width();
    int height1 = imageOrig1.height();
    QImage imageGray1(width1, height1, QImage::Format_ARGB32_Premultiplied);

    for (int x = 0; x < width1; ++x)
    {
        for (int y = 0; y < height1; ++y)
        {
            QRgb pixel1 = imageOrig1.pixel(x, y);
            int alpha1 = qAlpha(pixel1);
            int gray1 = qGray(pixel1);
            QRgb grayPixel1 = qRgba(gray1, gray1, gray1, alpha1);
            imageGray1.setPixel(x, y, grayPixel1);
        }
    }

    ui.label->setPixmap(QPixmap::fromImage(imageGray1));
    return QWidget::paintEvent(event);
}
