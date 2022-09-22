#include "vgiflabel.h"
#include <QPainter>
#include <QMovie>

VGifLabel::VGifLabel(QWidget *parent)
	: QLabel(parent)
{
	this->setAttribute(Qt::WA_TranslucentBackground);
}

VGifLabel::~VGifLabel()
{
}

void VGifLabel::setRadius(const bool & round, const int & radius)
{
	m_bRound = round;
	m_nRadius = radius;
}

void VGifLabel::paintEvent(QPaintEvent * event)
{
	QPainter painter(this);
	painter.setRenderHint(QPainter::HighQualityAntialiasing, true);
	QPixmap pix;
	if (this->movie() && this->movie()->isValid())
	{
		pix = this->movie()->currentPixmap();
	}
	else if (this->pixmap() && !this->pixmap()->isNull())
	{
		pix = *pixmap();
	}

	if (this->hasScaledContents())
	{
		// �����Ҫ���Ǹ߷���������size��Ҫ����this.devicePixelRatio
		// ����pix����ͬ����devicePixelRatio
		pix = pix.scaled(this->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
	}

	if (m_bRound)
	{
		QPixmap destImage(pix.width(), pix.height());
		destImage.fill(Qt::transparent);

		QPainter tmpPainter(&destImage);
		tmpPainter.setRenderHint(QPainter::HighQualityAntialiasing, true);

		QPainterPath path;
		QRect rect = QRect(0, 0, width(), height());
		//��Բ��
		path.addRoundedRect(rect.adjusted(0, 0, 0, m_nRadius), m_nRadius, m_nRadius);
		tmpPainter.setClipPath(path);
		tmpPainter.drawPixmap(QPoint(0, 0), pix);

		painter.drawPixmap(QPoint(0, 0), destImage);
		return;
	}

	painter.drawPixmap(QPoint(0, 0), pix);
}
