#include "vColorfulLabel.h"
#include <QPainter>

vColorfulLabel::vColorfulLabel(QWidget *parent)
    : QLabel(parent)
{
    ui.setupUi(this);
}

vColorfulLabel::~vColorfulLabel()
{
}

void vColorfulLabel::paintEvent(QPaintEvent *event)
{
    QLabel::paintEvent(event);
    QPainter painter(this);
    painter.setPen(QPen(Qt::black));
    QFontMetrics fontMetrics = painter.fontMetrics();
    painter.drawText(QPoint(0, height()), text());
}
