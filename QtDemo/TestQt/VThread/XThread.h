#pragma once
#include <qthread.h>
class XThread :
    public QThread
{
    Q_OBJECT
public:
    XThread(QObject *parent = Q_NULLPTR);
    ~XThread();
protected:
    virtual void run();
};

