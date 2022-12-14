#pragma once

#include <QWebEngineView>
#include <QWebChannel>
#include <QWebEngineSettings>
#include "WebConnect.h"

class HWebView : public QWebEngineView
{
    Q_OBJECT

public:
    HWebView(QWidget *parent);
    ~HWebView();

public:
    void sendToJs(const QString &text);

signals:
    void sigReceiveFromJs(const QString &text);

private:
    WebConnect m_WebObject;
    QWebChannel m_WebChannel;
};
