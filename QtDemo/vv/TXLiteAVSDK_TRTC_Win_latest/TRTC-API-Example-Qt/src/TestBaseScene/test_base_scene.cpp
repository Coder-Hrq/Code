#include "test_base_scene.h"

#include <QMessageBox>
#include <QObject>
#include <QDebug>
#include <sstream>

#include "defs.h"
#include "GenerateTestUserSig.h"

#include "room_info_holder.h"

#include <CNamaSDK.h>				//nama SDK 的头文件
#include <authpack.h>				//nama SDK 的key文件
#include "fu_tool.h"
#include "Config.h"
#include "Nama.h"

#include <vector>
#include <iostream>
using namespace std;


#include <QOpenGLWidget>
#include <QOpenGLFunctions>
#include "mainwindow.h"

//class VTRTCVideoFrameCallback : public ITRTCVideoFrameCallback, public QOpenGLWidget, protected QOpenGLFunctions
//{
//public:
//    VTRTCVideoFrameCallback();
//public:
//    int onProcessVideoFrame(TRTCVideoFrame* srcFrame, TRTCVideoFrame* dstFrame);
//
//protected:
//    void initializeGL();
//    void resizeGL(int w, int h);
//    void paintGL();
//
//private:
//    vector<char> m_propData;
//    int             m_bundleID = -1;
//    Nama            *m_nama = nullptr;
//    TRTCVideoFrame  *m_frame = nullptr;
//};
//
//VTRTCVideoFrameCallback::VTRTCVideoFrameCallback()
//{
//    m_nama = new Nama();
//    m_nama->InitNama();
//
//    //初始SDK
//    int ret = fuSetup(nullptr, 0, nullptr, g_auth_package, sizeof(g_auth_package));
//    qInfo() << "初始化相芯SDK<fuSetup>:" << (ret != 0 ? "true" : "false");
//
//    //加载AI能力
//    vector<char> ai_model_data;
//    if (false == FuTool::LoadBundle(g_ai_faceprocessor, ai_model_data))
//    {
//        cout << "Error:fail load faceprocessor model" << g_ai_faceprocessor << endl;
//        return;
//    }
//    fuLoadAIModelFromPackage(reinterpret_cast<float*>(&ai_model_data[0]), ai_model_data.size(), FUAITYPE::FUAITYPE_FACEPROCESSOR);
//
//    //加载bundle
//    string bundleName = "items/ARMask/xiongmao.bundle";
//    if (true == FuTool::LoadBundle(bundleName, m_propData))
//    {
//        int bundleID = fuCreateItemFromPackage(&m_propData[0], m_propData.size());
//        cout << bundleID << endl;
//    }
//}
//
//int VTRTCVideoFrameCallback::onProcessVideoFrame(TRTCVideoFrame* srcFrame, TRTCVideoFrame* dstFrame)
//{
//    memcpy(dstFrame->data, srcFrame->data, srcFrame->length);
//    m_frame = dstFrame;
//    if (m_nama->m_frame.rows == 0)
//    {
//        m_nama->m_frame = cv::Mat(m_frame->width, m_frame->height, CV_8UC4);
//    }
//    m_nama->m_frame.data = (uchar*)m_frame->data;
//    static int mFrameID = 0;
//    vector<int> renderList;
//    renderList.push_back(m_bundleID);
//
//
//    cv::Mat mat = cv::Mat(dstFrame->height * 3 / 2, dstFrame->width, CV_8UC1, (void*)dstFrame->data, dstFrame->length);
//    cv::cvtColor(mat, mat, cv::COLOR_YUV2BGRA_IYUV);
//
//
//    //auto ret = fuRender(FU_FORMAT_I420_BUFFER,
//    //        dstFrame->data,
//    //        FU_FORMAT_I420_BUFFER,
//    //        srcFrame->data,
//    //        srcFrame->width,
//    //        srcFrame->height,
//    //        renderList.data(),
//    //        renderList.size(),
//    //        NAMA_RENDER_FEATURE_FULL, NULL);
//
//    return 0;
//}
//
//
//void VTRTCVideoFrameCallback::initializeGL()
//{
//    initializeOpenGLFunctions();
//    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
//    m_nama->InitNama();
//}
//
//void VTRTCVideoFrameCallback::resizeGL(int w, int h)
//{
//
//}
//
//void VTRTCVideoFrameCallback::paintGL()
//{
//    glClear(GL_COLOR_BUFFER_BIT);
//    std::unique_lock<std::mutex> lock(m_nama->m_frameMutex);
//    QOpenGLFunctions glFuncs(QOpenGLContext::currentContext());
//    glFuncs.glUseProgram(0);
//    //这里长宽864/486对应qml中CameraDisplay的长宽
//    int width;
//    if (m_frame != nullptr)
//    {
//        width = m_frame->width;
//    }
//    int height;
//    if (m_frame != nullptr)
//    {
//        width = m_frame->width;
//        height = m_frame->height;
//    }
//    glViewport(0, 0, width, height);
//    glMatrixMode(GL_PROJECTION);//指定矩阵为投影矩阵
//    glLoadIdentity();           //重置为单位矩阵
//    glOrtho(0, width, 0, height, 0, 1000);//设置剪裁区域
//    glMatrixMode(GL_MODELVIEW);
//    glLoadIdentity();
//    glDisable(GL_DEPTH_TEST);
//    m_nama->RenderDefNama();
//    glClearColor(1.0, 1.0, 1.0, 1.0);
//    glClear(GL_COLOR_BUFFER_BIT);
//    glEnable(GL_TEXTURE_2D);
//    glBindTexture(GL_TEXTURE_2D, m_nama->m_texID);
//    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
//    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//    glPushMatrix();
//    glBegin(GL_QUADS);
//    glColor4f(1.f, 1.f, 1.f, 1.f);
//    //输出图纹理像需要垂直翻转
//    glTexCoord2f(0.f, 0.f);
//    glVertex3f(0.f, 0.f, 0.f);//左上角
//    glTexCoord2f(1.f, 0.f);
//    glVertex3f(width, 0.f, 0.f);//右上角
//    glTexCoord2f(1.f, 1.f);
//    glVertex3f(width, height, 0.f);//右下角
//    glTexCoord2f(0.f, 1.f);
//    glVertex3f(0.f, height, 0.f);//左下角
//    glEnd();
//    glPopMatrix();
//    update();
//}

TestBaseScene::TestBaseScene(std::shared_ptr<TestUserVideoGroup> testUserVideoGroup)
    : test_user_video_group_(testUserVideoGroup){
    getTRTCShareInstance()->addCallback(this);
    VTRTCVideoFrameCallback *vTRTCVideoFrameCallback = new VTRTCVideoFrameCallback();
    //设置第三方美颜的视频数据回调
    int ret = getTRTCShareInstance()->setLocalVideoProcessCallback(TRTCVideoPixelFormat_I420, TRTCVideoBufferType_Buffer, vTRTCVideoFrameCallback);
    qDebug() << ret;
    QStringList bundles;
    bundles << "./items/ARMask/xiongmao.bundle";
    vTRTCVideoFrameCallback->addBundles(bundles);
}

TestBaseScene::~TestBaseScene() {
    getTRTCShareInstance()->removeCallback(this);
}

void TestBaseScene::enterRoom(uint32_t roomId, std::string userId, liteav::TRTCAppScene appScene, liteav::TRTCRoleType roleType) {

    room_id_ = roomId;
    user_id_ = userId;
    app_scene_ = appScene;
    role_type_ = roleType;

    // Stream ID for CDN live streaming, which is optional and cannot be longer than 64 bytes. 
    // To avoid application conflicts, we recommend that you set it to "sdkappid_roomid_userid_main".
    std::ostringstream streamid_os;
    streamid_os << SDKAppID << "_" << room_id_ << "_" << user_id_ << "_" << "main";
    stream_id_ = streamid_os.str();

    liteav::TRTCParams params;
    params.sdkAppId = SDKAppID;
    params.userId = user_id_.c_str();
    /** @note: 请不要将如下代码发布到您的线上正式版本的 App 中，原因如下：
     * 本文件中的代码虽然能够正确计算出 UserSig，但仅适合快速调通 SDK 的基本功能，不适合线上产品，
     * 这是因为客户端代码中的 SECRETKEY 很容易被反编译逆向破解，尤其是 Web 端的代码被破解的难度几乎为零。
     * 一旦您的密钥泄露，攻击者就可以计算出正确的 UserSig 来盗用您的腾讯云流量。
     * 正确的做法是将 UserSig 的计算代码和加密密钥放在您的业务服务器上，然后由 App 按需向您的服务器获取实时算出的 UserSig。
     * 由于破解服务器的成本要高于破解客户端 App，所以服务器计算的方案能够更好地保护您的加密密钥。
     * 文档：https://cloud.tencent.com/document/product/647/17275#Server
     */

    /** @note:  Do not use the code below in your commercial application. This is because:
     * The code may be able to calculate UserSig correctly, but it is only for quick testing of the SDK’s basic features, not for commercial applications.
     * SECRETKEY in client code can be easily decompiled and reversed, especially on web.
     * Once your key is disclosed, attackers will be able to steal your Tencent Cloud traffic.
     * The correct method is to deploy the UserSig calculation code and encryption key on your project server so that your application can request from your server a UserSig that is calculated whenever one is needed.
     * Given that it is more difficult to hack a server than a client application, server-end calculation can better protect your key.
     * Documentation:  https://intl.cloud.tencent.com/document/product/647/35166#Server
     */
    params.userSig = GenerateTestUserSig::genTestUserSig(params.userId, SDKAppID, SECRETKEY);
    params.role = role_type_;
    params.roomId = room_id_;
 //   params.streamId = stream_id_.c_str();

    getTRTCShareInstance()->enterRoom(params, appScene);
}

void TestBaseScene::exitRoom() {
    getTRTCShareInstance()->exitRoom();
}

void TestBaseScene::switchRole(liteav::TRTCRoleType roleType){
    getTRTCShareInstance()->switchRole(roleType);
}

//============= ITRTCCloudCallback start===================//

void TestBaseScene::onEnterRoom(int result) {
    if (result > 0) {
        test_user_video_group_->setMainRoomId(room_id_);
        test_user_video_group_->show();

        // Enable audio
        getTRTCShareInstance()->enableAudioVolumeEvaluation(300); // Effective before the calling of startLocalAudio
        getTRTCShareInstance()->startLocalAudio(liteav::TRTCAudioQualityDefault);

        // Enable video
        if(app_scene_ == liteav::TRTCAppScene::TRTCAppSceneVideoCall || app_scene_ == liteav::TRTCAppScene::TRTCAppSceneLIVE){
            //取消美颜
            //getTRTCShareInstance()->setBeautyStyle(liteav::TRTCBeautyStyleSmooth, 6, 6, 6);
            getTRTCShareInstance()->startLocalPreview(test_user_video_group_->getLocalVideoTxView());
        }

        RoomInfoHolder::GetInstance().setMainRoomId(room_id_);
        RoomInfoHolder::GetInstance().setUserId(user_id_);
        RoomInfoHolder::GetInstance().setCDNPublishStreamId(stream_id_);
        RoomInfoHolder::GetInstance().setMixTranscodingStreamId(stream_id_);
    } else {
        getTRTCShareInstance()->exitRoom();
    }
}

void TestBaseScene::onExitRoom(int reason) {
    test_user_video_group_->close();
    RoomInfoHolder::GetInstance().resetData();
}

void TestBaseScene::onSwitchRole(TXLiteAVError errCode, const char * errMsg){
    if (errCode == TXLiteAVError::ERR_NULL){
        QMessageBox::about(NULL, "Successfully", "Role changed successfully.");
    }else{
        QMessageBox::warning(NULL, "Failed to change the role",errMsg);
    }
}
//============= ITRTCCloudCallback end===================//

