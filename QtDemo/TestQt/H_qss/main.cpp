#include "H_qss.h"
#include "stdafx.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    H_qss w;
    w.show();
    return a.exec();
}
