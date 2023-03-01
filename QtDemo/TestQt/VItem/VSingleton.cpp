#include "VSingleton.h"
#include <mutex>

std::unique_ptr<VSingleton> VSingleton::m_uniquePtr;

VSingleton::VSingleton()
{
    qInfo() << "VSingleton::VSingleton()";
}

VSingleton * VSingleton::GetInstance()
{
    if (!m_uniquePtr)
    {
        static std::mutex mutex;
        std::lock_guard<std::mutex> locker(mutex);
        if (!m_uniquePtr)
        {
            m_uniquePtr = std::unique_ptr<VSingleton>(new VSingleton);
        }
    }
    return m_uniquePtr.get();
}
