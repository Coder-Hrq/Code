#include "QtWidgetsItem.h"

QPixmap scaledPixmap(const QPixmap & src, int width, int height);

QPixmap generatePixmap(const QStringList &imageList, const QRect & rect, const int & radius, const bool &border = true, const int borderWidth = 0, const QColor& borderColor = Qt::white)
{
	QPixmap destImage(rect.width(), rect.height());
	destImage.fill(Qt::transparent);

	//获取图片缩小尺寸
	int imageWidth = rect.width() / 2;
	int imageHeight = rect.height() / 2;

	// 缩放图片
	QPixmap pixmap;

	QPainter painter(&destImage);
	// 抗锯齿 + 平滑边缘处理
	painter.setRenderHints(QPainter::Antialiasing, true);
	painter.setRenderHints(QPainter::SmoothPixmapTransform, true);
	// 裁剪为圆角
	QPainterPath path;
	path.addRoundedRect(rect, radius, radius);
	painter.setClipPath(path);

	switch (imageList.size())
	{
	case 4:
		pixmap = scaledPixmap(imageList[3], imageWidth, imageHeight);
		painter.drawPixmap(0, imageHeight, imageWidth, imageHeight, pixmap);
	case 3:
		pixmap = scaledPixmap(imageList[2], imageWidth, imageHeight);
		painter.drawPixmap(imageWidth, imageHeight, imageWidth, imageHeight, pixmap);
	case 2:
		pixmap = scaledPixmap(imageList[1], imageWidth, imageHeight);
		painter.drawPixmap(imageWidth, 0, imageWidth, imageHeight, pixmap);
	case 1:
		pixmap = scaledPixmap(imageList[0], imageWidth, imageHeight);
		painter.drawPixmap(0, 0, imageWidth, imageHeight, pixmap);
		break;
	default:
		break;
	}

	return destImage;
}
//QPixmap generatePixmap(const QPixmap & src, const QRect & rect, const int & radius, const bool &border = true, const int borderWidth = 0, const QColor& borderColor = Qt::white);

QtWidgetsItem::QtWidgetsItem(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
	init();
}

void QtWidgetsItem::init()
{
	connect(ui.pushButton_tray, &QPushButton::clicked, [=]() {
		initTray();
	});

	connect(ui.pushButton_jointImage, &QPushButton::clicked, [=]() {
		jointImages();
	});
	
	connect(ui.pushButton_joinUnion, &QPushButton::clicked, [=]() {
		//QSharedPointer<vChatJoinItem> chatJoinItem = QSharedPointer<vChatJoinItem>(new vChatJoinItem);
		//chatJoinItem->show();
		//chatJoinItem->setText(QString::fromLocal8Bit("<p style=\" style='margin-top: 100px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; \"><span style=\" font-family:'sans-serif'; font-size:14px; color:#ff0000;\">"
		//	"憨憨张天乐 </span><span style=\" font-family:'sans-serif'; font-size:14px; color:#000000;\">"
		//	"通过</span><span style=\" font-family:'sans-serif'; font-size:14px; color:#ff0000;\">"
		//	" 有点傻点又可爱的肥仔</span><span style=\" font-family:'sans-serif'; font-size:19px;margin-top: 100px;height:400px; color:#00ffff;\"> 邀请加入了氪金团</span></p>"));

		//QEventLoop eventLoop;
		//eventLoop.exec();
	});
}

void QtWidgetsItem::initTray(const QString& icon)
{
	if (!m_bTray)
	{
		m_tray.setIcon(QIcon("../qrc/images/WSLogo.ico"));
		auto menu = new QMenu();
		m_tray.setContextMenu(menu);
		QAction* pActionExit = menu->addAction(QStringLiteral("退出"));
		m_tray.show();
		connect(pActionExit, &QAction::triggered, []() {
			exit(0);
		});

		connect(&m_tray, &QSystemTrayIcon::activated, [=](QSystemTrayIcon::ActivationReason reason) {
			if (isMinimized())
			{
				showNormal();
			}
			else
			{
				showMinimized();
			}
		});

		m_bTray = true;
	}

}


void QtWidgetsItem::jointImages()
{
	QStringList list;
	list << "../qrc/images/1" << "../qrc/images/2" << "../qrc/images/3" << "../qrc/images/4";
	ui.label_image->setPixmap(generatePixmap(list, QRect(0, 0, 80, 80), 40));
}

QPixmap scaledPixmap(const QPixmap & src, int width, int height)
{
	return src.scaled(width, (height == 0 ? width : height),
		Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
}

/* *给图片添加圆角样式
   *src：处理图片
   *rect：图片尺寸
   *radius：设置圆角
*/
//QPixmap generatePixmap(const QPixmap & src, const QRect & rect, const int & radius, const bool &border = true, const int borderWidth = 0, const QColor& borderColor = Qt::white)
//{
//	// 无效图片不处理
//	if (src.isNull()) {
//		return src;
//	}
//
//	//获取图片尺寸
//	int imageWidth = rect.width();
//	int imageHeight = rect.height();
//
//	// 缩放图片
//	QPixmap pixmap = scaledPixmap(src, imageWidth, imageHeight);
//
//	QPixmap destImage(imageWidth, imageHeight);
//	destImage.fill(Qt::transparent);
//	QPainter painter(&destImage);
//	// 抗锯齿 + 平滑边缘处理
//	painter.setRenderHints(QPainter::Antialiasing, true);
//	painter.setRenderHints(QPainter::SmoothPixmapTransform, true);
//	// 裁剪为圆角
//	QPainterPath path;
//	path.addRoundedRect(rect, radius, radius);
//	painter.setClipPath(path);
//	painter.drawPixmap(0, 0, imageWidth, imageHeight, pixmap);
//	if (border)
//	{
//		painter.setPen(QPen(borderColor, borderWidth));
//		painter.drawEllipse(rect);
//	}
//	return destImage;
//}


