#include "WebEngine.h"
#include "stdafx.h"
#include <QWebEngineSettings>

WebEngine::WebEngine(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    connect(ui.pushButton_enter, &QPushButton::clicked, [=]() {
        ui.webEngineView->load(QUrl(ui.comboBox_url->currentText()));
    });

	connect(ui.pushButton_debug, &QPushButton::clicked, [=]() {
		//ui.webEngineView->page()->setDevToolsPage(ui.webEngineView->page());
		ui.webEngineView->page()->setDevToolsPage(ui.webEngineView_debug->page());
		ui.webEngineView->page()->triggerAction(QWebEnginePage::InspectElement);
	});

    connect(ui.pushButton_sendJs, &QPushButton::clicked, [=]() {
        ui.webEngineView->sendToJs("test QT send js msg");
    });
}
