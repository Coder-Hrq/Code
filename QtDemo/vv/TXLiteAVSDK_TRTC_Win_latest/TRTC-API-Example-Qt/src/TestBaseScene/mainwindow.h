#ifndef MAINWINDOWGL_H
#define MAINWINDOWGL_H

#include <QDateTime>
#include <QPointer>
#include <QTimer>
#include <Nama.h>
#include "TRTCCloudCallback.h"

class VTRTCVideoFrameCallback : public QObject, public ITRTCVideoFrameCallback
{
    Q_OBJECT
public:
    VTRTCVideoFrameCallback(QObject *parent = nullptr);
    ~VTRTCVideoFrameCallback();

public:
    int onProcessVideoFrame(TRTCVideoFrame* srcFrame, TRTCVideoFrame* dstFrame);

public:
    bool addBundles(const QStringList &bundleNames);
    void clearBundle();

private:
    Nama *m_nama;
    QStringList m_cacheList;
    QDateTime   m_lastQDateTime;
    bool        m_bFirst = true;
    qint64      m_msecs;
};
#endif // MAINWINDOW_H
