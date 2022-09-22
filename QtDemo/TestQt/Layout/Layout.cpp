#include "Layout.h"
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QVBoxLayout>

Layout::Layout(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

	ui.widget->setStyleSheet("background: yellow;");
	QHBoxLayout *layout = new QHBoxLayout(ui.widget);
	bool isSelf = false;
	auto widgetV = new QWidget(this);
	QVBoxLayout *layoutv = new QVBoxLayout(widgetV);
	layout->setContentsMargins(0, 5, 0, 5);

	layout->setContentsMargins(0, 5, 0, 5);
	auto label1 = new QWidget(this);
	label1->setFixedSize(50, 50);
	label1->setStyleSheet("background: red; ");

	auto label2 = new QWidget(this);
	label2->setStyleSheet("background: green;");
	label2->setFixedSize(50, 50);

	auto label3 = new QWidget(this);
	label3->setFixedSize(200, 20);
	label3->setStyleSheet("background: blue;");


	layoutv->addWidget(label3, 0, Qt::AlignTop);
	if (isSelf)
	{
		layoutv->addWidget(label1, 1, Qt::AlignRight);
	}
	else
	{
		layoutv->addWidget(label1, 1, Qt::AlignLeft);
	}

	layout->addWidget(widgetV);
	if (isSelf) {
		layout->insertStretch(0);
		layout->addWidget(label2, 0, Qt::AlignTop);

	}
	else {
		layout->addStretch();
		layout->insertWidget(0, label2, 0, Qt::AlignTop);
	}
}
