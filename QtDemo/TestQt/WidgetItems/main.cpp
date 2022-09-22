#include "WidgetItems.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WidgetItems w;
    w.show();
    return a.exec();
}
