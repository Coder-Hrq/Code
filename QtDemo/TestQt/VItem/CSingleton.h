#pragma once
#include <QMutex>
#include <memory>
#include <QDebug>

class CSingleton
{
public:
    ~CSingleton() {
        qInfo() << "CSingleton::~CSingleton()";
        if (m_mutex != nullptr)
        {
            delete m_mutex;
        }
    }

private:
    CSingleton();
    CSingleton(const CSingleton &copy) = delete;
    CSingleton & operator=(const CSingleton &copy) = delete;

public:
    static CSingleton * GetInstance();

private:
    static CSingleton *m_pThis;
    static QMutex     *m_mutex;
};

