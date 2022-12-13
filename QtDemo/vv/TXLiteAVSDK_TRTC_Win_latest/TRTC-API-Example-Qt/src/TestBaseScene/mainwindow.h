#ifndef MAINWINDOWGL_H
#define MAINWINDOWGL_H

#include <QOpenGLWidget>
#include <QOpenGLFunctions>
#include <Nama.h>
#include "TRTCCloudCallback.h"

class MainWindowGl : public QOpenGLWidget, protected QOpenGLFunctions  , public ITRTCVideoFrameCallback
{
    Q_OBJECT

public:
    MainWindowGl(QWidget *parent = nullptr);
    ~MainWindowGl();
    static MainWindowGl* getInstance();
    Nama *m_nama;

public:
    int onProcessVideoFrame(TRTCVideoFrame* srcFrame, TRTCVideoFrame* dstFrame);

protected:
      void initializeGL();
      void resizeGL(int w, int h);
      void paintGL();
private:
    //单例模式
    static MainWindowGl *instance_;
};
#endif // MAINWINDOW_H
