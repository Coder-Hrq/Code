#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_WidgetItems.h"

class WidgetItems : public QMainWindow
{
    Q_OBJECT

public:
    WidgetItems(QWidget *parent = Q_NULLPTR);

private:
    QString getSystemStr();
    quint64 getDiskFreeSpace(const QString &driver);
    bool saveFile(const QString &fileName, qint64 size);

private:
    Ui::WidgetItemsClass ui;
};
