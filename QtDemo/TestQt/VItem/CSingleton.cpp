#include "CSingleton.h"
#include <QMutexLocker>

CSingleton *CSingleton::m_pThis = nullptr;
QMutex     *CSingleton::m_mutex = new QMutex();
static std::unique_ptr<CSingleton> m_sharedPtr;

CSingleton::CSingleton()
{
    m_sharedPtr = std::unique_ptr<CSingleton>(this);
    qInfo() << "CSingleton::CSingleton()";
}

CSingleton * CSingleton::GetInstance()
{
    if (nullptr == m_pThis)
    {
        QMutexLocker locker(m_mutex);
        if (nullptr == m_pThis)
        {
            m_pThis = new CSingleton;
        }
    }
    return m_pThis;
}
