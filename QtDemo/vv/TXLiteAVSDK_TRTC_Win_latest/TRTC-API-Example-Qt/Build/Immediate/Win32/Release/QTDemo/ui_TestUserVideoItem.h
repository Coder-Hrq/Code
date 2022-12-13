/********************************************************************************
** Form generated from reading UI file 'TestUserVideoItem.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTUSERVIDEOITEM_H
#define UI_TESTUSERVIDEOITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestUserVideoItem
{
public:
    QProgressBar *volumePb;
    QPushButton *audioMuteBt;
    QPushButton *videoMuteBt;
    QPushButton *mirrorBt;
    QPushButton *roateBt;
    QLabel *userInfoLabel;
    QWidget *videoPlaceHolder;
    QPushButton *fitScreenBt;
    QPushButton *preSmallVideoBt;
    QWidget *background;

    void setupUi(QWidget *TestUserVideoItem)
    {
        if (TestUserVideoItem->objectName().isEmpty())
            TestUserVideoItem->setObjectName(QString::fromUtf8("TestUserVideoItem"));
        TestUserVideoItem->resize(304, 304);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TestUserVideoItem->sizePolicy().hasHeightForWidth());
        TestUserVideoItem->setSizePolicy(sizePolicy);
        TestUserVideoItem->setAutoFillBackground(false);
        TestUserVideoItem->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);"));
        volumePb = new QProgressBar(TestUserVideoItem);
        volumePb->setObjectName(QString::fromUtf8("volumePb"));
        volumePb->setGeometry(QRect(2, 2, 300, 5));
        QFont font;
        font.setPointSize(8);
        volumePb->setFont(font);
        volumePb->setAutoFillBackground(false);
        volumePb->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);"));
        volumePb->setValue(0);
        volumePb->setTextVisible(false);
        volumePb->setInvertedAppearance(false);
        audioMuteBt = new QPushButton(TestUserVideoItem);
        audioMuteBt->setObjectName(QString::fromUtf8("audioMuteBt"));
        audioMuteBt->setGeometry(QRect(10, 10, 20, 20));
        audioMuteBt->setStyleSheet(QString::fromUtf8("image: url(:/switch/image/switch/audio_normal.png);\n"
"background-color: rgba(0, 0, 0, 0);"));
        videoMuteBt = new QPushButton(TestUserVideoItem);
        videoMuteBt->setObjectName(QString::fromUtf8("videoMuteBt"));
        videoMuteBt->setGeometry(QRect(40, 10, 20, 20));
        videoMuteBt->setStyleSheet(QString::fromUtf8("image: url(:/switch/image/switch/video_normal.png);\n"
"background-color: rgba(0, 0, 0, 0);"));
        mirrorBt = new QPushButton(TestUserVideoItem);
        mirrorBt->setObjectName(QString::fromUtf8("mirrorBt"));
        mirrorBt->setGeometry(QRect(240, 10, 20, 20));
        mirrorBt->setAutoFillBackground(false);
        mirrorBt->setStyleSheet(QString::fromUtf8("image: url(:/switch/image/switch/mirror_close.png);\n"
"background-color: rgba(0, 0, 0, 0);"));
        mirrorBt->setCheckable(true);
        mirrorBt->setAutoExclusive(false);
        roateBt = new QPushButton(TestUserVideoItem);
        roateBt->setObjectName(QString::fromUtf8("roateBt"));
        roateBt->setGeometry(QRect(270, 10, 20, 20));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 0));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        roateBt->setPalette(palette);
        roateBt->setAutoFillBackground(false);
        roateBt->setStyleSheet(QString::fromUtf8("image: url(:/switch/image/switch/roate_90.png);\n"
"background-color: rgba(0, 0, 0, 0);"));
        roateBt->setCheckable(true);
        roateBt->setAutoExclusive(false);
        userInfoLabel = new QLabel(TestUserVideoItem);
        userInfoLabel->setObjectName(QString::fromUtf8("userInfoLabel"));
        userInfoLabel->setEnabled(false);
        userInfoLabel->setGeometry(QRect(2, 284, 300, 16));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(userInfoLabel->sizePolicy().hasHeightForWidth());
        userInfoLabel->setSizePolicy(sizePolicy1);
        QPalette palette1;
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        userInfoLabel->setPalette(palette1);
        userInfoLabel->setAutoFillBackground(false);
        userInfoLabel->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);"));
        userInfoLabel->setText(QString::fromUtf8("roomid/userid"));
        userInfoLabel->setAlignment(Qt::AlignCenter);
        videoPlaceHolder = new QWidget(TestUserVideoItem);
        videoPlaceHolder->setObjectName(QString::fromUtf8("videoPlaceHolder"));
        videoPlaceHolder->setGeometry(QRect(2, 2, 300, 300));
        videoPlaceHolder->setAutoFillBackground(false);
        videoPlaceHolder->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);"));
        fitScreenBt = new QPushButton(TestUserVideoItem);
        fitScreenBt->setObjectName(QString::fromUtf8("fitScreenBt"));
        fitScreenBt->setGeometry(QRect(210, 10, 24, 20));
        fitScreenBt->setStyleSheet(QString::fromUtf8("image: url(:/switch/image/switch/fit_open.png);\n"
"background-color: rgba(0, 0, 0, 0);"));
        fitScreenBt->setCheckable(true);
        fitScreenBt->setAutoExclusive(false);
        preSmallVideoBt = new QPushButton(TestUserVideoItem);
        preSmallVideoBt->setObjectName(QString::fromUtf8("preSmallVideoBt"));
        preSmallVideoBt->setGeometry(QRect(180, 10, 20, 20));
        preSmallVideoBt->setAutoFillBackground(false);
        preSmallVideoBt->setStyleSheet(QString::fromUtf8("image: url(:/switch/image/switch/big_open.png);\n"
"background-color: rgba(0, 0, 0, 0);"));
        background = new QWidget(TestUserVideoItem);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(2, 2, 300, 300));
        background->setAutoFillBackground(false);
        background->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        background->raise();
        videoPlaceHolder->raise();
        volumePb->raise();
        audioMuteBt->raise();
        videoMuteBt->raise();
        mirrorBt->raise();
        roateBt->raise();
        userInfoLabel->raise();
        fitScreenBt->raise();
        preSmallVideoBt->raise();

        retranslateUi(TestUserVideoItem);

        QMetaObject::connectSlotsByName(TestUserVideoItem);
    } // setupUi

    void retranslateUi(QWidget *TestUserVideoItem)
    {
        TestUserVideoItem->setWindowTitle(QApplication::translate("TestUserVideoItem", "Form", nullptr));
        audioMuteBt->setText(QString());
        videoMuteBt->setText(QString());
#ifndef QT_NO_TOOLTIP
        mirrorBt->setToolTip(QApplication::translate("TestUserVideoItem", "\351\225\234\345\203\217\345\210\207\346\215\242", nullptr));
#endif // QT_NO_TOOLTIP
        mirrorBt->setText(QString());
#ifndef QT_NO_TOOLTIP
        roateBt->setToolTip(QApplication::translate("TestUserVideoItem", "\347\224\273\351\235\242\346\227\213\350\275\25490\345\272\246", nullptr));
#endif // QT_NO_TOOLTIP
        roateBt->setText(QString());
#ifndef QT_NO_TOOLTIP
        fitScreenBt->setToolTip(QApplication::translate("TestUserVideoItem", "FILL/Fit", nullptr));
#endif // QT_NO_TOOLTIP
        fitScreenBt->setText(QString());
#ifndef QT_NO_TOOLTIP
        preSmallVideoBt->setToolTip(QApplication::translate("TestUserVideoItem", "\345\244\247\345\260\217\346\265\201\345\210\207\346\215\242", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        preSmallVideoBt->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        preSmallVideoBt->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TestUserVideoItem: public Ui_TestUserVideoItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTUSERVIDEOITEM_H
