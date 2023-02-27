//#include "CSingleton.h"
//#include <mutex>
//
//CSingleton *CSingleton::m_pThis = nullptr;
//
//static std::unique_ptr<CSingleton> m_sharedPtr;
//
//CSingleton::CSingleton()
//{
//    m_sharedPtr = std::unique_ptr<CSingleton>(this);
//    qInfo() << "CSingleton::CSingleton()";
//}
//
//CSingleton * CSingleton::GetInstance()
//{
//    if (nullptr == m_pThis)
//    {
//        static std::mutex mutex;
//        std::lock_guard<std::mutex> locker(mutex);
//        if (nullptr == m_pThis)
//        {
//            m_pThis = new CSingleton;
//        }
//    }
//    return m_pThis;
//}
