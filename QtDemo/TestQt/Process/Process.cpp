#include "Process.h"
#include "stdafx.h"

Process::Process(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
	connect(ui.pushButton_check, &QPushButton::clicked, [=] (){
		QDesktopServices::openUrl(QUrl::fromLocalFile(ui.lineEdit_url->text()));
	});

	connect(ui.pushButton_ping, &QPushButton::clicked, [=]() {
		QProcess *myProcess = new QProcess(this);

		myProcess->setCreateProcessArgumentsModifier([](QProcess::CreateProcessArguments *args)
		{
			args->flags |= CREATE_NEW_CONSOLE;
			args->startupInfo->dwFlags &= ~STARTF_USESTDHANDLES;
			args->startupInfo->dwFlags |= STARTF_USEFILLATTRIBUTE;
			args->startupInfo->dwFillAttribute = FOREGROUND_GREEN | FOREGROUND_INTENSITY;
		});

		QString program = "start";
		myProcess->start("cmd", QStringList() << "/k" << "ping" << "www.baidu.com");

	});

}
