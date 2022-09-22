#pragma once

#include <QLabel>

class vAnimationText : public QLabel
{
    Q_OBJECT

public:
    vAnimationText(QWidget *parent);
    ~vAnimationText();

protected:
    void paintEvent(QPaintEvent *event)override;
};
