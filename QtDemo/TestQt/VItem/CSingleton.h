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
    static std::unique_ptr<SingletonClass> m_uniquePtr;

#define CSINGLETION_DEFFINED(SingletonClass) \
std::unique_ptr<SingletonClass> SingletonClass::m_uniquePtr;\
\
\
SingletonClass::SingletonClass()\
{\
    qInfo() << #SingletonClass"::"#SingletonClass"()";\
}\
\
SingletonClass * SingletonClass::GetInstance()\
{\
    if (!m_uniquePtr)\
    {\
        static std::mutex mutex;\
        std::lock_guard<std::mutex> locker(mutex);\
        if (!m_uniquePtr)\
        {\
            m_uniquePtr = std::unique_ptr<SingletonClass>(new SingletonClass);\
        }\
    }\
    return m_uniquePtr.get();\
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

