#include "Gif.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Gif w;
    w.show();
    return a.exec();
}
