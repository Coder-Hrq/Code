#pragma once

#include <QWidget>
#include "ui_VMgsInfoWidget.h"

class VMgsInfoWidget : public QWidget
{
	Q_OBJECT

public:
	VMgsInfoWidget(QWidget *parent = Q_NULLPTR);
	~VMgsInfoWidget();

public:
	void setInfo(const bool &isSelf, QWidget *logoWidget, const QString &name = "");
	void addWidget(QWidget *widget);

private:
	Ui::VMgsInfoWidget ui;
};
