#include "vAnimationText.h"

vAnimationText::vAnimationText(QWidget *parent)
    : QLabel(parent)
{
}

vAnimationText::~vAnimationText()
{
}

void vAnimationText::paintEvent(QPaintEvent *event)
{
    return QLabel::paintEvent(event);
}
