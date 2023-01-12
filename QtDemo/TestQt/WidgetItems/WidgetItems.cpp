#include "WidgetItems.h"
#include <QDebug>
#include <QMessageBox>
#include "VSafeChatModeWidget.h"
#include "VToast.h"
#include <QTextCharFormat>

WidgetItems::WidgetItems(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    ui.textBrowser->setOpenLinks(false);
    ui.textBrowser->setOpenExternalLinks(false);
    QString richText = QStringLiteral("<body style=\"line - height: 18px; font - family:'SimSun'; font - size:9pt; font - weight:400; font - style:normal; \">"
        "<p style = \" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">"
        "%1"
        "<a href='%2'><span style=\"text-decoration: underline; color:#55aaff;\"> 复制</span></a></p></body>").arg("teststesrterte").arg("wechat");
    ui.textBrowser->setHtml(richText);
    connect(ui.textBrowser, &QTextBrowser::anchorClicked, [=](const QUrl &url) {
        QString strUrl = url.toString();
        qDebug() << strUrl;
    });


    //VSafeChatModeWidget
    auto pSafeChatModeWidget = new VSafeChatModeWidget();
    connect(pSafeChatModeWidget, &VSafeChatModeWidget::sigCheckMsg, [=]() {
        QMessageBox::warning(this, "warring", "from msg");
    });
    connect(pSafeChatModeWidget, &VSafeChatModeWidget::sigLinkActivated, [=]() {
        QMessageBox::warning(this, "warring", "from link");
    });
    connect(ui.pushButton_safeChatMode, &QPushButton::clicked, [=] {
        pSafeChatModeWidget->show();
    });

    connect(ui.pushButton_toast, &QPushButton::clicked, [=] {
        ////全局调用
        //vToast.toast(QStringLiteral("这都不...."));
        //子控件调用
        static VToast myToast(this);
        myToast.setToastStyle(QStringLiteral(
            "QLabel#label_toast"
            "{"
            "   color: rgba(255, 255, 255);"
            "   background: rgba(0, 0, 0, 0.6);"
            "   border-radius: 12px;"
            "   font-weight: 400;"
            "   font-size: 12px;"
            "   padding: 5px 15px 5px 15px;"
            ""
            "}"));
        myToast.toast(QStringLiteral("这都不...."));
    });

    //init 日期类
    {

        QTextCharFormat format;//字体风格：黑色
        format.setForeground(QColor(Qt::black));
        ui.calendarWidget->setWeekdayTextFormat(Qt::Saturday, format);
        ui.calendarWidget->setWeekdayTextFormat(Qt::Sunday, format);

    }
}
