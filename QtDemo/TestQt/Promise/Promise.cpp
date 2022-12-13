#include "Promise.h"
#include "stdafx.h"
#include <QtConcurrent>
#include <QThread>
#include <QNetworkReply>
#include <QNetworkProxy>
#include <QSslSocket>

Promise::Promise(QWidget *parent)
    : QMainWindow(parent)
    , m_manager(new QNetworkAccessManager)
{
    // 显式取消代理，避免调用QGlobalNetworkProxy::proxyForQuery从而避免可能卡住
    m_manager->setProxy(QNetworkProxy::NoProxy);
    qDebug() << QSslSocket::sslLibraryBuildVersionString();

    ui.setupUi(this);
	m_mainThread = QThread::currentThread();
	connect(ui.pushButton, &QPushButton::clicked, this, &Promise::sltBtn);


	connect(this, &Promise::sigTest, this, std::move([]() {
		auto id = QThread::currentThreadId();
		QMessageBox::warning(nullptr, "Title", "This is test promise msg!!!!");
	}), Qt::QueuedConnection);

    connect(ui.pushButtonLoad, &QPushButton::clicked, [=]() {
        download().then([=](QByteArray data) {
            QFile file("D:/test.mp4");
            file.open(QIODevice::WriteOnly);
            file.write(data);
            file.close();
        }).fail([=](QNetworkReply::NetworkError& error) {
            qDebug() << error;
        });
    });
	
}

void Promise::testRun()
{
	QtPromise::resolve(QtConcurrent::run([=]() {
		auto id = QThread::currentThread();
		Sleep(2000);
		emit sigTest();
	}));
}

QtPromise::QPromise<QByteArray> Promise::download(const QString& url)
{
    return QtPromise::QPromise<QByteArray>{[&](
        const QtPromise::QPromiseResolve<QByteArray>& resolve,
        const QtPromise::QPromiseReject<QByteArray>& reject) {

        QNetworkRequest request(url);
        QNetworkReply* reply = m_manager->get(request);
        QObject::connect(reply, &QNetworkReply::finished, [=]() {
            if (reply->error() == QNetworkReply::NoError) {
                resolve(reply->readAll());
            }
            else {
                reject(reply->error());
            }

            reply->deleteLater();
        });
    }};
}

void Promise::sltBtn()
{
	auto id = QThread::currentThread();
	this->testRun();
}

void Promise::sltTest()
{
	auto id = QThread::currentThread();
	QMessageBox::warning(nullptr, "Title", "This is test promise msg!!!!");
}
