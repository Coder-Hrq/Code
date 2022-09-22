#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Promise.h"
#include "qtpromise/qpromise.h"

class Promise : public QMainWindow
{
    Q_OBJECT

public:
    Promise(QWidget *parent = Q_NULLPTR);

public:
	void testRun();

signals:
	void sigTest();

private slots:
	void sltBtn();
	void sltTest();

private:
    Ui::PromiseClass ui;

	QThread				*m_mainThread;
};
