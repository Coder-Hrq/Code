#include "vChatJoinItem.h"

vChatJoinItem::vChatJoinItem(/*QSharedPointer<VImMsg> message,*/ QWidget *parent)
    : QWidget(parent)
//	, m_message(message)
	, m_btn(this)
{
    ui.setupUi(this);
	setAttribute(Qt::WA_TranslucentBackground);
	setWindowFlags(Qt::FramelessWindowHint);

	m_btn.setStyleSheet("background:rgb(231,54,146);border:1px solid #E73692;border-radius: 5px;color:white;");
	m_btn.setText(QStringLiteral("欢迎TA"));
	ui.label->stackUnder(&m_btn);

	setWordWrap(false);
	setText(QString::fromLocal8Bit("<p style='line-height:0px'>"
		"<font style = 'font-size:13px; font-weight:bold'>恋..若梦 </font>"
		"<font style = 'color:#2C5DFF; font-size:13px; font-weight:bold'>加入了群</font>"
		"<font style = 'color:#FFFFFF; font-size:13px; font-weight:bold'>占位符占位符</font>"
		"< /p>"));
}

void vChatJoinItem::setText(const QString & text)
{
	ui.label->setText(text);
}

void vChatJoinItem::setWordWrap(const bool &bWrap)
{
	ui.label->setWordWrap(bWrap);
	if (bWrap)
	{
		ui.horizontalLayout->removeItem(ui.horizontalSpacer);
	}
}

void vChatJoinItem::showEvent(QShowEvent *event)
{
	QWidget::showEvent(event);
	updateUi();
}

void vChatJoinItem::updateUi()
{
	setGeometry(QRect(0, 0, ui.label->width(), ui.label->height()));
	m_btn.setGeometry(QRect(ui.label->width() - 70 - 15, ui.label->height() - 25 - 5, 70, 25));
}
