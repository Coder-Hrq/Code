#include "QtWidgetsItem.h"

QPixmap scaledPixmap(const QPixmap & src, int width, int height);

QPixmap generatePixmap(const QStringList &imageList, const QRect & rect, const int & radius, const bool &border = true, const int borderWidth = 0, const QColor& borderColor = Qt::white)
{
	QPixmap destImage(rect.width(), rect.height());
	destImage.fill(Qt::transparent);

	//��ȡͼƬ��С�ߴ�
	int imageWidth = rect.width() / 2;
	int imageHeight = rect.height() / 2;

	// ����ͼƬ
	QPixmap pixmap;

	QPainter painter(&destImage);
	// ����� + ƽ����Ե����
	painter.setRenderHints(QPainter::Antialiasing, true);
	painter.setRenderHints(QPainter::SmoothPixmapTransform, true);
	// �ü�ΪԲ��
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
		//	"���������� </span><span style=\" font-family:'sans-serif'; font-size:14px; color:#000000;\">"
		//	"ͨ��</span><span style=\" font-family:'sans-serif'; font-size:14px; color:#ff0000;\">"
		//	" �е�ɵ���ֿɰ��ķ���</span><span style=\" font-family:'sans-serif'; font-size:19px;margin-top: 100px;height:400px; color:#00ffff;\"> ���������봽���</span></p>"));

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
		QAction* pActionExit = menu->addAction(QStringLiteral("�˳�"));
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

/* *��ͼƬ���Բ����ʽ
   *src������ͼƬ
   *rect��ͼƬ�ߴ�
   *radius������Բ��
*/
//QPixmap generatePixmap(const QPixmap & src, const QRect & rect, const int & radius, const bool &border = true, const int borderWidth = 0, const QColor& borderColor = Qt::white)
//{
//	// ��ЧͼƬ������
//	if (src.isNull()) {
//		return src;
//	}
//
//	//��ȡͼƬ�ߴ�
//	int imageWidth = rect.width();
//	int imageHeight = rect.height();
//
//	// ����ͼƬ
//	QPixmap pixmap = scaledPixmap(src, imageWidth, imageHeight);
//
//	QPixmap destImage(imageWidth, imageHeight);
//	destImage.fill(Qt::transparent);
//	QPainter painter(&destImage);
//	// ����� + ƽ����Ե����
//	painter.setRenderHints(QPainter::Antialiasing, true);
//	painter.setRenderHints(QPainter::SmoothPixmapTransform, true);
//	// �ü�ΪԲ��
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


