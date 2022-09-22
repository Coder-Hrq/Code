#include "VItem.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    VItem w;
    w.show();
    return a.exec();
}
