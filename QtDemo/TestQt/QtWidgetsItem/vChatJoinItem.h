#pragma once

#include <QtWidgets/QWidget>
#include <QPushButton>
#include "vimmsg.h"
#include "ui_vChatJoinItem.h"


class vChatJoinItem : public QWidget
{
    Q_OBJECT

public:
    vChatJoinItem(QSharedPointer<VImMsg> message, QWidget *parent = Q_NULLPTR);

public:
	void setText(const QString &text);
	void setWordWrap(const bool &bWrap);

protected:
	void showEvent(QShowEvent *event);

private:
	void updateUi();

private:
    Ui::vChatJoinItemClass ui;
	QPushButton				m_btn;
	QSharedPointer<VImMsg>	m_message;
};
