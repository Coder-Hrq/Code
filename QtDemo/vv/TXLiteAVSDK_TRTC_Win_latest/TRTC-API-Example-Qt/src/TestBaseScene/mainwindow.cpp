#include "mainwindow.h"

MainWindowGl* MainWindowGl::instance_ = nullptr;

MainWindowGl* MainWindowGl::getInstance()
{
    if (instance_ == nullptr)
    {
        instance_ = new MainWindowGl();
    }
    return instance_;
}


int MainWindowGl::onProcessVideoFrame(TRTCVideoFrame* srcFrame, TRTCVideoFrame* dstFrame)
{
    memcpy(dstFrame->data, srcFrame->data, srcFrame->length);
    cv::Mat mat = cv::Mat(srcFrame->height * 3 / 2, srcFrame->width, CV_8UC1);
    memcpy(mat.data, srcFrame->data, srcFrame->length);
    cv::cvtColor(mat, mat, cv::COLOR_YUV2BGRA_IYUV);
    m_nama->getPresentFrame(mat);
    return 0;
}

MainWindowGl::MainWindowGl(QWidget *parent)
    : QOpenGLWidget(parent)
{
    m_nama = new Nama();
}

MainWindowGl::~MainWindowGl()
{
}

void MainWindowGl::initializeGL()
{
    initializeOpenGLFunctions();
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    m_nama->InitNama();
    m_nama->SetBeautyParam();
}

void MainWindowGl::resizeGL(int w, int h)
{

}

void MainWindowGl::paintGL()
{
    //glClear(GL_COLOR_BUFFER_BIT);
    //std::unique_lock<std::mutex> lock(m_nama->m_frameMutex);
    //QOpenGLFunctions glFuncs(QOpenGLContext::currentContext());
    //glFuncs.glUseProgram(0);
    ////这里长宽864/486对应qml中CameraDisplay的长宽
    //int width = m_camera->m_FrameWidth;
    //int height = m_camera->m_FrameHeight;
    //glViewport(0, 0, width, height);
    //glMatrixMode(GL_PROJECTION);//指定矩阵为投影矩阵
    //glLoadIdentity();           //重置为单位矩阵
    //glOrtho(0, width, 0, height, 0, 1000);//设置剪裁区域
    //glMatrixMode(GL_MODELVIEW);
    //glLoadIdentity();
    //glDisable(GL_DEPTH_TEST);
    m_nama->RenderDefNama();
    //glClearColor(1.0, 1.0, 1.0, 1.0);
    //glClear(GL_COLOR_BUFFER_BIT);
    //glEnable(GL_TEXTURE_2D);
    //glBindTexture(GL_TEXTURE_2D, m_nama->m_texID);
    //glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    //glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    //glPushMatrix();
    //glBegin(GL_QUADS);
    //glColor4f(1.f, 1.f, 1.f, 1.f);
    ////输出图纹理像需要垂直翻转
    //glTexCoord2f(0.f, 0.f);
    //glVertex3f(0.f, 0.f, 0.f);//左上角
    //glTexCoord2f(1.f, 0.f);
    //glVertex3f(width, 0.f, 0.f);//右上角
    //glTexCoord2f(1.f, 1.f);
    //glVertex3f(width, height, 0.f);//右下角
    //glTexCoord2f(0.f, 1.f);
    //glVertex3f(0.f, height, 0.f);//左下角
    //glEnd();
    //glPopMatrix();
    //update();
}


