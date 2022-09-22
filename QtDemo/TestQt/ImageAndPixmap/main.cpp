#include "ImageAndPixmap.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ImageAndPixmap w;
    w.show();
    return a.exec();
}
