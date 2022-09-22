#include "XThread.h"
#include <QDebug>

XThread::XThread(QObject *parent /*= Q_NULLPTR*/) :QThread(parent)
{
    static int count = 0;
    ++count;
    qInfo() << count;
    qInfo() << "XThread";
}

XThread::~XThread()
{
    isRunning();
    qInfo() << "~XThread";
}

void XThread::run()
{
    sleep(6);
}
