#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_VThread.h"
#include "XThread.h"

class VThread : public QMainWindow
{
    Q_OBJECT

public:
    VThread(QWidget *parent = Q_NULLPTR);

    void timerEvent(QTimerEvent *event);

private:
    Ui::VThreadClass ui;
    XThread *m_pXThread = nullptr;

};
