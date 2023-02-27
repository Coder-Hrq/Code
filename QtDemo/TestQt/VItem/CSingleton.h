#pragma once
#include <QDebug>
#include <memory>
#include <mutex>

#define CSINGLETION_DECLARED(SingletonClass) \
public:\
    ~SingletonClass() {\
        qInfo() << #SingletonClass"::~"#SingletonClass"()";\
    }\
\
private:\
    SingletonClass();\
    SingletonClass(const SingletonClass &copy) = delete;\
    SingletonClass & operator=(const SingletonClass &copy) = delete;\
\
public:\
    static SingletonClass * GetInstance();\
\
private:\
    static SingletonClass *m_pThis;

#define CSINGLETION_DEFFINED(SingletonClass) \
SingletonClass *SingletonClass::m_pThis = nullptr;\
\
static std::unique_ptr<SingletonClass> m_sharedPtr;\
\
SingletonClass::SingletonClass()\
{\
    m_sharedPtr = std::unique_ptr<SingletonClass>(this);\
    qInfo() << #SingletonClass"::"#SingletonClass"()";\
}\
\
SingletonClass * SingletonClass::GetInstance()\
{\
    if (nullptr == m_pThis)\
    {\
        static std::mutex mutex;\
        std::lock_guard<std::mutex> locker(mutex);\
        if (nullptr == m_pThis)\
        {\
            m_pThis = new SingletonClass;\
        }\
    }\
    return m_pThis;\
}\

//class CSingleton
//{
//public:
//    ~CSingleton() {
//        qInfo() << "CSingleton::~CSingleton()";
//    }
//
//private:
//    CSingleton();
//    CSingleton(const CSingleton &copy) = delete;
//    CSingleton & operator=(const CSingleton &copy) = delete;
//
//public:
//    static CSingleton * GetInstance();
//
//private:
//    static CSingleton *m_pThis;
//};

