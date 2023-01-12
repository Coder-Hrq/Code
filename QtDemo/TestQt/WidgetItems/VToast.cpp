#include "VToast.h"
#include <QPointer>

VToast::VToast(QWidget *parent)
	: QWidget(parent)
	, m_timer()
{
	ui.setupUi(this);

	setAttribute(Qt::WA_TranslucentBackground);
	setWindowFlags(Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint);
    setAttribute(Qt::WA_TransparentForMouseEvents, true);

	m_timer.setSingleShot(true);

	QPointer<QWidget> obj(this);
	connect(&m_timer, &QTimer::timeout, [=] {
		if (obj.isNull()) return;

		hide();
	});

    if (parent != nullptr)
    {
        setGeometry(0, 0, parent->width(), parent->height());
    }
    ui.label_toast->setAttribute(Qt::WA_TransparentForMouseEvents, true);
}

VToast& VToast::getInstance()
{
	static VToast m_instance;
	return m_instance;
}

void VToast::toast(const QString &text, const int &ms)
{
	setText(text);
	if (!isVisible())
	{
		show();
	}
	m_timer.start(ms);
}

void VToast::setToastStyle(QString &style)
{
    ui.label_toast->setStyleSheet(style);
}

VToast::~VToast()
{
}

void VToast::setText(const QString &text)
{
	ui.label_toast->setText(text);
}
