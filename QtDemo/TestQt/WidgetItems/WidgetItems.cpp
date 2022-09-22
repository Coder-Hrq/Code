#include "WidgetItems.h"
#include <QDebug>

WidgetItems::WidgetItems(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    ui.textBrowser->setOpenLinks(false);
    ui.textBrowser->setOpenExternalLinks(false);
    QString richText = QStringLiteral("<body style=\"line - height: 18px; font - family:'SimSun'; font - size:9pt; font - weight:400; font - style:normal; \">"
        "<p style = \" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">"
        "%1"
        "<a href='%2'><span style=\"text-decoration: underline; color:#55aaff;\"> ¸´ÖÆ</span></a></p></body>").arg("teststesrterte").arg("wechat");
    ui.textBrowser->setHtml(richText);
    connect(ui.textBrowser, &QTextBrowser::anchorClicked, [=](const QUrl &url) {
        QString strUrl = url.toString();
        qDebug() << strUrl;
    });
}
