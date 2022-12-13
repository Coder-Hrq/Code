#include "mainwindow.h"

VTRTCVideoFrameCallback::VTRTCVideoFrameCallback(QObject *parent)
    : QObject(parent)
{
    m_nama = new Nama();
    m_nama->InitNama();
}

VTRTCVideoFrameCallback::~VTRTCVideoFrameCallback()
{
}



int VTRTCVideoFrameCallback::onProcessVideoFrame(TRTCVideoFrame* srcFrame, TRTCVideoFrame* dstFrame)
{
    //memcpy(dstFrame->data, srcFrame->data, srcFrame->length);
    cv::Mat mat = cv::Mat(srcFrame->height * 3 / 2, srcFrame->width, CV_8UC1);
    memcpy(mat.data, srcFrame->data, srcFrame->length);
    cv::cvtColor(mat, mat, cv::COLOR_YUV2BGRA_IYUV);
    cv::flip(mat, mat, 1);
    m_nama->getPresentFrame(mat.clone());
    m_nama->RenderDefNama();
    memcpy(dstFrame->data, m_nama->m_frame.data, srcFrame->length);
    return 0;
}

bool VTRTCVideoFrameCallback::addBundles(const QStringList &bundleNames)
{
    //3秒内不进行添加，缓存起来，一起添加
    if (nullptr != m_nama)
    {
        if (m_bFirst)
        {
            m_bFirst = false;
            m_lastQDateTime = QDateTime::currentDateTime();
            m_nama->addBundles(bundleNames);
        }
        else
        {
            m_cacheList += bundleNames;
            QPointer<QObject> obj(this);
            m_msecs = m_lastQDateTime.msecsTo(QDateTime::currentDateTime());
            if (m_msecs > 3000)
            {
                m_nama->addBundles(m_cacheList);
                m_cacheList.clear();
                m_lastQDateTime == QDateTime::currentDateTime();
            }
            else
            {
                QTimer::singleShot(3000, [=]() {
                    if (obj.isNull()) return;

                    if (m_cacheList.isEmpty()) return;

                    m_nama->addBundles(m_cacheList);
                    m_cacheList.clear();
                    m_lastQDateTime == QDateTime::currentDateTime();
                });
            }
        }

    }
    return true;
}

void VTRTCVideoFrameCallback::clearBundle()
{
    if (nullptr != m_nama)
    {
        m_cacheList.clear();
        m_bFirst = true;
        return m_nama->clearBundle();
    }
}