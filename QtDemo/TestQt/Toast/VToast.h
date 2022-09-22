#pragma once

#include <QWidget>
#include <QTimer>
#include "ui_VToast.h"

class VToast : public QWidget
{
	Q_OBJECT


public:
	static VToast& getInstance();
	void toast(const QString &text, const int &ms = 2000);

private:
	VToast(QWidget *parent = Q_NULLPTR);
	~VToast();
	void setText(const QString &text);

private:
	Ui::VToast ui;
	QTimer		m_timer;
};

#define vToast VToast::getInstance()
