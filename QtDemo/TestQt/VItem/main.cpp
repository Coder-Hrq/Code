#include "VItem.h"
#include <QtWidgets/QApplication>
#include "CSingleton.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    VItem w;
    w.show();
    CSingleton::GetInstance();
    return a.exec();
}
