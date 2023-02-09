#include "VThread.h"
#include <QtWidgets/QApplication>
#include <atomic>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    VThread w;
    w.show();
    std::atomic<QString>            m_strCaptrue;
    return a.exec();
}
