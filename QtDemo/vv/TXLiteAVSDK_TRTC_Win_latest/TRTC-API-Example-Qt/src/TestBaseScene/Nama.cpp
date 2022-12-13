#include <io.h>
#include "Nama.h"
#include <CNamaSDK.h>			//nama SDK
#include <authpack.h>			//nama SDK
#include "iostream"
#include <Windows.h>
#include <gl\GL.h>
#include <QStringList>
#include <QDebug>

#define FACE_UTILITY_LOG (qInfo().noquote() << "[face_utility]")

PIXELFORMATDESCRIPTOR pfd = {
    sizeof(PIXELFORMATDESCRIPTOR),
    1u,
    PFD_SUPPORT_OPENGL | PFD_DOUBLEBUFFER | PFD_DRAW_TO_WINDOW,
    PFD_TYPE_RGBA,
    32u,
    0u, 0u, 0u, 0u, 0u, 0u,
    8u,
    0u,
    0u,
    0u, 0u, 0u, 0u,
    24u,
    8u,
    0u,
    PFD_MAIN_PLANE,
    0u,
    0u, 0u };

void Nama::InitOpenGL()
{
    if (!CheckGLContext())
    {
        HWND hw = CreateWindowExA(
            0, "EDIT", "", ES_READONLY,
            0, 0, 1, 1,
            NULL, NULL,
            GetModuleHandleA(NULL), NULL);
        HDC hgldc = GetDC(hw);
        int spf = ChoosePixelFormat(hgldc, &pfd);
        int ret = SetPixelFormat(hgldc, spf, &pfd);
        HGLRC hglrc = wglCreateContext(hgldc);
        wglMakeCurrent(hgldc, hglrc);
        FACE_UTILITY_LOG << QString("hw=%1 hgldc=%2 spf=%3 ret=%4 hglrc=%5").arg((int)hw).arg((int)hgldc).arg(spf).arg(ret).arg((int)hglrc);
    }

}

bool Nama::CheckGLContext()
{
    int add0, add1, add2, add3;
    add0 = (int)wglGetProcAddress("glGenFramebuffersARB");
    add1 = (int)wglGetProcAddress("glGenFramebuffersOES");
    add2 = (int)wglGetProcAddress("glGenFramebuffersEXT");
    add3 = (int)wglGetProcAddress("glGenFramebuffers");
    const GLubyte* OpenGLVersion = glGetString(GL_VERSION);
    static bool bFirst = true;
    if (bFirst)
    {
        FACE_UTILITY_LOG << QString("gl ver :version:%1  %2 %3 %4 %5").arg(QString::fromLatin1((char*)OpenGLVersion)).arg(add0).arg(add1).arg(add2).arg(add3);
        bFirst = false;
    }
    return add0 | add1 | add2 | add3;
}

Nama::Nama()
{
}

Nama::~Nama()
{
    fuDestroyAllItems();
    fuOnDeviceLost();
    fuDestroyLibData();
    m_mapBunbleData.clear();
}

bool Nama::LoadBundle(const string &filepath, vector<char> &data)
{
    ifstream fin(filepath, ios::binary);
    if (false == fin.good())
    {
        fin.close();
        return false;
    }
    streampos oldPos = fin.tellg();
    fin.seekg(0, ios::beg);
    streampos beg = fin.tellg();
    fin.seekg(0, ios::end);
    streampos end = fin.tellg();
    fin.seekg(oldPos, ios::beg);
    size_t size = static_cast<size_t>(end - beg);
    if (0 == size)
    {
        fin.close();
        return false;
    }
    data.resize(size);
    fin.read(reinterpret_cast<char*>(&data[0]), size);

    fin.close();
    return true;
}


void Nama::InitNama()
{
    fuSetLogLevel(FU_LOG_LEVEL_ERROR);
    //初始化系统环境，加载系统数据，并进行网络鉴权。必须在调用SDK其他接口前执行，否则会引发崩溃。
    //*authdata [in]*： 内存指针，指向鉴权数据的内容。如果是用包含 authpack.h 的方法在编译时提供鉴权数据，则这里可以写为 ```g_auth_package``` 。
    //*sz_authdata [in]*：鉴权数据的长度，以字节为单位。如果鉴权数据提供的是 authpack.h 中的 ```g_auth_package```，这里可写作 ```sizeof(g_auth_package)```
    //返回非0值代表成功，返回0代表失败。如初始化失败，可以通过 ```fuGetSystemError``` 获取错误代码。
    fuSetup(nullptr, 0, nullptr, g_auth_package, sizeof(g_auth_package));
    //setup without license, only render 1000 frames.
    //fuSetup(nullptr, 0, nullptr, nullptr, 0);

    FACE_UTILITY_LOG << "Nama version:" << fuGetVersion();

    //加载AI能力
    vector<char> ai_model_data;
    if (false == LoadBundle("./model/ai_face_processor_pc.bundle", ai_model_data))
    {
        FACE_UTILITY_LOG << "Error:fail load faceprocessor model";
    }
    fuLoadAIModelFromPackage(reinterpret_cast<float*>(&ai_model_data[0]), ai_model_data.size(), FUAITYPE::FUAITYPE_FACEPROCESSOR);


    m_ModuleCode = fuGetModuleCode(0);
    m_ModuleCode1 = fuGetModuleCode(1);
    float fValue = 0.5f;
    fuSetFaceTrackParam((void*)"mouth_expression_more_flexible", &fValue);

    fuSetMaxFaces(4);
    //设置输入相机矩阵
    fuSetInputCameraBufferMatrix(TRANSFORM_MATRIX::CCROT0_FLIPHORIZONTAL);
}


void Nama::RenderDefNama()
{
    InitOpenGL();
    std::unique_lock<std::mutex> lock(m_frameMutex);
#ifdef SynchronizingCamera
    if(m_getNewFrame){
#endif
        //当前fuRender图像长与前一个不相同时调用fuHumanProcessorReset重置人体算法模块,解决分辨率切换崩溃
        if(m_FrameWidth != m_frame.cols){
            m_FrameWidth = m_frame.cols;
            fuHumanProcessorReset();
        }
        //这里直接处理成纹理,opengl直接调用m_texID纹理id绘制,更快
        //֧FU_FORMAT_BGRA_BUFFER  FU_FORMAT_NV21_BUFFER FU_FORMAT_I420_BUFFER FU_FORMAT_RGBA_BUFFER
        int face = fuIsTracking();
        if (m_frame.cols != 0)
        {
            for (auto it = m_renderList.begin(); it != m_renderList.end(); ++it)
            {
                auto result = fuItemGetParamd(*it, "hasFinish");
                if (result > 0.001)
                {
                    m_renderList.erase(it);
                    fuDestroyItem(*it);
                    break;
                }
            }
            if (m_renderList.size() == 0 && m_cacheList.size() > 0)
            {
                m_renderList.push_back(m_cacheList.back());
                m_cacheList.pop_back();
            }

            fuRender(FU_FORMAT_BGRA_BUFFER, reinterpret_cast<int*>(m_frame.data), FU_FORMAT_BGRA_BUFFER, reinterpret_cast<int*>(m_frame.data),
                m_frame.cols, m_frame.rows, m_FrameID++, m_renderList.data(),
                m_renderList.size(), NAMA_RENDER_FEATURE_FULL, NULL);

            cv::cvtColor(m_frame, m_frame, cv::COLOR_BGRA2YUV_I420);
        }

#ifdef SynchronizingCamera
    }
    if(m_renderType != RENDER_GREEN){
        m_getNewFrame = false;
    }
#endif
    if (fuGetSystemError())
    {
        FACE_UTILITY_LOG << "error" <<fuGetSystemErrorString(fuGetSystemError());
    }
}

bool Nama::itemSetParamd(int handles, string name, double value)
{
    if(handles == 0) return false;
    int res = fuItemSetParamd(handles, name.data(), value);
    return (res != 0);
}

bool Nama::itemSetParams(int handles, string name, string value)
{
    if(handles == 0) return false;
    int res = fuItemSetParams(handles, name.data(), value.data());
    return (res != 0);
}

void Nama::getPresentFrame(const cv::Mat &frame)
{
    std::unique_lock<std::mutex> lock(m_frameMutex);
    m_frame = frame;
    m_getNewFrame = true;
}

void Nama::SetBeautyParam()
{
    //"磨皮", "美白", "红润", "锐化", "亮眼", "美牙", "去黑眼圈", "去法令纹"
    QStringList beautySkin = QStringList{"blur_level", "color_level", "red_level","sharpen", "eye_bright", "tooth_whiten",
                                     "remove_pouch_strength", "remove_nasolabial_folds_strength"};
    QStringList beautySkinParam = QStringList{ "70", "30", "30", "20", "0", "0", "0", "0"};
    for(int i = 0; i < beautySkin.size(); i++){
        itemSetParamd(m_BeautyHandles, beautySkin.at(i).toStdString(), beautySkinParam.at(i).toDouble()/100);
    }
}

bool Nama::addBundles(const QStringList &bundleNames)
{
    for (auto bundleName : bundleNames)
    {
        auto filepath = bundleName.toStdString();
        vector<char> propData;

        if (false == LoadBundle(filepath, propData))
        {
            FACE_UTILITY_LOG << "LoadBundle failed:" << QString::fromStdString(filepath);
            break;
        }
        FACE_UTILITY_LOG << "LoadBundle:" << QString::fromStdString(filepath);
        //加载道具包，使其可以在主运行接口中被执行。一个道具包可能是一个功能模块或者多个功能模块的集合，加载道具包可以在流水线中激活对应的功能模块，在同一套SDK调用逻辑中实现即插即用。
        auto itemId = fuCreateItemFromPackage(&propData[0], propData.size());
        std::unique_lock<std::mutex> lock(m_frameMutex);
        m_cacheList.push_front(itemId);
    }
    return true;
}

void Nama::clearBundle()
{
    std::unique_lock<std::mutex> lock(m_frameMutex);
    m_cacheList.clear();
    m_renderList.clear();
}

