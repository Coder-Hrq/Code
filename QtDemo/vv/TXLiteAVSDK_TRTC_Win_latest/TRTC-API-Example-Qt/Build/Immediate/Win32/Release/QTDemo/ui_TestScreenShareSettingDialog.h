/********************************************************************************
** Form generated from reading UI file 'TestScreenShareSettingDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTSCREENSHARESETTINGDIALOG_H
#define UI_TESTSCREENSHARESETTINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TestScreenShareSettingDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *areSetting;
    QPushButton *btSharingAllScreen;
    QPushButton *btSharingSelectedWindow;
    QGridLayout *gridLayout_2;
    QLabel *label_21;
    QLineEdit *lineEtLeft;
    QLabel *label_15;
    QLineEdit *lineEtTop;
    QLabel *label_20;
    QLineEdit *lineEtRight;
    QLineEdit *lineEtBottom;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QCheckBox *cbEnableHighPerformance;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *cnEnableHighLight;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *cbEnableCaptureMouse;
    QSpacerItem *horizontalSpacer_4;
    QFrame *line;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QComboBox *comBVideoResolution;
    QLabel *label_10;
    QCheckBox *enableAdjustRes;
    QLabel *label_8;
    QLineEdit *lineEtvideoFps;
    QFrame *line_2;
    QGridLayout *gridLayout_3;
    QLabel *label_6;
    QComboBox *comBResMode;
    QLabel *label_9;
    QLineEdit *lineEtVideoBitrate;
    QLabel *label_12;
    QLineEdit *lineEtMinVideoFps;
    QFrame *line_3;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *sdkVersionLabel_3;
    QSlider *sliderScreenCaptureMixVolume;
    QLabel *label_7;
    QComboBox *comBPushStreamMode;
    QFrame *line_4;
    QPushButton *btUpdateScreenSharing;

    void setupUi(QDialog *TestScreenShareSettingDialog)
    {
        if (TestScreenShareSettingDialog->objectName().isEmpty())
            TestScreenShareSettingDialog->setObjectName(QString::fromUtf8("TestScreenShareSettingDialog"));
        TestScreenShareSettingDialog->resize(695, 458);
        QFont font;
        font.setPointSize(14);
        font.setKerning(false);
        TestScreenShareSettingDialog->setFont(font);
        verticalLayout = new QVBoxLayout(TestScreenShareSettingDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        areSetting = new QLabel(TestScreenShareSettingDialog);
        areSetting->setObjectName(QString::fromUtf8("areSetting"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(areSetting->sizePolicy().hasHeightForWidth());
        areSetting->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        font1.setKerning(false);
        areSetting->setFont(font1);
        areSetting->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(areSetting);

        btSharingAllScreen = new QPushButton(TestScreenShareSettingDialog);
        btSharingAllScreen->setObjectName(QString::fromUtf8("btSharingAllScreen"));
        btSharingAllScreen->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btSharingAllScreen->sizePolicy().hasHeightForWidth());
        btSharingAllScreen->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        font2.setKerning(false);
        btSharingAllScreen->setFont(font2);
        btSharingAllScreen->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_4->addWidget(btSharingAllScreen);

        btSharingSelectedWindow = new QPushButton(TestScreenShareSettingDialog);
        btSharingSelectedWindow->setObjectName(QString::fromUtf8("btSharingSelectedWindow"));
        btSharingSelectedWindow->setEnabled(true);
        sizePolicy1.setHeightForWidth(btSharingSelectedWindow->sizePolicy().hasHeightForWidth());
        btSharingSelectedWindow->setSizePolicy(sizePolicy1);
        btSharingSelectedWindow->setFont(font2);
        btSharingSelectedWindow->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_4->addWidget(btSharingSelectedWindow);


        verticalLayout->addLayout(horizontalLayout_4);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setVerticalSpacing(0);
        label_21 = new QLabel(TestScreenShareSettingDialog);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout_2->addWidget(label_21, 2, 0, 1, 1);

        lineEtLeft = new QLineEdit(TestScreenShareSettingDialog);
        lineEtLeft->setObjectName(QString::fromUtf8("lineEtLeft"));
        lineEtLeft->setFont(font);
        lineEtLeft->setFocusPolicy(Qt::ClickFocus);
        lineEtLeft->setText(QString::fromUtf8("0"));
        lineEtLeft->setReadOnly(false);

        gridLayout_2->addWidget(lineEtLeft, 0, 3, 1, 1);

        label_15 = new QLabel(TestScreenShareSettingDialog);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_2->addWidget(label_15, 0, 0, 1, 1);

        lineEtTop = new QLineEdit(TestScreenShareSettingDialog);
        lineEtTop->setObjectName(QString::fromUtf8("lineEtTop"));
        lineEtTop->setFont(font);
        lineEtTop->setFocusPolicy(Qt::ClickFocus);
        lineEtTop->setText(QString::fromUtf8("0"));
        lineEtTop->setReadOnly(false);

        gridLayout_2->addWidget(lineEtTop, 0, 1, 1, 1);

        label_20 = new QLabel(TestScreenShareSettingDialog);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_2->addWidget(label_20, 2, 2, 1, 1);

        lineEtRight = new QLineEdit(TestScreenShareSettingDialog);
        lineEtRight->setObjectName(QString::fromUtf8("lineEtRight"));
        lineEtRight->setFont(font);
        lineEtRight->setFocusPolicy(Qt::ClickFocus);
        lineEtRight->setText(QString::fromUtf8("0"));
        lineEtRight->setReadOnly(false);

        gridLayout_2->addWidget(lineEtRight, 2, 3, 1, 1);

        lineEtBottom = new QLineEdit(TestScreenShareSettingDialog);
        lineEtBottom->setObjectName(QString::fromUtf8("lineEtBottom"));
        lineEtBottom->setFont(font);
        lineEtBottom->setFocusPolicy(Qt::ClickFocus);
        lineEtBottom->setText(QString::fromUtf8("0"));
        lineEtBottom->setReadOnly(false);

        gridLayout_2->addWidget(lineEtBottom, 2, 1, 1, 1);

        label_11 = new QLabel(TestScreenShareSettingDialog);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_2->addWidget(label_11, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        cbEnableHighPerformance = new QCheckBox(TestScreenShareSettingDialog);
        cbEnableHighPerformance->setObjectName(QString::fromUtf8("cbEnableHighPerformance"));
        cbEnableHighPerformance->setEnabled(true);
        sizePolicy.setHeightForWidth(cbEnableHighPerformance->sizePolicy().hasHeightForWidth());
        cbEnableHighPerformance->setSizePolicy(sizePolicy);
        cbEnableHighPerformance->setChecked(true);

        horizontalLayout_2->addWidget(cbEnableHighPerformance);

        horizontalSpacer_2 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        cnEnableHighLight = new QCheckBox(TestScreenShareSettingDialog);
        cnEnableHighLight->setObjectName(QString::fromUtf8("cnEnableHighLight"));
        sizePolicy.setHeightForWidth(cnEnableHighLight->sizePolicy().hasHeightForWidth());
        cnEnableHighLight->setSizePolicy(sizePolicy);
        cnEnableHighLight->setChecked(true);

        horizontalLayout_2->addWidget(cnEnableHighLight);

        horizontalSpacer_3 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        cbEnableCaptureMouse = new QCheckBox(TestScreenShareSettingDialog);
        cbEnableCaptureMouse->setObjectName(QString::fromUtf8("cbEnableCaptureMouse"));
        sizePolicy.setHeightForWidth(cbEnableCaptureMouse->sizePolicy().hasHeightForWidth());
        cbEnableCaptureMouse->setSizePolicy(sizePolicy);
        cbEnableCaptureMouse->setChecked(true);

        horizontalLayout_2->addWidget(cbEnableCaptureMouse);

        horizontalSpacer_4 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_2);

        line = new QFrame(TestScreenShareSettingDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        label_2 = new QLabel(TestScreenShareSettingDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setFont(font2);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(0);
        label_5 = new QLabel(TestScreenShareSettingDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        comBVideoResolution = new QComboBox(TestScreenShareSettingDialog);
        comBVideoResolution->addItem(QString());
        comBVideoResolution->addItem(QString());
        comBVideoResolution->addItem(QString());
        comBVideoResolution->addItem(QString());
        comBVideoResolution->addItem(QString());
        comBVideoResolution->addItem(QString());
        comBVideoResolution->addItem(QString());
        comBVideoResolution->addItem(QString());
        comBVideoResolution->addItem(QString());
        comBVideoResolution->addItem(QString());
        comBVideoResolution->addItem(QString());
        comBVideoResolution->addItem(QString());
        comBVideoResolution->addItem(QString());
        comBVideoResolution->addItem(QString());
        comBVideoResolution->addItem(QString());
        comBVideoResolution->addItem(QString());
        comBVideoResolution->addItem(QString());
        comBVideoResolution->addItem(QString());
        comBVideoResolution->addItem(QString());
        comBVideoResolution->addItem(QString());
        comBVideoResolution->setObjectName(QString::fromUtf8("comBVideoResolution"));
        sizePolicy.setHeightForWidth(comBVideoResolution->sizePolicy().hasHeightForWidth());
        comBVideoResolution->setSizePolicy(sizePolicy);
        comBVideoResolution->setFocusPolicy(Qt::NoFocus);
        comBVideoResolution->setMaxVisibleItems(5);

        gridLayout->addWidget(comBVideoResolution, 0, 1, 1, 1);

        label_10 = new QLabel(TestScreenShareSettingDialog);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 1, 0, 1, 1);

        enableAdjustRes = new QCheckBox(TestScreenShareSettingDialog);
        enableAdjustRes->setObjectName(QString::fromUtf8("enableAdjustRes"));
        sizePolicy.setHeightForWidth(enableAdjustRes->sizePolicy().hasHeightForWidth());
        enableAdjustRes->setSizePolicy(sizePolicy);

        gridLayout->addWidget(enableAdjustRes, 1, 1, 1, 1);

        label_8 = new QLabel(TestScreenShareSettingDialog);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 2, 0, 1, 1);

        lineEtvideoFps = new QLineEdit(TestScreenShareSettingDialog);
        lineEtvideoFps->setObjectName(QString::fromUtf8("lineEtvideoFps"));
        sizePolicy.setHeightForWidth(lineEtvideoFps->sizePolicy().hasHeightForWidth());
        lineEtvideoFps->setSizePolicy(sizePolicy);
        lineEtvideoFps->setFont(font);
        lineEtvideoFps->setFocusPolicy(Qt::ClickFocus);
        lineEtvideoFps->setText(QString::fromUtf8("15"));
        lineEtvideoFps->setAlignment(Qt::AlignCenter);
        lineEtvideoFps->setReadOnly(false);

        gridLayout->addWidget(lineEtvideoFps, 2, 1, 1, 1);


        horizontalLayout_3->addLayout(gridLayout);

        line_2 = new QFrame(TestScreenShareSettingDialog);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(line_2->sizePolicy().hasHeightForWidth());
        line_2->setSizePolicy(sizePolicy3);
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_3->addWidget(line_2);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_6 = new QLabel(TestScreenShareSettingDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_3->addWidget(label_6, 0, 0, 1, 1);

        comBResMode = new QComboBox(TestScreenShareSettingDialog);
        comBResMode->addItem(QString());
        comBResMode->addItem(QString());
        comBResMode->setObjectName(QString::fromUtf8("comBResMode"));
        sizePolicy.setHeightForWidth(comBResMode->sizePolicy().hasHeightForWidth());
        comBResMode->setSizePolicy(sizePolicy);
        comBResMode->setFocusPolicy(Qt::NoFocus);
        comBResMode->setMaxVisibleItems(2);

        gridLayout_3->addWidget(comBResMode, 0, 1, 1, 1);

        label_9 = new QLabel(TestScreenShareSettingDialog);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_3->addWidget(label_9, 1, 0, 1, 1);

        lineEtVideoBitrate = new QLineEdit(TestScreenShareSettingDialog);
        lineEtVideoBitrate->setObjectName(QString::fromUtf8("lineEtVideoBitrate"));
        lineEtVideoBitrate->setFont(font);
        lineEtVideoBitrate->setFocusPolicy(Qt::ClickFocus);
        lineEtVideoBitrate->setText(QString::fromUtf8("1200"));
        lineEtVideoBitrate->setAlignment(Qt::AlignCenter);
        lineEtVideoBitrate->setReadOnly(false);

        gridLayout_3->addWidget(lineEtVideoBitrate, 1, 1, 1, 1);

        label_12 = new QLabel(TestScreenShareSettingDialog);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_3->addWidget(label_12, 2, 0, 1, 1);

        lineEtMinVideoFps = new QLineEdit(TestScreenShareSettingDialog);
        lineEtMinVideoFps->setObjectName(QString::fromUtf8("lineEtMinVideoFps"));
        lineEtMinVideoFps->setFont(font);
        lineEtMinVideoFps->setFocusPolicy(Qt::ClickFocus);
        lineEtMinVideoFps->setText(QString::fromUtf8("50"));
        lineEtMinVideoFps->setAlignment(Qt::AlignCenter);
        lineEtMinVideoFps->setReadOnly(false);

        gridLayout_3->addWidget(lineEtMinVideoFps, 2, 1, 1, 1);


        horizontalLayout_3->addLayout(gridLayout_3);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout_3);

        line_3 = new QFrame(TestScreenShareSettingDialog);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_3);

        label = new QLabel(TestScreenShareSettingDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy4);
        label->setFont(font2);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        sdkVersionLabel_3 = new QLabel(TestScreenShareSettingDialog);
        sdkVersionLabel_3->setObjectName(QString::fromUtf8("sdkVersionLabel_3"));
        sizePolicy4.setHeightForWidth(sdkVersionLabel_3->sizePolicy().hasHeightForWidth());
        sdkVersionLabel_3->setSizePolicy(sizePolicy4);

        horizontalLayout->addWidget(sdkVersionLabel_3);

        sliderScreenCaptureMixVolume = new QSlider(TestScreenShareSettingDialog);
        sliderScreenCaptureMixVolume->setObjectName(QString::fromUtf8("sliderScreenCaptureMixVolume"));
        sliderScreenCaptureMixVolume->setFocusPolicy(Qt::NoFocus);
        sliderScreenCaptureMixVolume->setValue(50);
        sliderScreenCaptureMixVolume->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(sliderScreenCaptureMixVolume);

        label_7 = new QLabel(TestScreenShareSettingDialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy4.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy4);

        horizontalLayout->addWidget(label_7);

        comBPushStreamMode = new QComboBox(TestScreenShareSettingDialog);
        comBPushStreamMode->addItem(QString());
        comBPushStreamMode->addItem(QString());
        comBPushStreamMode->setObjectName(QString::fromUtf8("comBPushStreamMode"));
        sizePolicy.setHeightForWidth(comBPushStreamMode->sizePolicy().hasHeightForWidth());
        comBPushStreamMode->setSizePolicy(sizePolicy);
        comBPushStreamMode->setFocusPolicy(Qt::NoFocus);
        comBPushStreamMode->setMaxVisibleItems(2);

        horizontalLayout->addWidget(comBPushStreamMode);


        verticalLayout->addLayout(horizontalLayout);

        line_4 = new QFrame(TestScreenShareSettingDialog);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_4);

        btUpdateScreenSharing = new QPushButton(TestScreenShareSettingDialog);
        btUpdateScreenSharing->setObjectName(QString::fromUtf8("btUpdateScreenSharing"));
        sizePolicy.setHeightForWidth(btUpdateScreenSharing->sizePolicy().hasHeightForWidth());
        btUpdateScreenSharing->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setWeight(75);
        font3.setKerning(true);
        font3.setStyleStrategy(QFont::PreferDefault);
        btUpdateScreenSharing->setFont(font3);
        btUpdateScreenSharing->setFocusPolicy(Qt::NoFocus);
        btUpdateScreenSharing->setIconSize(QSize(0, 0));

        verticalLayout->addWidget(btUpdateScreenSharing);


        retranslateUi(TestScreenShareSettingDialog);

        comBVideoResolution->setCurrentIndex(18);
        comBResMode->setCurrentIndex(0);
        comBPushStreamMode->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TestScreenShareSettingDialog);
    } // setupUi

    void retranslateUi(QDialog *TestScreenShareSettingDialog)
    {
        TestScreenShareSettingDialog->setWindowTitle(QApplication::translate("TestScreenShareSettingDialog", "\345\261\217\345\271\225\345\210\206\344\272\253", nullptr));
        areSetting->setText(QApplication::translate("TestScreenShareSettingDialog", "\345\217\202\346\225\260\350\256\276\347\275\256", nullptr));
        btSharingAllScreen->setText(QApplication::translate("TestScreenShareSettingDialog", "\345\274\200\345\247\213\345\261\217\345\271\225\345\210\206\344\272\253\n"
"\357\274\210\346\225\264\344\270\252\345\261\217\345\271\225)", nullptr));
        btSharingSelectedWindow->setText(QApplication::translate("TestScreenShareSettingDialog", "\345\274\200\345\247\213\347\252\227\345\217\243\345\210\206\344\272\253\n"
"\357\274\210\345\217\257\344\273\273\346\204\217\351\200\211\346\213\251\347\252\227\345\217\243\357\274\211", nullptr));
        label_21->setText(QApplication::translate("TestScreenShareSettingDialog", "Bottom\357\274\232", nullptr));
        lineEtLeft->setPlaceholderText(QString());
        label_15->setText(QApplication::translate("TestScreenShareSettingDialog", "Top\357\274\232", nullptr));
        lineEtTop->setPlaceholderText(QString());
        label_20->setText(QApplication::translate("TestScreenShareSettingDialog", "Right\357\274\232", nullptr));
        lineEtRight->setPlaceholderText(QString());
        lineEtBottom->setPlaceholderText(QString());
        label_11->setText(QApplication::translate("TestScreenShareSettingDialog", "Left\357\274\232", nullptr));
        cbEnableHighPerformance->setText(QApplication::translate("TestScreenShareSettingDialog", "\351\253\230\346\200\247\350\203\275\346\250\241\345\274\217", nullptr));
        cnEnableHighLight->setText(QApplication::translate("TestScreenShareSettingDialog", "\351\253\230\344\272\256\347\252\227\345\217\243\346\217\217\350\276\271", nullptr));
        cbEnableCaptureMouse->setText(QApplication::translate("TestScreenShareSettingDialog", "\351\207\207\351\233\206\351\274\240\346\240\207", nullptr));
        label_2->setText(QApplication::translate("TestScreenShareSettingDialog", "\347\274\226\347\240\201\350\256\276\347\275\256", nullptr));
        label_5->setText(QApplication::translate("TestScreenShareSettingDialog", "\350\247\206\351\242\221\345\210\206\350\276\250\347\216\207\357\274\232", nullptr));
        comBVideoResolution->setItemText(0, QApplication::translate("TestScreenShareSettingDialog", "120_120   // \345\256\275\351\253\230\346\257\2241:1", nullptr));
        comBVideoResolution->setItemText(1, QApplication::translate("TestScreenShareSettingDialog", "160_160", nullptr));
        comBVideoResolution->setItemText(2, QApplication::translate("TestScreenShareSettingDialog", "270_270", nullptr));
        comBVideoResolution->setItemText(3, QApplication::translate("TestScreenShareSettingDialog", "480_480", nullptr));
        comBVideoResolution->setItemText(4, QApplication::translate("TestScreenShareSettingDialog", "160_120   // \345\256\275\351\253\230\346\257\2244:3", nullptr));
        comBVideoResolution->setItemText(5, QApplication::translate("TestScreenShareSettingDialog", "240_180", nullptr));
        comBVideoResolution->setItemText(6, QApplication::translate("TestScreenShareSettingDialog", "280_210", nullptr));
        comBVideoResolution->setItemText(7, QApplication::translate("TestScreenShareSettingDialog", "320_240", nullptr));
        comBVideoResolution->setItemText(8, QApplication::translate("TestScreenShareSettingDialog", "400_300", nullptr));
        comBVideoResolution->setItemText(9, QApplication::translate("TestScreenShareSettingDialog", "480_360", nullptr));
        comBVideoResolution->setItemText(10, QApplication::translate("TestScreenShareSettingDialog", "640_480", nullptr));
        comBVideoResolution->setItemText(11, QApplication::translate("TestScreenShareSettingDialog", "960_720", nullptr));
        comBVideoResolution->setItemText(12, QApplication::translate("TestScreenShareSettingDialog", "160_90     // \345\256\275\351\253\230\346\257\22416:9", nullptr));
        comBVideoResolution->setItemText(13, QApplication::translate("TestScreenShareSettingDialog", "256_144", nullptr));
        comBVideoResolution->setItemText(14, QApplication::translate("TestScreenShareSettingDialog", "320_180", nullptr));
        comBVideoResolution->setItemText(15, QApplication::translate("TestScreenShareSettingDialog", "480_270", nullptr));
        comBVideoResolution->setItemText(16, QApplication::translate("TestScreenShareSettingDialog", "640_360", nullptr));
        comBVideoResolution->setItemText(17, QApplication::translate("TestScreenShareSettingDialog", "960_540", nullptr));
        comBVideoResolution->setItemText(18, QApplication::translate("TestScreenShareSettingDialog", "1280_720", nullptr));
        comBVideoResolution->setItemText(19, QApplication::translate("TestScreenShareSettingDialog", "1920_1080", nullptr));

        comBVideoResolution->setCurrentText(QApplication::translate("TestScreenShareSettingDialog", "1280_720", nullptr));
        label_10->setText(QApplication::translate("TestScreenShareSettingDialog", "\345\212\250\346\200\201\350\260\203\346\225\264\345\210\206\350\276\250\347\216\207\357\274\232", nullptr));
        enableAdjustRes->setText(QApplication::translate("TestScreenShareSettingDialog", "\345\205\201\350\256\270", nullptr));
        label_8->setText(QApplication::translate("TestScreenShareSettingDialog", "\350\247\206\351\242\221\345\270\247\347\216\207\357\274\232", nullptr));
        lineEtvideoFps->setPlaceholderText(QString());
        label_6->setText(QApplication::translate("TestScreenShareSettingDialog", "\345\210\206\350\276\250\347\216\207\346\250\241\345\274\217\357\274\232", nullptr));
        comBResMode->setItemText(0, QApplication::translate("TestScreenShareSettingDialog", "\346\250\252\345\261\217\345\210\206\350\276\250\347\216\207", nullptr));
        comBResMode->setItemText(1, QApplication::translate("TestScreenShareSettingDialog", "\347\253\226\345\261\217\345\210\206\350\276\250\347\216\207", nullptr));

        label_9->setText(QApplication::translate("TestScreenShareSettingDialog", "\350\247\206\351\242\221\347\240\201\347\216\207\357\274\232", nullptr));
        lineEtVideoBitrate->setPlaceholderText(QString());
        label_12->setText(QApplication::translate("TestScreenShareSettingDialog", "\346\234\200\344\275\216\347\240\201\347\216\207:", nullptr));
        lineEtMinVideoFps->setPlaceholderText(QString());
        label->setText(QApplication::translate("TestScreenShareSettingDialog", "\345\205\266\344\273\226\350\256\276\347\275\256", nullptr));
        sdkVersionLabel_3->setText(QApplication::translate("TestScreenShareSettingDialog", "\346\267\267\351\237\263\351\237\263\351\207\217\345\244\247\345\260\217\357\274\232", nullptr));
        label_7->setText(QApplication::translate("TestScreenShareSettingDialog", "\346\216\250\346\265\201\346\250\241\345\274\217", nullptr));
        comBPushStreamMode->setItemText(0, QApplication::translate("TestScreenShareSettingDialog", "\350\276\205\350\267\257(\351\273\230\350\256\244)", nullptr));
        comBPushStreamMode->setItemText(1, QApplication::translate("TestScreenShareSettingDialog", "\344\270\273\350\267\257(\351\234\200\345\201\234\346\255\242\346\234\254\345\234\260\351\242\204\350\247\210)", nullptr));

        btUpdateScreenSharing->setText(QApplication::translate("TestScreenShareSettingDialog", "\347\202\271\345\207\273\346\233\264\346\226\260\345\217\202\346\225\260\357\274\210\345\274\200\345\247\213\345\210\206\344\272\253\345\220\216\347\224\237\346\225\210\357\274\211", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestScreenShareSettingDialog: public Ui_TestScreenShareSettingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTSCREENSHARESETTINGDIALOG_H
