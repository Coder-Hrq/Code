#include "WebSocketClient.h"
#include "stdafx.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WebSocketClient w;
    w.show();
    return a.exec();
}
