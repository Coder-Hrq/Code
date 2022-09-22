#pragma once
#include <QtWidgets>
#include <QtWidgets/QMainWindow>
#include <QSystemTrayIcon>
#include "ui_QtWidgetsItem.h"

class QtWidgetsItem : public QMainWindow
{
    Q_OBJECT

public:
    QtWidgetsItem(QWidget *parent = Q_NULLPTR);

public:
	void init();
	//œµÕ≥Õ–≈Ã
	void initTray(const QString& icon = "../../qrc/images/WSLogo.ico");
	//Õº∆¨∆¥Ω”
	void jointImages();
private:
    Ui::QtWidgetsItemClass ui;
	bool m_bTray = false;
	QSystemTrayIcon m_tray;
};
