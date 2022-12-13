/********************************************************************************
** Form generated from reading UI file 'TestAudioDetectDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTAUDIODETECTDIALOG_H
#define UI_TESTAUDIODETECTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TestAudioDetectDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *labelMicTestTitle;
    QHBoxLayout *horizontalLayout;
    QLabel *setMusicPublishVolume_8;
    QComboBox *comboBoxMic;
    QHBoxLayout *horizontalLayout_2;
    QLabel *setMusicPublishVolume_10;
    QSlider *sliderMicVolume;
    QPushButton *pushButtonStartMicTest;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelMicTestResult;
    QProgressBar *progressBarMicTestResult;
    QLabel *labelSpeakerTestTitle;
    QHBoxLayout *horizontalLayout_4;
    QLabel *setMusicPublishVolume_12;
    QComboBox *comboBoxSpeaker;
    QHBoxLayout *horizontalLayout_5;
    QLabel *setMusicPublishVolume_11;
    QSlider *sliderSpeakerVolume;
    QPushButton *pushButtonStartSpeakerTest;
    QHBoxLayout *horizontalLayout_6;
    QLabel *labelSpeakerTestResult;
    QProgressBar *progressBarSpeakerTestResult;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *TestAudioDetectDialog)
    {
        if (TestAudioDetectDialog->objectName().isEmpty())
            TestAudioDetectDialog->setObjectName(QString::fromUtf8("TestAudioDetectDialog"));
        TestAudioDetectDialog->resize(399, 268);
        TestAudioDetectDialog->setAutoFillBackground(false);
        verticalLayout = new QVBoxLayout(TestAudioDetectDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        labelMicTestTitle = new QLabel(TestAudioDetectDialog);
        labelMicTestTitle->setObjectName(QString::fromUtf8("labelMicTestTitle"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelMicTestTitle->sizePolicy().hasHeightForWidth());
        labelMicTestTitle->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(18);
        labelMicTestTitle->setFont(font);
        labelMicTestTitle->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelMicTestTitle);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        setMusicPublishVolume_8 = new QLabel(TestAudioDetectDialog);
        setMusicPublishVolume_8->setObjectName(QString::fromUtf8("setMusicPublishVolume_8"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(setMusicPublishVolume_8->sizePolicy().hasHeightForWidth());
        setMusicPublishVolume_8->setSizePolicy(sizePolicy1);
        setMusicPublishVolume_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(setMusicPublishVolume_8);

        comboBoxMic = new QComboBox(TestAudioDetectDialog);
        comboBoxMic->setObjectName(QString::fromUtf8("comboBoxMic"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(comboBoxMic->sizePolicy().hasHeightForWidth());
        comboBoxMic->setSizePolicy(sizePolicy2);
        comboBoxMic->setCurrentText(QString::fromUtf8(""));
        comboBoxMic->setMaxVisibleItems(10);
        comboBoxMic->setIconSize(QSize(16, 18));
        comboBoxMic->setFrame(true);

        horizontalLayout->addWidget(comboBoxMic);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        setMusicPublishVolume_10 = new QLabel(TestAudioDetectDialog);
        setMusicPublishVolume_10->setObjectName(QString::fromUtf8("setMusicPublishVolume_10"));
        setMusicPublishVolume_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(setMusicPublishVolume_10);

        sliderMicVolume = new QSlider(TestAudioDetectDialog);
        sliderMicVolume->setObjectName(QString::fromUtf8("sliderMicVolume"));
        sliderMicVolume->setValue(66);
        sliderMicVolume->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(sliderMicVolume);

        pushButtonStartMicTest = new QPushButton(TestAudioDetectDialog);
        pushButtonStartMicTest->setObjectName(QString::fromUtf8("pushButtonStartMicTest"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButtonStartMicTest->sizePolicy().hasHeightForWidth());
        pushButtonStartMicTest->setSizePolicy(sizePolicy3);
        pushButtonStartMicTest->setFocusPolicy(Qt::NoFocus);
        pushButtonStartMicTest->setCheckable(true);

        horizontalLayout_2->addWidget(pushButtonStartMicTest);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        labelMicTestResult = new QLabel(TestAudioDetectDialog);
        labelMicTestResult->setObjectName(QString::fromUtf8("labelMicTestResult"));
        labelMicTestResult->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(labelMicTestResult);

        progressBarMicTestResult = new QProgressBar(TestAudioDetectDialog);
        progressBarMicTestResult->setObjectName(QString::fromUtf8("progressBarMicTestResult"));
        progressBarMicTestResult->setValue(0);

        horizontalLayout_3->addWidget(progressBarMicTestResult);


        verticalLayout->addLayout(horizontalLayout_3);

        labelSpeakerTestTitle = new QLabel(TestAudioDetectDialog);
        labelSpeakerTestTitle->setObjectName(QString::fromUtf8("labelSpeakerTestTitle"));
        sizePolicy.setHeightForWidth(labelSpeakerTestTitle->sizePolicy().hasHeightForWidth());
        labelSpeakerTestTitle->setSizePolicy(sizePolicy);
        labelSpeakerTestTitle->setFont(font);
        labelSpeakerTestTitle->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelSpeakerTestTitle);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        setMusicPublishVolume_12 = new QLabel(TestAudioDetectDialog);
        setMusicPublishVolume_12->setObjectName(QString::fromUtf8("setMusicPublishVolume_12"));
        setMusicPublishVolume_12->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(setMusicPublishVolume_12);

        comboBoxSpeaker = new QComboBox(TestAudioDetectDialog);
        comboBoxSpeaker->setObjectName(QString::fromUtf8("comboBoxSpeaker"));
        sizePolicy2.setHeightForWidth(comboBoxSpeaker->sizePolicy().hasHeightForWidth());
        comboBoxSpeaker->setSizePolicy(sizePolicy2);
        comboBoxSpeaker->setCurrentText(QString::fromUtf8(""));
        comboBoxSpeaker->setMaxVisibleItems(10);

        horizontalLayout_4->addWidget(comboBoxSpeaker);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        setMusicPublishVolume_11 = new QLabel(TestAudioDetectDialog);
        setMusicPublishVolume_11->setObjectName(QString::fromUtf8("setMusicPublishVolume_11"));
        setMusicPublishVolume_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(setMusicPublishVolume_11);

        sliderSpeakerVolume = new QSlider(TestAudioDetectDialog);
        sliderSpeakerVolume->setObjectName(QString::fromUtf8("sliderSpeakerVolume"));
        sliderSpeakerVolume->setValue(66);
        sliderSpeakerVolume->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(sliderSpeakerVolume);

        pushButtonStartSpeakerTest = new QPushButton(TestAudioDetectDialog);
        pushButtonStartSpeakerTest->setObjectName(QString::fromUtf8("pushButtonStartSpeakerTest"));
        pushButtonStartSpeakerTest->setFocusPolicy(Qt::NoFocus);
        pushButtonStartSpeakerTest->setCheckable(true);
        pushButtonStartSpeakerTest->setFlat(false);

        horizontalLayout_5->addWidget(pushButtonStartSpeakerTest);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        labelSpeakerTestResult = new QLabel(TestAudioDetectDialog);
        labelSpeakerTestResult->setObjectName(QString::fromUtf8("labelSpeakerTestResult"));
        labelSpeakerTestResult->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(labelSpeakerTestResult);

        progressBarSpeakerTestResult = new QProgressBar(TestAudioDetectDialog);
        progressBarSpeakerTestResult->setObjectName(QString::fromUtf8("progressBarSpeakerTestResult"));
        progressBarSpeakerTestResult->setValue(0);

        horizontalLayout_6->addWidget(progressBarSpeakerTestResult);


        verticalLayout->addLayout(horizontalLayout_6);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(TestAudioDetectDialog);

        comboBoxMic->setCurrentIndex(-1);
        comboBoxSpeaker->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(TestAudioDetectDialog);
    } // setupUi

    void retranslateUi(QDialog *TestAudioDetectDialog)
    {
        TestAudioDetectDialog->setWindowTitle(QApplication::translate("TestAudioDetectDialog", "\345\243\260\351\237\263\346\243\200\346\265\213", nullptr));
        labelMicTestTitle->setText(QApplication::translate("TestAudioDetectDialog", "\351\272\246\345\205\213\351\243\216\346\243\200\346\265\213", nullptr));
        setMusicPublishVolume_8->setText(QApplication::translate("TestAudioDetectDialog", "\351\272\246\345\205\213\351\243\216:", nullptr));
        setMusicPublishVolume_10->setText(QApplication::translate("TestAudioDetectDialog", "\351\237\263\351\207\217:", nullptr));
        pushButtonStartMicTest->setText(QString());
        labelMicTestResult->setText(QApplication::translate("TestAudioDetectDialog", "\346\265\213\350\257\225\347\273\223\346\236\234", nullptr));
        labelSpeakerTestTitle->setText(QApplication::translate("TestAudioDetectDialog", "\346\211\254\345\243\260\345\231\250\346\243\200\346\265\213", nullptr));
        setMusicPublishVolume_12->setText(QApplication::translate("TestAudioDetectDialog", "\346\211\254\345\243\260\345\231\250:", nullptr));
        setMusicPublishVolume_11->setText(QApplication::translate("TestAudioDetectDialog", "\351\237\263\351\207\217:", nullptr));
        pushButtonStartSpeakerTest->setText(QApplication::translate("TestAudioDetectDialog", "\345\274\200\345\247\213\346\265\213\350\257\225", nullptr));
        labelSpeakerTestResult->setText(QApplication::translate("TestAudioDetectDialog", "\346\265\213\350\257\225\347\273\223\346\236\234", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestAudioDetectDialog: public Ui_TestAudioDetectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTAUDIODETECTDIALOG_H
