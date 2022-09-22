#include "VThread.h"
#include <QObject>
#include <QThread>
#include <QTime>
#include <QTimer>
#include <QPointer>
#include <QDebug>
#include "XThread.h"


VThread::VThread(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    m_pXThread = new XThread();
    m_pXThread->start();
    QObject obj;
    QPointer<QObject> wp(&obj);
    connect(m_pXThread, &XThread::finished, this, [=]() {
        //避免使用混用内置指针与智能指针
        std::shared_ptr<XThread> autoPtr = std::shared_ptr<XThread>(m_pXThread);
        //std::thread t([=]() {
        //    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        //    delete m_pXThread;
        //});
        //t.detach();
        if (wp.isNull())
        {
            qInfo() << wp.isNull();
        }
    }, Qt::ConnectionType(Qt::QueuedConnection | Qt::UniqueConnection));


}

void VThread::timerEvent(QTimerEvent *event)
{
    delete m_pXThread;
}
