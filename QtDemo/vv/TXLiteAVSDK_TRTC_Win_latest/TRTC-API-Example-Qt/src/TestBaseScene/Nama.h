#ifndef NAMA_H
#define NAMA_H

#include <map>
#include <opencv2/opencv.hpp>

using namespace std;

class Nama{
public:
    Nama();
    ~Nama();
public:
    //视频帧Id
    int m_FrameID = 0;
    //纹理Id
    unsigned int m_texID = 0;
    //实时图像帧
    cv::Mat m_frame;
    //图像帧更新锁
    std::mutex m_frameMutex;
    //记录图像长,长度变化需要调用函数
    int m_FrameWidth = 0;
    //是否获取到新的帧,同步摄像头帧率,为提高帧率,如果摄像头输入图像没更新,仍用前一个texture
    bool m_getNewFrame = true;
    //证书权限码
    int m_ModuleCode, m_ModuleCode1;
    //nama是否注册成功
    bool m_EnableNama = false;
    //记录handle id
    int m_BeautyHandles, m_MakeUpHandle, m_BodyShapeHandle = 0, m_GSHandle = 0, m_FxaaHandles = 0,m_aitype = 0;
    //最多识别人脸数
    int m_maxFace = 1;
    //当前调用道具bundle
    int m_bundleCurrent = 0;
    vector<int> m_renderList;
public:
    void InitOpenGL();
    bool CheckGLContext();
    // 加载bundle
    // @param filepath 相对路径 ,macosx 上为相对于 Resource.bundle 文件
    // @param data 加载成功后返回的数据
    static bool LoadBundle(const string& filepath, vector<char>& data);
    //初始化nama,需要和fuRender处理图像在同一个线程
    void InitNama();
    //调用nama处理图像
    void RenderDefNama();
    //调用nama设置string道具
    bool itemSetParamd(int handles, string name, double value);
    //调用nama设置double道具
    bool itemSetParams(int handles, string name, string value);
    //从摄像头读取到一帧,保存一个实时frame
    void getPresentFrame(const cv::Mat &frame);
    //设置美颜参数
    void SetBeautyParam();
};

#endif // NAMA_H
