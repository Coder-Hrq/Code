#pragma once
#include <QDebug>
#include <memory>
#include <QSharedPointer>

class VSingleton
{
public:
    ~VSingleton() {
        qInfo() << "VSingleton::~VSingleton()";
    }

private:
    VSingleton();
    VSingleton(const VSingleton &copy) = delete;
    VSingleton & operator=(const VSingleton &copy) = delete;

public:
    static VSingleton * GetInstance();

private:
    static std::unique_ptr<VSingleton> m_uniquePtr;
};



