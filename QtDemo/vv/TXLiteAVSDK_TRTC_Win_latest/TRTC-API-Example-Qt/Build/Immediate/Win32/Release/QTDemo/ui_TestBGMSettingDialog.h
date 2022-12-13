/********************************************************************************
** Form generated from reading UI file 'TestBGMSettingDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTBGMSETTINGDIALOG_H
#define UI_TESTBGMSETTINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TestBGMSettingDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout;
    QLabel *label_9;
    QLineEdit *etRepeatTimes;
    QCheckBox *cbShortFile;
    QCheckBox *cbEnableRemotePush;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_10;
    QComboBox *comboxSelectBgmMusic;
    QProgressBar *progressbarBgmProgress;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btnStartBgm;
    QPushButton *btnPauseBgm;
    QSpacerItem *horizontalSpacer_4;
    QFrame *line_11;
    QLabel *label_21;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSlider *sliderSetLocalVolume;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QSlider *sliderSetRemoteVolume;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QSlider *sliderSetAllVolume;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QSlider *sliderSetPitch;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QSlider *sliderSetSpeedRate;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label;
    QSlider *sliderSetVoiceCaptureVolum;
    QSpacerItem *horizontalSpacer_11;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnRestSetting;
    QSpacerItem *horizontalSpacer_2;
    QFrame *line;
    QSpacerItem *verticalSpacer;
    QLabel *label_22;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_26;
    QComboBox *comboxSetVoiceReverbType;

    void setupUi(QDialog *TestBGMSettingDialog)
    {
        if (TestBGMSettingDialog->objectName().isEmpty())
            TestBGMSettingDialog->setObjectName(QString::fromUtf8("TestBGMSettingDialog"));
        TestBGMSettingDialog->resize(641, 494);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TestBGMSettingDialog->sizePolicy().hasHeightForWidth());
        TestBGMSettingDialog->setSizePolicy(sizePolicy);
        TestBGMSettingDialog->setLayoutDirection(Qt::LeftToRight);
        TestBGMSettingDialog->setSizeGripEnabled(false);
        verticalLayout = new QVBoxLayout(TestBGMSettingDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_8 = new QLabel(TestBGMSettingDialog);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(75);
        label_8->setFont(font);
        label_8->setLayoutDirection(Qt::LeftToRight);
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_8);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_9 = new QLabel(TestBGMSettingDialog);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setPointSize(14);
        label_9->setFont(font1);
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_9);

        etRepeatTimes = new QLineEdit(TestBGMSettingDialog);
        etRepeatTimes->setObjectName(QString::fromUtf8("etRepeatTimes"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(etRepeatTimes->sizePolicy().hasHeightForWidth());
        etRepeatTimes->setSizePolicy(sizePolicy3);
        etRepeatTimes->setFont(font1);
        etRepeatTimes->setText(QString::fromUtf8("0"));
        etRepeatTimes->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(etRepeatTimes);

        cbShortFile = new QCheckBox(TestBGMSettingDialog);
        cbShortFile->setObjectName(QString::fromUtf8("cbShortFile"));
        sizePolicy3.setHeightForWidth(cbShortFile->sizePolicy().hasHeightForWidth());
        cbShortFile->setSizePolicy(sizePolicy3);
        cbShortFile->setFont(font1);
        cbShortFile->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout->addWidget(cbShortFile);

        cbEnableRemotePush = new QCheckBox(TestBGMSettingDialog);
        cbEnableRemotePush->setObjectName(QString::fromUtf8("cbEnableRemotePush"));
        sizePolicy3.setHeightForWidth(cbEnableRemotePush->sizePolicy().hasHeightForWidth());
        cbEnableRemotePush->setSizePolicy(sizePolicy3);
        cbEnableRemotePush->setFont(font1);

        horizontalLayout->addWidget(cbEnableRemotePush);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_10 = new QLabel(TestBGMSettingDialog);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font1);
        label_10->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_10);

        comboxSelectBgmMusic = new QComboBox(TestBGMSettingDialog);
        comboxSelectBgmMusic->addItem(QString());
        comboxSelectBgmMusic->addItem(QString());
        comboxSelectBgmMusic->addItem(QString());
        comboxSelectBgmMusic->setObjectName(QString::fromUtf8("comboxSelectBgmMusic"));
        comboxSelectBgmMusic->setFont(font1);

        horizontalLayout_2->addWidget(comboxSelectBgmMusic);


        verticalLayout->addLayout(horizontalLayout_2);

        progressbarBgmProgress = new QProgressBar(TestBGMSettingDialog);
        progressbarBgmProgress->setObjectName(QString::fromUtf8("progressbarBgmProgress"));
        progressbarBgmProgress->setFont(font1);
        progressbarBgmProgress->setValue(0);

        verticalLayout->addWidget(progressbarBgmProgress);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_3);

        btnStartBgm = new QPushButton(TestBGMSettingDialog);
        btnStartBgm->setObjectName(QString::fromUtf8("btnStartBgm"));
        sizePolicy3.setHeightForWidth(btnStartBgm->sizePolicy().hasHeightForWidth());
        btnStartBgm->setSizePolicy(sizePolicy3);
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        btnStartBgm->setFont(font2);
        btnStartBgm->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_9->addWidget(btnStartBgm);

        btnPauseBgm = new QPushButton(TestBGMSettingDialog);
        btnPauseBgm->setObjectName(QString::fromUtf8("btnPauseBgm"));
        btnPauseBgm->setFont(font2);
        btnPauseBgm->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_9->addWidget(btnPauseBgm);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_9);

        line_11 = new QFrame(TestBGMSettingDialog);
        line_11->setObjectName(QString::fromUtf8("line_11"));
        line_11->setFrameShape(QFrame::HLine);
        line_11->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_11);

        label_21 = new QLabel(TestBGMSettingDialog);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_21->sizePolicy().hasHeightForWidth());
        label_21->setSizePolicy(sizePolicy4);
        QFont font3;
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setItalic(false);
        font3.setWeight(75);
        label_21->setFont(font3);
        label_21->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_21);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(TestBGMSettingDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_3);

        sliderSetLocalVolume = new QSlider(TestBGMSettingDialog);
        sliderSetLocalVolume->setObjectName(QString::fromUtf8("sliderSetLocalVolume"));
        sliderSetLocalVolume->setEnabled(false);
        sliderSetLocalVolume->setMaximum(150);
        sliderSetLocalVolume->setValue(100);
        sliderSetLocalVolume->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(sliderSetLocalVolume);

        horizontalSpacer_6 = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(TestBGMSettingDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_2);

        sliderSetRemoteVolume = new QSlider(TestBGMSettingDialog);
        sliderSetRemoteVolume->setObjectName(QString::fromUtf8("sliderSetRemoteVolume"));
        sliderSetRemoteVolume->setEnabled(false);
        sliderSetRemoteVolume->setMaximum(150);
        sliderSetRemoteVolume->setValue(100);
        sliderSetRemoteVolume->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(sliderSetRemoteVolume);

        horizontalSpacer_7 = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_4 = new QLabel(TestBGMSettingDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_4);

        sliderSetAllVolume = new QSlider(TestBGMSettingDialog);
        sliderSetAllVolume->setObjectName(QString::fromUtf8("sliderSetAllVolume"));
        sliderSetAllVolume->setEnabled(false);
        sliderSetAllVolume->setMaximum(150);
        sliderSetAllVolume->setValue(100);
        sliderSetAllVolume->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(sliderSetAllVolume);

        horizontalSpacer_8 = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_8);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_5 = new QLabel(TestBGMSettingDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(label_5);

        sliderSetPitch = new QSlider(TestBGMSettingDialog);
        sliderSetPitch->setObjectName(QString::fromUtf8("sliderSetPitch"));
        sliderSetPitch->setEnabled(false);
        sliderSetPitch->setMinimum(-10);
        sliderSetPitch->setMaximum(10);
        sliderSetPitch->setValue(0);
        sliderSetPitch->setOrientation(Qt::Horizontal);

        horizontalLayout_6->addWidget(sliderSetPitch);

        horizontalSpacer_9 = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_9);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_6 = new QLabel(TestBGMSettingDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(label_6);

        sliderSetSpeedRate = new QSlider(TestBGMSettingDialog);
        sliderSetSpeedRate->setObjectName(QString::fromUtf8("sliderSetSpeedRate"));
        sliderSetSpeedRate->setEnabled(false);
        sliderSetSpeedRate->setMinimum(5);
        sliderSetSpeedRate->setMaximum(20);
        sliderSetSpeedRate->setValue(10);
        sliderSetSpeedRate->setOrientation(Qt::Horizontal);

        horizontalLayout_7->addWidget(sliderSetSpeedRate);

        horizontalSpacer_10 = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_10);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label = new QLabel(TestBGMSettingDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font1);

        horizontalLayout_12->addWidget(label);

        sliderSetVoiceCaptureVolum = new QSlider(TestBGMSettingDialog);
        sliderSetVoiceCaptureVolum->setObjectName(QString::fromUtf8("sliderSetVoiceCaptureVolum"));
        sliderSetVoiceCaptureVolum->setMaximum(150);
        sliderSetVoiceCaptureVolum->setValue(100);
        sliderSetVoiceCaptureVolum->setOrientation(Qt::Horizontal);

        horizontalLayout_12->addWidget(sliderSetVoiceCaptureVolum);

        horizontalSpacer_11 = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_11);


        verticalLayout->addLayout(horizontalLayout_12);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);

        btnRestSetting = new QPushButton(TestBGMSettingDialog);
        btnRestSetting->setObjectName(QString::fromUtf8("btnRestSetting"));
        sizePolicy3.setHeightForWidth(btnRestSetting->sizePolicy().hasHeightForWidth());
        btnRestSetting->setSizePolicy(sizePolicy3);
        btnRestSetting->setFont(font2);
        btnRestSetting->setFocusPolicy(Qt::NoFocus);
        btnRestSetting->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_8->addWidget(btnRestSetting);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_8);

        line = new QFrame(TestBGMSettingDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label_22 = new QLabel(TestBGMSettingDialog);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setFont(font3);
        label_22->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_22);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_26 = new QLabel(TestBGMSettingDialog);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        sizePolicy2.setHeightForWidth(label_26->sizePolicy().hasHeightForWidth());
        label_26->setSizePolicy(sizePolicy2);
        QFont font4;
        font4.setPointSize(14);
        font4.setBold(false);
        font4.setWeight(50);
        label_26->setFont(font4);

        horizontalLayout_10->addWidget(label_26);

        comboxSetVoiceReverbType = new QComboBox(TestBGMSettingDialog);
        comboxSetVoiceReverbType->addItem(QString());
        comboxSetVoiceReverbType->addItem(QString());
        comboxSetVoiceReverbType->addItem(QString());
        comboxSetVoiceReverbType->addItem(QString());
        comboxSetVoiceReverbType->addItem(QString());
        comboxSetVoiceReverbType->addItem(QString());
        comboxSetVoiceReverbType->addItem(QString());
        comboxSetVoiceReverbType->addItem(QString());
        comboxSetVoiceReverbType->setObjectName(QString::fromUtf8("comboxSetVoiceReverbType"));
        comboxSetVoiceReverbType->setFont(font1);
        comboxSetVoiceReverbType->setMaxVisibleItems(10);

        horizontalLayout_10->addWidget(comboxSetVoiceReverbType);


        verticalLayout->addLayout(horizontalLayout_10);


        retranslateUi(TestBGMSettingDialog);

        comboxSetVoiceReverbType->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TestBGMSettingDialog);
    } // setupUi

    void retranslateUi(QDialog *TestBGMSettingDialog)
    {
        TestBGMSettingDialog->setWindowTitle(QApplication::translate("TestBGMSettingDialog", "\351\237\263\346\225\210\347\256\241\347\220\206", nullptr));
        label_8->setText(QApplication::translate("TestBGMSettingDialog", "\346\222\255\346\224\276\350\203\214\346\231\257\351\237\263\344\271\220", nullptr));
        label_9->setText(QApplication::translate("TestBGMSettingDialog", "\345\276\252\347\216\257\346\254\241\346\225\260:", nullptr));
        cbShortFile->setText(QApplication::translate("TestBGMSettingDialog", "\347\237\255\346\226\207\344\273\266", nullptr));
        cbEnableRemotePush->setText(QApplication::translate("TestBGMSettingDialog", "\350\277\234\347\253\257publish", nullptr));
        label_10->setText(QApplication::translate("TestBGMSettingDialog", "\351\200\211\346\213\251\350\203\214\346\231\257\351\237\263\344\271\220:", nullptr));
        comboxSelectBgmMusic->setItemText(0, QApplication::translate("TestBGMSettingDialog", "test_bgm_music_first", nullptr));
        comboxSelectBgmMusic->setItemText(1, QApplication::translate("TestBGMSettingDialog", "test_bgm_music_second", nullptr));
        comboxSelectBgmMusic->setItemText(2, QApplication::translate("TestBGMSettingDialog", "test_bgm_music_third", nullptr));

        btnStartBgm->setText(QApplication::translate("TestBGMSettingDialog", "\345\274\200\345\247\213\346\222\255\346\224\276", nullptr));
        btnPauseBgm->setText(QApplication::translate("TestBGMSettingDialog", "\346\232\202\345\201\234\346\222\255\346\224\276", nullptr));
        label_21->setText(QApplication::translate("TestBGMSettingDialog", "\350\203\214\346\231\257\351\237\263\344\271\220\350\260\203\350\212\202", nullptr));
        label_3->setText(QApplication::translate("TestBGMSettingDialog", "\346\234\254\345\234\260\351\237\263\351\207\217\357\274\232", nullptr));
        label_2->setText(QApplication::translate("TestBGMSettingDialog", "\350\277\234\347\253\257\351\237\263\351\207\217\357\274\232", nullptr));
        label_4->setText(QApplication::translate("TestBGMSettingDialog", "\345\205\250\345\261\200\351\237\263\351\207\217\357\274\232", nullptr));
        label_5->setText(QApplication::translate("TestBGMSettingDialog", "\351\237\263\350\260\203\351\253\230\344\275\216\357\274\232", nullptr));
        label_6->setText(QApplication::translate("TestBGMSettingDialog", "\346\222\255\346\224\276\345\217\230\351\200\237\357\274\232", nullptr));
        label->setText(QApplication::translate("TestBGMSettingDialog", "\350\256\276\347\275\256\351\272\246\345\205\213\351\243\216\351\207\207\351\233\206\351\237\263\351\207\217", nullptr));
#ifndef QT_NO_TOOLTIP
        sliderSetVoiceCaptureVolum->setToolTip(QApplication::translate("TestBGMSettingDialog", "\350\277\233\346\210\277\345\220\216\347\224\237\346\225\210", nullptr));
#endif // QT_NO_TOOLTIP
        btnRestSetting->setText(QApplication::translate("TestBGMSettingDialog", "\351\207\215\347\275\256", nullptr));
        label_22->setText(QApplication::translate("TestBGMSettingDialog", "\346\267\267\345\223\215\346\225\210\346\236\234\350\256\276\347\275\256", nullptr));
        label_26->setText(QApplication::translate("TestBGMSettingDialog", "\351\200\211\346\213\251\346\267\267\345\223\215", nullptr));
        comboxSetVoiceReverbType->setItemText(0, QApplication::translate("TestBGMSettingDialog", "Type_0 \345\205\263\351\227\255\346\267\267\345\223\215", nullptr));
        comboxSetVoiceReverbType->setItemText(1, QApplication::translate("TestBGMSettingDialog", "Type_1 KTV", nullptr));
        comboxSetVoiceReverbType->setItemText(2, QApplication::translate("TestBGMSettingDialog", "Type_2 \345\260\217\346\210\277\351\227\264", nullptr));
        comboxSetVoiceReverbType->setItemText(3, QApplication::translate("TestBGMSettingDialog", "Type_3 \345\244\247\344\274\232\345\240\202", nullptr));
        comboxSetVoiceReverbType->setItemText(4, QApplication::translate("TestBGMSettingDialog", "Type_4 \344\275\216\346\262\211", nullptr));
        comboxSetVoiceReverbType->setItemText(5, QApplication::translate("TestBGMSettingDialog", "Type_5 \346\264\252\344\272\256", nullptr));
        comboxSetVoiceReverbType->setItemText(6, QApplication::translate("TestBGMSettingDialog", "Type_6 \351\207\221\345\261\236\345\243\260", nullptr));
        comboxSetVoiceReverbType->setItemText(7, QApplication::translate("TestBGMSettingDialog", "Type_7 (\347\243\201\346\200\247)", nullptr));

#ifndef QT_NO_TOOLTIP
        comboxSetVoiceReverbType->setToolTip(QApplication::translate("TestBGMSettingDialog", "\350\277\233\346\210\277\345\220\216\347\224\237\346\225\210", nullptr));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class TestBGMSettingDialog: public Ui_TestBGMSettingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTBGMSETTINGDIALOG_H
