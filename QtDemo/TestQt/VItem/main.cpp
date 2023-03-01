#include "VItem.h"
#include <QtWidgets/QApplication>
#include "TestSingleton.h"
#include "VSingleton.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    VItem w;
    w.show();
    TestSingleton::GetInstance();
    //VSingleton::GetInstance();
    return a.exec();
}
