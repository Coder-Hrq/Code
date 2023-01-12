#pragma once

#include <QWidget>
#include <QTimer>
#include "ui_VToast.h"

class VToast : public QWidget
{
	Q_OBJECT


public:
    VToast(QWidget *parent = Q_NULLPTR);
    ~VToast();
	static VToast& getInstance();
	void toast(const QString &text, const int &ms = 2000);
    void setToastStyle(QString &style);

private:
	void setText(const QString &text);

private:
	Ui::VToast ui;
	QTimer		m_timer;
};

#define vToast VToast::getInstance()
