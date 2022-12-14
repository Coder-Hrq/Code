#include "HWebView.h"
#include <QMessageBox>

HWebView::HWebView(QWidget *parent)
    : QWebEngineView(parent)
{
    settings()->setAttribute(QWebEngineSettings::PluginsEnabled, true);
    settings()->setAttribute(QWebEngineSettings::JavascriptEnabled, true);
    settings()->setAttribute(QWebEngineSettings::ScrollAnimatorEnabled, true);
    //��ֹ�Ҽ��˵�
    setContextMenuPolicy(Qt::NoContextMenu);
    //����ҳ��͸��
    page()->setBackgroundColor(Qt::transparent);

    //ע������JS�˵���
    m_WebChannel.registerObject(QStringLiteral("content"), &m_WebObject);
    page()->setWebChannel(&m_WebChannel);

    //ͨ�ù��ܽ���
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
