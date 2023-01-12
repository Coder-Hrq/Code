#include "VSafeChatModeWidget.h"

VSafeChatModeWidget::VSafeChatModeWidget(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
    init();
}

VSafeChatModeWidget::~VSafeChatModeWidget()
{
}

void VSafeChatModeWidget::init()
{
    connect(ui.label_txt, &QLabel::linkActivated, this, &VSafeChatModeWidget::sigLinkActivated);

    connect(ui.pushButton_close, &QPushButton::clicked, [=]() {
        close();
    });

    connect(ui.pushButton_checkMsg, &QPushButton::clicked, this, &VSafeChatModeWidget::sigCheckMsg);

    connect(ui.pushButton_checkId, &QPushButton::clicked, this, &VSafeChatModeWidget::sigCheckId);

    connect(ui.pushButton_checkOrder, &QPushButton::clicked, this, &VSafeChatModeWidget::sigCheckOrder);
}
