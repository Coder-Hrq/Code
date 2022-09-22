#include "H_qss.h"
#include "stdafx.h"
#include <QPropertyAnimation>

H_qss::H_qss(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

	runAnimation();
}

void H_qss::runAnimation()
{
	QRect rect = ui.pushButtonShake->geometry();

    //抖动按键
	QPropertyAnimation *animation = new QPropertyAnimation(ui.pushButtonShake, "geometry");
	animation->setDuration(300);
	animation->setKeyValueAt(0, rect);
	animation->setKeyValueAt(0.25, rect.adjusted(-10, 0, -10, 0));
	animation->setKeyValueAt(0.5, rect);
	animation->setKeyValueAt(0.75, rect.adjusted(10, 0, 10, 0));
	animation->setKeyValueAt(1, rect);

    //动态彩色按钮
    QPropertyAnimation *animationText = new QPropertyAnimation(ui.pushButtonText, "changeV");


    animationText->setDuration(300);
    animationText->setKeyValueAt(0, 0);
    animationText->setKeyValueAt(0.25, 25);
    animationText->setKeyValueAt(0.5, 50);
    animationText->setKeyValueAt(0.75, 75);
    animationText->setKeyValueAt(1, 100);

	QSequentialAnimationGroup *group = new QSequentialAnimationGroup(this);
    group->addAnimation(animation);
    group->addAnimation(animationText);
	group->setLoopCount(-1);

	connect(ui.pushButtonShake, &QPushButton::clicked, [=]() {
		static bool bStart = false;
		bStart = !bStart;
		if (bStart)
		{
			group->start();
		}
		else
		{
			group->stop();
		}
	});


    //彩色文本label
    QFont font = ui.label_color->font();
    font.setPointSize(12);
    ui.label_color->setFont(font);
    QPalette labelPal;
    QLinearGradient colorGradient = QLinearGradient(0, 0, ui.label_color->width(), 0);
    colorGradient.setSpread(QGradient::RepeatSpread);
    colorGradient.setColorAt(0, QColor("#3d5afe"));
    colorGradient.setColorAt(1, QColor("#fd3e7f"));
    QBrush brush(colorGradient);
    labelPal.setBrush(QPalette::ColorRole::Text, brush);

    ui.label_color->setPalette(labelPal);
    ui.label_color->setForegroundRole(QPalette::Text);
}
