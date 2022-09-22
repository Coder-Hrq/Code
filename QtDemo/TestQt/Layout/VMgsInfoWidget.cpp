#include "VMgsInfoWidget.h"

VMgsInfoWidget::VMgsInfoWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

VMgsInfoWidget::~VMgsInfoWidget()
{
}

void VMgsInfoWidget::setInfo(const bool &isSelf, QWidget *logoWidget, const QString &name)
{
	if (name.isEmpty())
	{
		ui.horizontalLayout_name->removeItem(ui.horizontalSpacer_nameRight);
		ui.horizontalLayout_name->removeItem(ui.horizontalSpacer_nameLeft);
		ui.label->hide();
	}
	else
	{
		ui.label->setText(name);
	}

	if (isSelf)
	{
		ui.widget_userLogo->hide();
		ui.horizontalLayout_name->removeItem(ui.horizontalSpacer_nameRight);
		ui.horizontalLayout_content->removeItem(ui.horizontalSpacer_contentRight);
		logoWidget->setParent(ui.widget_myLogo);
	}
	else
	{
		ui.widget_myLogo->hide();
		ui.horizontalLayout_name->removeItem(ui.horizontalSpacer_nameLeft);
		ui.horizontalLayout_content->removeItem(ui.horizontalSpacer_contentLeft);
		logoWidget->setParent(ui.widget_userLogo);
	}
}

void VMgsInfoWidget::addWidget(QWidget *widget)
{
	ui.gridLayout->addWidget(widget);
}
