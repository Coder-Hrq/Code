#pragma once

#include <QtWidgets/QMainWindow>
#include <QByteArray>
#include <QNetworkAccessManager>
#include "ui_Promise.h"
#include "qtpromise/qpromise.h"

class Promise : public QMainWindow
{
    Q_OBJECT

public:
    Promise(QWidget *parent = Q_NULLPTR);

public:
	void testRun();
    //QtPromise::QPromise<QByteArray> download(const QString& url = QString("https://image-app-test.jiaoyoushow.com/app/logo/gift/A187G02?1670920100246"));
    QtPromise::QPromise<QByteArray> download(const QString& url = QString("https://image-app-test.jiaoyoushow.com//app/logo/flash/pc_combo01.mp4"));

signals:
	void sigTest();

private slots:
	void sltBtn();
	void sltTest();

private:
    Ui::PromiseClass ui;

	QThread				    *m_mainThread;
    QNetworkAccessManager   *m_manager;
};
