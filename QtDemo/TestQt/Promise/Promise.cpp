#include "Promise.h"
#include "stdafx.h"
#include <QtConcurrent>
#include <QThread>

Promise::Promise(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
	m_mainThread = QThread::currentThread();
	connect(ui.pushButton, &QPushButton::clicked, this, &Promise::sltBtn);


	connect(this, &Promise::sigTest, this, std::move([]() {
		auto id = QThread::currentThreadId();
		QMessageBox::warning(nullptr, "Title", "This is test promise msg!!!!");
	}), Qt::QueuedConnection);
	
}

void Promise::testRun()
{
	QtPromise::resolve(QtConcurrent::run([=]() {
		auto id = QThread::currentThread();
		Sleep(2000);
		emit sigTest();
	}));
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
