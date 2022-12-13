/********************************************************************************
** Form generated from reading UI file 'TestMixStreamPublishDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTMIXSTREAMPUBLISHDIALOG_H
#define UI_TESTMIXSTREAMPUBLISHDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestMixStreamPublishDialog
{
public:
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *streamIdLineEt;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_9;
    QLineEdit *LineEtVideoBitrate;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_10;
    QLineEdit *videoGopEt;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_8;
    QLineEdit *videoFramerateEt;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout;
    QLineEdit *videoWidthLineEt;
    QLabel *label_20;
    QLineEdit *videoHeightLineEt;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_14;
    QComboBox *audioChannelsComB;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_15;
    QLineEdit *audioBitrateEt;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_13;
    QComboBox *audioSampleRateComB;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_4;
    QGridLayout *gridLayout;
    QWidget *widget_4;
    QWidget *widget_3;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_7;
    QRadioButton *radioButtonManual;
    QRadioButton *radioButtonPresetLayout;
    QRadioButton *radioButtonScreenSharing;
    QRadioButton *radioButtonPureAudio;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_19;
    QComboBox *videoBackgrioundColorComB;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_11;
    QLineEdit *videoBackgroundImageEt;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer;
    QPushButton *startMixStreamPublishBt;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QDialog *TestMixStreamPublishDialog)
    {
        if (TestMixStreamPublishDialog->objectName().isEmpty())
            TestMixStreamPublishDialog->setObjectName(QString::fromUtf8("TestMixStreamPublishDialog"));
        TestMixStreamPublishDialog->resize(799, 728);
        QFont font;
        font.setPointSize(14);
        TestMixStreamPublishDialog->setFont(font);
        TestMixStreamPublishDialog->setAutoFillBackground(false);
        TestMixStreamPublishDialog->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_10 = new QVBoxLayout(TestMixStreamPublishDialog);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(TestMixStreamPublishDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setFont(font);

        horizontalLayout_3->addWidget(label_3);

        streamIdLineEt = new QLineEdit(TestMixStreamPublishDialog);
        streamIdLineEt->setObjectName(QString::fromUtf8("streamIdLineEt"));
        streamIdLineEt->setFont(font);
        streamIdLineEt->setText(QString::fromUtf8(""));
        streamIdLineEt->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(streamIdLineEt);


        verticalLayout_10->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_10->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_9 = new QLabel(TestMixStreamPublishDialog);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy1);
        label_9->setFont(font);

        verticalLayout->addWidget(label_9);

        LineEtVideoBitrate = new QLineEdit(TestMixStreamPublishDialog);
        LineEtVideoBitrate->setObjectName(QString::fromUtf8("LineEtVideoBitrate"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(LineEtVideoBitrate->sizePolicy().hasHeightForWidth());
        LineEtVideoBitrate->setSizePolicy(sizePolicy2);
        LineEtVideoBitrate->setFont(font);
        LineEtVideoBitrate->setInputMethodHints(Qt::ImhDigitsOnly);
        LineEtVideoBitrate->setText(QString::fromUtf8("64"));
        LineEtVideoBitrate->setAlignment(Qt::AlignCenter);
        LineEtVideoBitrate->setReadOnly(false);

        verticalLayout->addWidget(LineEtVideoBitrate);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_10 = new QLabel(TestMixStreamPublishDialog);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy1.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy1);
        label_10->setFont(font);

        verticalLayout_2->addWidget(label_10);

        videoGopEt = new QLineEdit(TestMixStreamPublishDialog);
        videoGopEt->setObjectName(QString::fromUtf8("videoGopEt"));
        videoGopEt->setEnabled(true);
        sizePolicy2.setHeightForWidth(videoGopEt->sizePolicy().hasHeightForWidth());
        videoGopEt->setSizePolicy(sizePolicy2);
        videoGopEt->setFont(font);
        videoGopEt->setInputMethodHints(Qt::ImhDigitsOnly);
        videoGopEt->setText(QString::fromUtf8("2"));
        videoGopEt->setAlignment(Qt::AlignCenter);
        videoGopEt->setReadOnly(false);

        verticalLayout_2->addWidget(videoGopEt);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_8 = new QLabel(TestMixStreamPublishDialog);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy1.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy1);
        label_8->setFont(font);

        verticalLayout_3->addWidget(label_8);

        videoFramerateEt = new QLineEdit(TestMixStreamPublishDialog);
        videoFramerateEt->setObjectName(QString::fromUtf8("videoFramerateEt"));
        sizePolicy2.setHeightForWidth(videoFramerateEt->sizePolicy().hasHeightForWidth());
        videoFramerateEt->setSizePolicy(sizePolicy2);
        videoFramerateEt->setFont(font);
        videoFramerateEt->setInputMethodHints(Qt::ImhDigitsOnly);
        videoFramerateEt->setText(QString::fromUtf8("15"));
        videoFramerateEt->setAlignment(Qt::AlignCenter);
        videoFramerateEt->setReadOnly(false);

        verticalLayout_3->addWidget(videoFramerateEt);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_6 = new QLabel(TestMixStreamPublishDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);
        label_6->setFont(font);

        verticalLayout_4->addWidget(label_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        videoWidthLineEt = new QLineEdit(TestMixStreamPublishDialog);
        videoWidthLineEt->setObjectName(QString::fromUtf8("videoWidthLineEt"));
        sizePolicy2.setHeightForWidth(videoWidthLineEt->sizePolicy().hasHeightForWidth());
        videoWidthLineEt->setSizePolicy(sizePolicy2);
        videoWidthLineEt->setFont(font);
        videoWidthLineEt->setInputMethodHints(Qt::ImhDigitsOnly);
        videoWidthLineEt->setText(QString::fromUtf8("1920"));
        videoWidthLineEt->setAlignment(Qt::AlignCenter);
        videoWidthLineEt->setReadOnly(false);

        horizontalLayout->addWidget(videoWidthLineEt);

        label_20 = new QLabel(TestMixStreamPublishDialog);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        sizePolicy1.setHeightForWidth(label_20->sizePolicy().hasHeightForWidth());
        label_20->setSizePolicy(sizePolicy1);
        label_20->setFont(font);

        horizontalLayout->addWidget(label_20);

        videoHeightLineEt = new QLineEdit(TestMixStreamPublishDialog);
        videoHeightLineEt->setObjectName(QString::fromUtf8("videoHeightLineEt"));
        sizePolicy2.setHeightForWidth(videoHeightLineEt->sizePolicy().hasHeightForWidth());
        videoHeightLineEt->setSizePolicy(sizePolicy2);
        videoHeightLineEt->setFont(font);
        videoHeightLineEt->setInputMethodHints(Qt::ImhDigitsOnly);
        videoHeightLineEt->setText(QString::fromUtf8("1080"));
        videoHeightLineEt->setAlignment(Qt::AlignCenter);
        videoHeightLineEt->setReadOnly(false);

        horizontalLayout->addWidget(videoHeightLineEt);


        verticalLayout_4->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout_4);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 1);
        horizontalLayout_2->setStretch(2, 1);
        horizontalLayout_2->setStretch(3, 1);

        verticalLayout_10->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_14 = new QLabel(TestMixStreamPublishDialog);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font);

        verticalLayout_5->addWidget(label_14);

        audioChannelsComB = new QComboBox(TestMixStreamPublishDialog);
        audioChannelsComB->addItem(QString());
        audioChannelsComB->addItem(QString());
        audioChannelsComB->setObjectName(QString::fromUtf8("audioChannelsComB"));
        audioChannelsComB->setEnabled(true);
        sizePolicy2.setHeightForWidth(audioChannelsComB->sizePolicy().hasHeightForWidth());
        audioChannelsComB->setSizePolicy(sizePolicy2);
        audioChannelsComB->setFont(font);
        audioChannelsComB->setMaxVisibleItems(7);

        verticalLayout_5->addWidget(audioChannelsComB);


        horizontalLayout_5->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_15 = new QLabel(TestMixStreamPublishDialog);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        sizePolicy.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy);
        label_15->setFont(font);

        verticalLayout_6->addWidget(label_15);

        audioBitrateEt = new QLineEdit(TestMixStreamPublishDialog);
        audioBitrateEt->setObjectName(QString::fromUtf8("audioBitrateEt"));
        sizePolicy2.setHeightForWidth(audioBitrateEt->sizePolicy().hasHeightForWidth());
        audioBitrateEt->setSizePolicy(sizePolicy2);
        audioBitrateEt->setFont(font);
        audioBitrateEt->setInputMethodHints(Qt::ImhDigitsOnly);
        audioBitrateEt->setText(QString::fromUtf8("64"));
        audioBitrateEt->setAlignment(Qt::AlignCenter);
        audioBitrateEt->setReadOnly(false);

        verticalLayout_6->addWidget(audioBitrateEt);


        horizontalLayout_5->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_13 = new QLabel(TestMixStreamPublishDialog);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        sizePolicy.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy);
        label_13->setFont(font);

        verticalLayout_7->addWidget(label_13);

        audioSampleRateComB = new QComboBox(TestMixStreamPublishDialog);
        audioSampleRateComB->addItem(QString());
        audioSampleRateComB->addItem(QString());
        audioSampleRateComB->addItem(QString());
        audioSampleRateComB->addItem(QString());
        audioSampleRateComB->addItem(QString());
        audioSampleRateComB->addItem(QString());
        audioSampleRateComB->addItem(QString());
        audioSampleRateComB->setObjectName(QString::fromUtf8("audioSampleRateComB"));
        audioSampleRateComB->setEnabled(true);
        sizePolicy2.setHeightForWidth(audioSampleRateComB->sizePolicy().hasHeightForWidth());
        audioSampleRateComB->setSizePolicy(sizePolicy2);
        audioSampleRateComB->setFont(font);
        audioSampleRateComB->setMaxVisibleItems(7);

        verticalLayout_7->addWidget(audioSampleRateComB);


        horizontalLayout_5->addLayout(verticalLayout_7);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 1);
        horizontalLayout_5->setStretch(2, 1);
        horizontalLayout_5->setStretch(3, 1);

        verticalLayout_10->addLayout(horizontalLayout_5);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_10->addItem(verticalSpacer_2);

        label_4 = new QLabel(TestMixStreamPublishDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        label_4->setFont(font1);

        verticalLayout_10->addWidget(label_4);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget_4 = new QWidget(TestMixStreamPublishDialog);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setFont(font);
        widget_4->setStyleSheet(QString::fromUtf8("image: url(:/setting/image/setting/manual_mode_content.png);"));

        gridLayout->addWidget(widget_4, 1, 0, 1, 1);

        widget_3 = new QWidget(TestMixStreamPublishDialog);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setFont(font);
        widget_3->setStyleSheet(QString::fromUtf8("image: url(:/setting/image/setting/screen_shared_mode_content.png);"));

        gridLayout->addWidget(widget_3, 3, 0, 1, 1);

        widget_2 = new QWidget(TestMixStreamPublishDialog);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setFont(font);
        widget_2->setStyleSheet(QString::fromUtf8("image: url(:/setting/image/setting/prelayout_mode_header.png);"));

        gridLayout->addWidget(widget_2, 1, 1, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));

        gridLayout->addLayout(horizontalLayout_7, 1, 2, 1, 1);

        radioButtonManual = new QRadioButton(TestMixStreamPublishDialog);
        radioButtonManual->setObjectName(QString::fromUtf8("radioButtonManual"));
        radioButtonManual->setFont(font);

        gridLayout->addWidget(radioButtonManual, 0, 0, 1, 1);

        radioButtonPresetLayout = new QRadioButton(TestMixStreamPublishDialog);
        radioButtonPresetLayout->setObjectName(QString::fromUtf8("radioButtonPresetLayout"));
        radioButtonPresetLayout->setFont(font);

        gridLayout->addWidget(radioButtonPresetLayout, 0, 1, 1, 1);

        radioButtonScreenSharing = new QRadioButton(TestMixStreamPublishDialog);
        radioButtonScreenSharing->setObjectName(QString::fromUtf8("radioButtonScreenSharing"));
        radioButtonScreenSharing->setFont(font);

        gridLayout->addWidget(radioButtonScreenSharing, 2, 0, 1, 1);

        radioButtonPureAudio = new QRadioButton(TestMixStreamPublishDialog);
        radioButtonPureAudio->setObjectName(QString::fromUtf8("radioButtonPureAudio"));
        radioButtonPureAudio->setFont(font);

        gridLayout->addWidget(radioButtonPureAudio, 2, 1, 1, 1);


        verticalLayout_10->addLayout(gridLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_19 = new QLabel(TestMixStreamPublishDialog);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_19->sizePolicy().hasHeightForWidth());
        label_19->setSizePolicy(sizePolicy3);
        label_19->setFont(font);

        verticalLayout_8->addWidget(label_19);

        videoBackgrioundColorComB = new QComboBox(TestMixStreamPublishDialog);
        videoBackgrioundColorComB->addItem(QString());
        videoBackgrioundColorComB->addItem(QString());
        videoBackgrioundColorComB->setObjectName(QString::fromUtf8("videoBackgrioundColorComB"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(videoBackgrioundColorComB->sizePolicy().hasHeightForWidth());
        videoBackgrioundColorComB->setSizePolicy(sizePolicy4);
        videoBackgrioundColorComB->setFont(font);

        verticalLayout_8->addWidget(videoBackgrioundColorComB);


        horizontalLayout_4->addLayout(verticalLayout_8);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        label_11 = new QLabel(TestMixStreamPublishDialog);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy3.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy3);
        label_11->setFont(font);

        verticalLayout_9->addWidget(label_11);

        videoBackgroundImageEt = new QLineEdit(TestMixStreamPublishDialog);
        videoBackgroundImageEt->setObjectName(QString::fromUtf8("videoBackgroundImageEt"));
        sizePolicy4.setHeightForWidth(videoBackgroundImageEt->sizePolicy().hasHeightForWidth());
        videoBackgroundImageEt->setSizePolicy(sizePolicy4);
        videoBackgroundImageEt->setFont(font);
        videoBackgroundImageEt->setInputMethodHints(Qt::ImhDigitsOnly);
        videoBackgroundImageEt->setText(QString::fromUtf8(""));
        videoBackgroundImageEt->setReadOnly(false);

        verticalLayout_9->addWidget(videoBackgroundImageEt);


        horizontalLayout_4->addLayout(verticalLayout_9);


        verticalLayout_10->addLayout(horizontalLayout_4);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        startMixStreamPublishBt = new QPushButton(TestMixStreamPublishDialog);
        startMixStreamPublishBt->setObjectName(QString::fromUtf8("startMixStreamPublishBt"));
        startMixStreamPublishBt->setEnabled(false);
        startMixStreamPublishBt->setFont(font);
        startMixStreamPublishBt->setFocusPolicy(Qt::NoFocus);
        startMixStreamPublishBt->setChecked(false);

        horizontalLayout_6->addWidget(startMixStreamPublishBt);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);


        verticalLayout_10->addLayout(horizontalLayout_6);

        verticalLayout_10->setStretch(6, 1);

        retranslateUi(TestMixStreamPublishDialog);

        audioChannelsComB->setCurrentIndex(0);
        audioSampleRateComB->setCurrentIndex(6);


        QMetaObject::connectSlotsByName(TestMixStreamPublishDialog);
    } // setupUi

    void retranslateUi(QDialog *TestMixStreamPublishDialog)
    {
        TestMixStreamPublishDialog->setWindowTitle(QApplication::translate("TestMixStreamPublishDialog", "CDN\346\267\267\346\265\201\350\256\276\347\275\256", nullptr));
        label_3->setText(QApplication::translate("TestMixStreamPublishDialog", "stream_id:", nullptr));
        streamIdLineEt->setPlaceholderText(QApplication::translate("TestMixStreamPublishDialog", "stream_id", nullptr));
        label_9->setText(QApplication::translate("TestMixStreamPublishDialog", "\350\247\206\351\242\221\347\240\201\347\216\207(kbs)\357\274\232", nullptr));
        LineEtVideoBitrate->setPlaceholderText(QString());
        label_10->setText(QApplication::translate("TestMixStreamPublishDialog", "\345\205\263\351\224\256\345\270\247\351\227\264\351\232\224(GOP)\357\274\232", nullptr));
        videoGopEt->setPlaceholderText(QString());
        label_8->setText(QApplication::translate("TestMixStreamPublishDialog", "\350\247\206\351\242\221\345\270\247\347\216\207\357\274\232", nullptr));
        videoFramerateEt->setPlaceholderText(QString());
        label_6->setText(QApplication::translate("TestMixStreamPublishDialog", "\345\210\206\350\276\250\347\216\207\357\274\210\345\256\275X\351\253\230\357\274\211\357\274\232", nullptr));
        videoWidthLineEt->setPlaceholderText(QApplication::translate("TestMixStreamPublishDialog", "\345\256\275", nullptr));
        label_20->setText(QApplication::translate("TestMixStreamPublishDialog", "X", nullptr));
        videoHeightLineEt->setPlaceholderText(QApplication::translate("TestMixStreamPublishDialog", "\351\253\230", nullptr));
        label_14->setText(QApplication::translate("TestMixStreamPublishDialog", "\351\237\263\351\242\221\345\243\260\351\201\223\346\225\260\357\274\232", nullptr));
        audioChannelsComB->setItemText(0, QApplication::translate("TestMixStreamPublishDialog", "1", nullptr));
        audioChannelsComB->setItemText(1, QApplication::translate("TestMixStreamPublishDialog", "2", nullptr));

        label_15->setText(QApplication::translate("TestMixStreamPublishDialog", "\351\237\263\351\242\221\347\240\201\347\216\207\357\274\232", nullptr));
        audioBitrateEt->setPlaceholderText(QString());
        label_13->setText(QApplication::translate("TestMixStreamPublishDialog", "\351\237\263\351\242\221\351\207\207\346\240\267\347\216\207\357\274\232", nullptr));
        audioSampleRateComB->setItemText(0, QApplication::translate("TestMixStreamPublishDialog", "12000", nullptr));
        audioSampleRateComB->setItemText(1, QApplication::translate("TestMixStreamPublishDialog", "16000", nullptr));
        audioSampleRateComB->setItemText(2, QApplication::translate("TestMixStreamPublishDialog", "22000", nullptr));
        audioSampleRateComB->setItemText(3, QApplication::translate("TestMixStreamPublishDialog", "24000", nullptr));
        audioSampleRateComB->setItemText(4, QApplication::translate("TestMixStreamPublishDialog", "32000", nullptr));
        audioSampleRateComB->setItemText(5, QApplication::translate("TestMixStreamPublishDialog", "44100", nullptr));
        audioSampleRateComB->setItemText(6, QApplication::translate("TestMixStreamPublishDialog", "48000", nullptr));

        label_4->setText(QApplication::translate("TestMixStreamPublishDialog", "\346\216\222\347\211\210\346\250\241\345\274\217(\345\277\205\351\200\211,\345\217\252\346\224\257\346\214\201\345\215\225\351\200\211)", nullptr));
        radioButtonManual->setText(QApplication::translate("TestMixStreamPublishDialog", "\345\205\250\346\211\213\345\212\250\346\250\241\345\274\217", nullptr));
        radioButtonPresetLayout->setText(QApplication::translate("TestMixStreamPublishDialog", "\351\242\204\346\216\222\347\211\210\346\250\241\345\274\217", nullptr));
        radioButtonScreenSharing->setText(QApplication::translate("TestMixStreamPublishDialog", "\345\261\217\345\271\225\345\210\206\344\272\253\346\250\241\345\274\217", nullptr));
        radioButtonPureAudio->setText(QApplication::translate("TestMixStreamPublishDialog", "\347\272\257\351\237\263\351\242\221\346\250\241\345\274\217", nullptr));
        label_19->setText(QApplication::translate("TestMixStreamPublishDialog", "\350\203\214\346\231\257\351\242\234\350\211\262:", nullptr));
        videoBackgrioundColorComB->setItemText(0, QApplication::translate("TestMixStreamPublishDialog", "\351\273\221\350\211\262", nullptr));
        videoBackgrioundColorComB->setItemText(1, QApplication::translate("TestMixStreamPublishDialog", "\350\223\235\350\211\262", nullptr));

        label_11->setText(QApplication::translate("TestMixStreamPublishDialog", "\350\203\214\346\231\257\345\233\276(\346\216\247\345\210\266\345\217\260 => \345\272\224\347\224\250\347\256\241\347\220\206 => \345\212\237\350\203\275\351\205\215\347\275\256 => \347\264\240\346\235\220\347\256\241\347\220\206)\357\274\232", nullptr));
        videoBackgroundImageEt->setInputMask(QString());
        videoBackgroundImageEt->setPlaceholderText(QApplication::translate("TestMixStreamPublishDialog", "\346\202\250\347\232\204\345\233\276\347\211\207ID", nullptr));
        startMixStreamPublishBt->setText(QApplication::translate("TestMixStreamPublishDialog", "\345\274\200\345\247\213\345\217\221\345\270\203", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestMixStreamPublishDialog: public Ui_TestMixStreamPublishDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTMIXSTREAMPUBLISHDIALOG_H
