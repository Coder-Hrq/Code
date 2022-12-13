/********************************************************************************
** Form generated from reading UI file 'TestAudioSettingDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTAUDIOSETTINGDIALOG_H
#define UI_TESTAUDIOSETTINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_TestAudioSettingDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *label_18;
    QFrame *line;
    QFrame *line_6;
    QLabel *label_2;
    QComboBox *comboBoxRemoteUsers;
    QLabel *label_17;
    QSlider *horizontalSliderAudioCaptureVolume;
    QLabel *label_3;
    QSlider *horizontalSliderRemoteUserVolume;
    QLabel *label_5;
    QLabel *label_20;
    QFrame *line_2;
    QFrame *line_8;
    QLabel *label_10;
    QLabel *label_22;
    QSlider *horizontalSliderAudioPlayoutVolume;
    QSlider *horizontalSliderSystemAudioLoopbackVolume;
    QCheckBox *checkBoxSytemAudioLoopbak;
    QLabel *label_6;
    QLabel *label_7;
    QFrame *line_3;
    QFrame *line_4;
    QLabel *label_15;
    QSlider *horizontalSliderApplicationVolume;
    QLabel *label_16;
    QSlider *horizontalSliderCurrentDeviceVolume;
    QCheckBox *checkBoxApplicationMute;
    QCheckBox *checkBoxCurrentDeviceMute;
    QSpacerItem *verticalSpacer;
    QLabel *label_11;
    QLabel *label;

    void setupUi(QDialog *TestAudioSettingDialog)
    {
        if (TestAudioSettingDialog->objectName().isEmpty())
            TestAudioSettingDialog->setObjectName(QString::fromUtf8("TestAudioSettingDialog"));
        TestAudioSettingDialog->resize(756, 337);
        gridLayout = new QGridLayout(TestAudioSettingDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_4 = new QLabel(TestAudioSettingDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 1, 0, 1, 2);

        label_18 = new QLabel(TestAudioSettingDialog);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setFont(font);

        gridLayout->addWidget(label_18, 1, 3, 1, 2);

        line = new QFrame(TestAudioSettingDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 2, 0, 1, 3);

        line_6 = new QFrame(TestAudioSettingDialog);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_6, 2, 3, 1, 5);

        label_2 = new QLabel(TestAudioSettingDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setWeight(50);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 3, 0, 2, 1);

        comboBoxRemoteUsers = new QComboBox(TestAudioSettingDialog);
        comboBoxRemoteUsers->setObjectName(QString::fromUtf8("comboBoxRemoteUsers"));
        QFont font2;
        font2.setPointSize(14);
        comboBoxRemoteUsers->setFont(font2);
        comboBoxRemoteUsers->setStyleSheet(QString::fromUtf8(""));
        comboBoxRemoteUsers->setCurrentText(QString::fromUtf8(""));

        gridLayout->addWidget(comboBoxRemoteUsers, 3, 2, 2, 1);

        label_17 = new QLabel(TestAudioSettingDialog);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setFont(font1);

        gridLayout->addWidget(label_17, 3, 3, 2, 1);

        horizontalSliderAudioCaptureVolume = new QSlider(TestAudioSettingDialog);
        horizontalSliderAudioCaptureVolume->setObjectName(QString::fromUtf8("horizontalSliderAudioCaptureVolume"));
        horizontalSliderAudioCaptureVolume->setFont(font2);
        horizontalSliderAudioCaptureVolume->setMaximum(100);
        horizontalSliderAudioCaptureVolume->setValue(100);
        horizontalSliderAudioCaptureVolume->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderAudioCaptureVolume, 4, 7, 1, 1);

        label_3 = new QLabel(TestAudioSettingDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);

        gridLayout->addWidget(label_3, 5, 0, 1, 1);

        horizontalSliderRemoteUserVolume = new QSlider(TestAudioSettingDialog);
        horizontalSliderRemoteUserVolume->setObjectName(QString::fromUtf8("horizontalSliderRemoteUserVolume"));
        horizontalSliderRemoteUserVolume->setFont(font2);
        horizontalSliderRemoteUserVolume->setMaximum(100);
        horizontalSliderRemoteUserVolume->setValue(100);
        horizontalSliderRemoteUserVolume->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderRemoteUserVolume, 5, 2, 1, 1);

        label_5 = new QLabel(TestAudioSettingDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 6, 0, 1, 2);

        label_20 = new QLabel(TestAudioSettingDialog);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setFont(font);

        gridLayout->addWidget(label_20, 6, 3, 1, 5);

        line_2 = new QFrame(TestAudioSettingDialog);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 7, 0, 1, 3);

        line_8 = new QFrame(TestAudioSettingDialog);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_8, 7, 3, 1, 5);

        label_10 = new QLabel(TestAudioSettingDialog);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font1);

        gridLayout->addWidget(label_10, 8, 0, 2, 1);

        label_22 = new QLabel(TestAudioSettingDialog);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setFont(font1);

        gridLayout->addWidget(label_22, 8, 3, 2, 1);

        horizontalSliderAudioPlayoutVolume = new QSlider(TestAudioSettingDialog);
        horizontalSliderAudioPlayoutVolume->setObjectName(QString::fromUtf8("horizontalSliderAudioPlayoutVolume"));
        horizontalSliderAudioPlayoutVolume->setFont(font2);
        horizontalSliderAudioPlayoutVolume->setMaximum(100);
        horizontalSliderAudioPlayoutVolume->setValue(100);
        horizontalSliderAudioPlayoutVolume->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderAudioPlayoutVolume, 9, 2, 1, 1);

        horizontalSliderSystemAudioLoopbackVolume = new QSlider(TestAudioSettingDialog);
        horizontalSliderSystemAudioLoopbackVolume->setObjectName(QString::fromUtf8("horizontalSliderSystemAudioLoopbackVolume"));
        horizontalSliderSystemAudioLoopbackVolume->setFont(font2);
        horizontalSliderSystemAudioLoopbackVolume->setMaximum(100);
        horizontalSliderSystemAudioLoopbackVolume->setValue(100);
        horizontalSliderSystemAudioLoopbackVolume->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderSystemAudioLoopbackVolume, 9, 7, 1, 1);

        checkBoxSytemAudioLoopbak = new QCheckBox(TestAudioSettingDialog);
        checkBoxSytemAudioLoopbak->setObjectName(QString::fromUtf8("checkBoxSytemAudioLoopbak"));
        checkBoxSytemAudioLoopbak->setEnabled(true);
        checkBoxSytemAudioLoopbak->setFont(font2);
        checkBoxSytemAudioLoopbak->setChecked(false);

        gridLayout->addWidget(checkBoxSytemAudioLoopbak, 10, 7, 1, 1);

        label_6 = new QLabel(TestAudioSettingDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        gridLayout->addWidget(label_6, 11, 0, 1, 2);

        label_7 = new QLabel(TestAudioSettingDialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        gridLayout->addWidget(label_7, 11, 3, 1, 2);

        line_3 = new QFrame(TestAudioSettingDialog);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 12, 0, 1, 3);

        line_4 = new QFrame(TestAudioSettingDialog);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_4, 12, 3, 2, 5);

        label_15 = new QLabel(TestAudioSettingDialog);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font1);

        gridLayout->addWidget(label_15, 13, 0, 2, 1);

        horizontalSliderApplicationVolume = new QSlider(TestAudioSettingDialog);
        horizontalSliderApplicationVolume->setObjectName(QString::fromUtf8("horizontalSliderApplicationVolume"));
        horizontalSliderApplicationVolume->setFont(font2);
        horizontalSliderApplicationVolume->setMaximum(100);
        horizontalSliderApplicationVolume->setValue(100);
        horizontalSliderApplicationVolume->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderApplicationVolume, 13, 2, 2, 1);

        label_16 = new QLabel(TestAudioSettingDialog);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setFont(font1);

        gridLayout->addWidget(label_16, 14, 3, 1, 1);

        horizontalSliderCurrentDeviceVolume = new QSlider(TestAudioSettingDialog);
        horizontalSliderCurrentDeviceVolume->setObjectName(QString::fromUtf8("horizontalSliderCurrentDeviceVolume"));
        horizontalSliderCurrentDeviceVolume->setMaximum(150);
        horizontalSliderCurrentDeviceVolume->setValue(100);
        horizontalSliderCurrentDeviceVolume->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderCurrentDeviceVolume, 14, 6, 1, 2);

        checkBoxApplicationMute = new QCheckBox(TestAudioSettingDialog);
        checkBoxApplicationMute->setObjectName(QString::fromUtf8("checkBoxApplicationMute"));
        checkBoxApplicationMute->setEnabled(true);
        checkBoxApplicationMute->setFont(font2);
        checkBoxApplicationMute->setChecked(false);

        gridLayout->addWidget(checkBoxApplicationMute, 15, 2, 1, 1);

        checkBoxCurrentDeviceMute = new QCheckBox(TestAudioSettingDialog);
        checkBoxCurrentDeviceMute->setObjectName(QString::fromUtf8("checkBoxCurrentDeviceMute"));
        checkBoxCurrentDeviceMute->setEnabled(true);
        checkBoxCurrentDeviceMute->setFont(font2);
        checkBoxCurrentDeviceMute->setChecked(false);

        gridLayout->addWidget(checkBoxCurrentDeviceMute, 15, 5, 1, 3);

        verticalSpacer = new QSpacerItem(219, 2, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 16, 2, 1, 1);

        label_11 = new QLabel(TestAudioSettingDialog);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        QFont font3;
        font3.setPointSize(17);
        font3.setBold(true);
        font3.setUnderline(false);
        font3.setWeight(75);
        label_11->setFont(font3);
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_11, 0, 3, 1, 5);

        label = new QLabel(TestAudioSettingDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font3);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 3);


        retranslateUi(TestAudioSettingDialog);

        QMetaObject::connectSlotsByName(TestAudioSettingDialog);
    } // setupUi

    void retranslateUi(QDialog *TestAudioSettingDialog)
    {
        TestAudioSettingDialog->setWindowTitle(QApplication::translate("TestAudioSettingDialog", "\351\237\263\351\242\221\350\256\276\347\275\256", nullptr));
#ifndef QT_NO_STATUSTIP
        TestAudioSettingDialog->setStatusTip(QApplication::translate("TestAudioSettingDialog", "\350\277\233\345\205\245\346\210\277\351\227\264->\350\260\203\346\225\264->\351\252\214\350\257\201\346\225\210\346\236\234", nullptr));
#endif // QT_NO_STATUSTIP
        label_4->setText(QApplication::translate("TestAudioSettingDialog", "\347\224\250\346\210\267\351\237\263\351\207\217\350\256\276\347\275\256\357\274\232", nullptr));
        label_18->setText(QApplication::translate("TestAudioSettingDialog", "SDK\351\207\207\351\233\206\351\237\263\351\207\217\350\256\276\347\275\256\357\274\232", nullptr));
        label_2->setText(QApplication::translate("TestAudioSettingDialog", "\351\200\211\346\213\251\347\224\250\346\210\267", nullptr));
        label_17->setText(QApplication::translate("TestAudioSettingDialog", "\351\237\263\351\207\217\350\256\276\347\275\256", nullptr));
        label_3->setText(QApplication::translate("TestAudioSettingDialog", "\351\237\263\351\207\217\350\256\276\347\275\256", nullptr));
        label_5->setText(QApplication::translate("TestAudioSettingDialog", "SDK\346\222\255\346\224\276\351\237\263\351\207\217\350\256\276\347\275\256\357\274\232", nullptr));
        label_20->setText(QApplication::translate("TestAudioSettingDialog", "\347\263\273\347\273\237\345\243\260\351\237\263\351\207\207\351\233\206\351\237\263\351\207\217\350\256\276\347\275\256\357\274\232", nullptr));
        label_10->setText(QApplication::translate("TestAudioSettingDialog", "\351\237\263\351\207\217\350\256\276\347\275\256", nullptr));
        label_22->setText(QApplication::translate("TestAudioSettingDialog", "\351\237\263\351\207\217\350\256\276\347\275\256", nullptr));
        checkBoxSytemAudioLoopbak->setText(QApplication::translate("TestAudioSettingDialog", "\345\274\200\345\220\257/\345\205\263\351\227\255", nullptr));
        label_6->setText(QApplication::translate("TestAudioSettingDialog", "\347\263\273\347\273\237\345\220\210\346\210\220\345\231\250\351\237\263\351\207\217\350\256\276\347\275\256\357\274\232", nullptr));
        label_7->setText(QApplication::translate("TestAudioSettingDialog", "\345\275\223\345\211\215\351\237\263\351\242\221\350\256\276\345\244\207\350\256\276\347\275\256\357\274\232", nullptr));
        label_15->setText(QApplication::translate("TestAudioSettingDialog", "\351\237\263\351\207\217\350\256\276\347\275\256", nullptr));
        label_16->setText(QApplication::translate("TestAudioSettingDialog", "\351\237\263\351\207\217\350\256\276\347\275\256", nullptr));
        checkBoxApplicationMute->setText(QApplication::translate("TestAudioSettingDialog", "\351\235\231\351\237\263", nullptr));
        checkBoxCurrentDeviceMute->setText(QApplication::translate("TestAudioSettingDialog", "\351\235\231\351\237\263", nullptr));
        label_11->setText(QApplication::translate("TestAudioSettingDialog", "\344\270\212\350\241\214\351\237\263\351\242\221\350\256\276\347\275\256", nullptr));
        label->setText(QApplication::translate("TestAudioSettingDialog", "\344\270\213\350\241\214\351\237\263\351\242\221\350\256\276\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestAudioSettingDialog: public Ui_TestAudioSettingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTAUDIOSETTINGDIALOG_H
