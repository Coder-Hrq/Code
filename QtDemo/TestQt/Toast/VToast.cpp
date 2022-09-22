#include "VToast.h"
#include <QPointer>

VToast::VToast(QWidget *parent)
	: QWidget(parent)
	, m_timer()
{
	ui.setupUi(this);

	setAttribute(Qt::WA_TranslucentBackground);
	setWindowFlags(Qt::FramelessWindowHint);

	m_timer.setSingleShot(true);

	QPointer<QWidget> obj(this);
	connect(&m_timer, &QTimer::timeout, [=] {
		if (obj.isNull()) return;
		 
		hide();
	});
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

VToast::~VToast()
{
}

void VToast::setText(const QString &text)
{
	ui.label_toast->setText(text);
}
