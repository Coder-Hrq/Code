#pragma once
#define DEFAULT_GIF_RADIUS		10

#include <QLabel>

class VGifLabel : public QLabel
{
	Q_OBJECT

public:
	VGifLabel(QWidget *parent);
	~VGifLabel();

public:
	void setRadius(const bool &round = true, const int &radius = DEFAULT_GIF_RADIUS);

protected:
	void paintEvent(QPaintEvent *event)override;

private:
	bool m_bRound = false;
	int m_nRadius = 15;
};
