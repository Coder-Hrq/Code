#include "HWebView.h"
#include <QMessageBox>

HWebView::HWebView(QWidget *parent)
    : QWebEngineView(parent)
{
    settings()->setAttribute(QWebEngineSettings::PluginsEnabled, true);
    settings()->setAttribute(QWebEngineSettings::JavascriptEnabled, true);
    settings()->setAttribute(QWebEngineSettings::ScrollAnimatorEnabled, true);
    //禁止右键菜单
    setContextMenuPolicy(Qt::NoContextMenu);
    //设置页面透明
    page()->setBackgroundColor(Qt::transparent);

    //注册对象给JS端调用
    m_WebChannel.registerObject(QStringLiteral("content"), &m_WebObject);
    page()->setWebChannel(&m_WebChannel);

    //通用功能解析
    connect(&m_WebObject, &WebConnect::sigReceiveFromJs, this, &HWebView::sigReceiveFromJs, Qt::UniqueConnection);

    connect(this, &HWebView::sigReceiveFromJs, this, [=](QString text) {
        QMessageBox::warning(this, "warning", QString("sigReceiveFromJs:%1").arg(text));
    }, Qt::UniqueConnection);
}

HWebView::~HWebView()
{
}

void HWebView::sendToJs(const QString &text)
{
    m_WebObject.sendToJs(text);
}
