#include "VThread.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    VThread w;
    w.show();
    return a.exec();
}
