#include "hPixmap.h"
#include <QPainter>

QPixmap scaledPixmap(const QPixmap & src, int width, int height)
{
	return src.scaled(width, (height == 0 ? width : height),
		Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
}

QPixmap generatePixmap(const QStringList &imageList, const QRect & rect, const int & radius)
{
	QPixmap destImage(rect.width(), rect.height());
	destImage.fill(Qt::transparent);

	//»ñÈ¡Í¼Æ¬ËõÐ¡³ß´ç
	int imageWidth = rect.width() / 2;
	int imageHeight = rect.height() / 2;

	// Ëõ·ÅÍ¼Æ¬
	QPixmap pixmap;

	QPainter painter(&destImage);
	// ¿¹¾â³Ý + Æ½»¬±ßÔµ´¦Àí
	painter.setRenderHints(QPainter::Antialiasing, true);
	painter.setRenderHints(QPainter::SmoothPixmapTransform, true);
	// ²Ã¼ôÎªÔ²½Ç
	QPainterPath path;
	path.addRoundedRect(rect, radius, radius);
	painter.setClipPath(path);
	//»­±³¾°
	painter.fillPath(path, QBrush(QColor(204, 204, 204)));
	switch (imageList.size())
	{
	case 4:
		pixmap = scaledPixmap(imageList[3], imageWidth, imageHeight);
		painter.drawPixmap(imageWidth, imageHeight, imageWidth, imageHeight, pixmap);

		pixmap = scaledPixmap(imageList[2], imageWidth, imageHeight);
		painter.drawPixmap(0, imageHeight, imageWidth, imageHeight, pixmap);

		pixmap = scaledPixmap(imageList[1], imageWidth, imageHeight);
		painter.drawPixmap(imageWidth, 0, imageWidth, imageHeight, pixmap);

		pixmap = scaledPixmap(imageList[0], imageWidth, imageHeight);
		painter.drawPixmap(0, 0, imageWidth, imageHeight, pixmap);

		break;
	case 3:
		pixmap = scaledPixmap(imageList[2], imageWidth, imageHeight);
		painter.drawPixmap(imageWidth, imageHeight, imageWidth, imageHeight, pixmap);

		pixmap = scaledPixmap(imageList[1], imageWidth, imageHeight);
		painter.drawPixmap(0, imageHeight, imageWidth, imageHeight, pixmap);

		pixmap = scaledPixmap(imageList[0], imageWidth, imageHeight);
		painter.drawPixmap(imageWidth / 2, 0, imageWidth, imageHeight, pixmap);

		break;
	case 2:
		pixmap = scaledPixmap(imageList[1], imageWidth, imageHeight);
		painter.drawPixmap(0, imageHeight / 2, imageWidth, imageHeight, pixmap);

		pixmap = scaledPixmap(imageList[0], imageWidth, imageHeight);
		painter.drawPixmap(imageWidth , imageHeight / 2, imageWidth, imageHeight, pixmap);

		break;
	case 1:
		pixmap = scaledPixmap(imageList[0], imageWidth * 2, imageHeight * 2);
		painter.drawPixmap(0, 0, imageWidth * 2, imageHeight * 2, pixmap);
		break;
	default:
		break;
	}
	return destImage;
}


hPixmap::hPixmap(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
	QStringList list{ "G:/git/github/qt/TestQt/qrc/images/1" ,"G:/git/github/qt/TestQt/qrc/images/1","G:/git/github/qt/TestQt/qrc/images/1","G:/git/github/qt/TestQt/qrc/images/1" };
	ui.label_logo->setPixmap(generatePixmap(list, QRect(0,0,60,60), 60));
}
