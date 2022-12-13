/********************************************************************************
** Form generated from reading UI file 'TestVideoSettingDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTVIDEOSETTINGDIALOG_H
#define UI_TESTVIDEOSETTINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TestVideoSettingDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QComboBox *comboBoxVideoResolution;
    QComboBox *comboBoxVideoFps;
    QLabel *label_16;
    QComboBox *comboBoxResolutionMode;
    QLabel *label_17;
    QGridLayout *gridLayout_3;
    QLabel *labelBitrateDesc;
    QSlider *horizontalSliderVideoBitrate;
    QGridLayout *gridLayout_2;
    QLabel *label_18;
    QCheckBox *checkBoxEnableAdjustRes;
    QLabel *label_31;
    QCheckBox *checkBoxEnableEncSmallVideoStream;

    void setupUi(QDialog *TestVideoSettingDialog)
    {
        if (TestVideoSettingDialog->objectName().isEmpty())
            TestVideoSettingDialog->setObjectName(QString::fromUtf8("TestVideoSettingDialog"));
        TestVideoSettingDialog->resize(345, 262);
        verticalLayout = new QVBoxLayout(TestVideoSettingDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(TestVideoSettingDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font;
        font.setPointSize(14);
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        comboBoxVideoResolution = new QComboBox(TestVideoSettingDialog);
        comboBoxVideoResolution->addItem(QString());
        comboBoxVideoResolution->addItem(QString());
        comboBoxVideoResolution->addItem(QString());
        comboBoxVideoResolution->addItem(QString());
        comboBoxVideoResolution->addItem(QString());
        comboBoxVideoResolution->addItem(QString());
        comboBoxVideoResolution->addItem(QString());
        comboBoxVideoResolution->addItem(QString());
        comboBoxVideoResolution->addItem(QString());
        comboBoxVideoResolution->addItem(QString());
        comboBoxVideoResolution->addItem(QString());
        comboBoxVideoResolution->addItem(QString());
        comboBoxVideoResolution->addItem(QString());
        comboBoxVideoResolution->addItem(QString());
        comboBoxVideoResolution->addItem(QString());
        comboBoxVideoResolution->addItem(QString());
        comboBoxVideoResolution->addItem(QString());
        comboBoxVideoResolution->addItem(QString());
        comboBoxVideoResolution->addItem(QString());
        comboBoxVideoResolution->addItem(QString());
        comboBoxVideoResolution->setObjectName(QString::fromUtf8("comboBoxVideoResolution"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBoxVideoResolution->sizePolicy().hasHeightForWidth());
        comboBoxVideoResolution->setSizePolicy(sizePolicy);
        comboBoxVideoResolution->setFont(font);
        comboBoxVideoResolution->setStyleSheet(QString::fromUtf8("selection-color: rgb(0, 0, 0);"));
        comboBoxVideoResolution->setMaxVisibleItems(5);

        gridLayout->addWidget(comboBoxVideoResolution, 0, 1, 1, 1);

        comboBoxVideoFps = new QComboBox(TestVideoSettingDialog);
        comboBoxVideoFps->addItem(QString());
        comboBoxVideoFps->addItem(QString());
        comboBoxVideoFps->setObjectName(QString::fromUtf8("comboBoxVideoFps"));
        comboBoxVideoFps->setFont(font);
        comboBoxVideoFps->setStyleSheet(QString::fromUtf8("selection-color: rgb(0, 0, 0);"));

        gridLayout->addWidget(comboBoxVideoFps, 2, 1, 1, 1);

        label_16 = new QLabel(TestVideoSettingDialog);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy1);
        label_16->setFont(font);

        gridLayout->addWidget(label_16, 1, 0, 1, 1);

        comboBoxResolutionMode = new QComboBox(TestVideoSettingDialog);
        comboBoxResolutionMode->addItem(QString());
        comboBoxResolutionMode->addItem(QString());
        comboBoxResolutionMode->setObjectName(QString::fromUtf8("comboBoxResolutionMode"));
        comboBoxResolutionMode->setFont(font);
        comboBoxResolutionMode->setStyleSheet(QString::fromUtf8("selection-color: rgb(0, 0, 0);"));
        comboBoxResolutionMode->setMaxVisibleItems(2);

        gridLayout->addWidget(comboBoxResolutionMode, 1, 1, 1, 1);

        label_17 = new QLabel(TestVideoSettingDialog);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setFont(font);

        gridLayout->addWidget(label_17, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        labelBitrateDesc = new QLabel(TestVideoSettingDialog);
        labelBitrateDesc->setObjectName(QString::fromUtf8("labelBitrateDesc"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(30);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labelBitrateDesc->sizePolicy().hasHeightForWidth());
        labelBitrateDesc->setSizePolicy(sizePolicy2);
        labelBitrateDesc->setFont(font);

        gridLayout_3->addWidget(labelBitrateDesc, 0, 0, 1, 1);

        horizontalSliderVideoBitrate = new QSlider(TestVideoSettingDialog);
        horizontalSliderVideoBitrate->setObjectName(QString::fromUtf8("horizontalSliderVideoBitrate"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(horizontalSliderVideoBitrate->sizePolicy().hasHeightForWidth());
        horizontalSliderVideoBitrate->setSizePolicy(sizePolicy3);
        horizontalSliderVideoBitrate->setFont(font);
        horizontalSliderVideoBitrate->setMinimum(500);
        horizontalSliderVideoBitrate->setMaximum(2000);
        horizontalSliderVideoBitrate->setSingleStep(50);
        horizontalSliderVideoBitrate->setPageStep(50);
        horizontalSliderVideoBitrate->setValue(550);
        horizontalSliderVideoBitrate->setOrientation(Qt::Horizontal);
        horizontalSliderVideoBitrate->setTickPosition(QSlider::NoTicks);
        horizontalSliderVideoBitrate->setTickInterval(50);

        gridLayout_3->addWidget(horizontalSliderVideoBitrate, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_3);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_18 = new QLabel(TestVideoSettingDialog);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_18->sizePolicy().hasHeightForWidth());
        label_18->setSizePolicy(sizePolicy4);
        label_18->setFont(font);

        gridLayout_2->addWidget(label_18, 0, 0, 1, 1);

        checkBoxEnableAdjustRes = new QCheckBox(TestVideoSettingDialog);
        checkBoxEnableAdjustRes->setObjectName(QString::fromUtf8("checkBoxEnableAdjustRes"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(checkBoxEnableAdjustRes->sizePolicy().hasHeightForWidth());
        checkBoxEnableAdjustRes->setSizePolicy(sizePolicy5);
        checkBoxEnableAdjustRes->setFont(font);

        gridLayout_2->addWidget(checkBoxEnableAdjustRes, 0, 1, 1, 1);

        label_31 = new QLabel(TestVideoSettingDialog);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        sizePolicy4.setHeightForWidth(label_31->sizePolicy().hasHeightForWidth());
        label_31->setSizePolicy(sizePolicy4);
        label_31->setFont(font);

        gridLayout_2->addWidget(label_31, 1, 0, 1, 1);

        checkBoxEnableEncSmallVideoStream = new QCheckBox(TestVideoSettingDialog);
        checkBoxEnableEncSmallVideoStream->setObjectName(QString::fromUtf8("checkBoxEnableEncSmallVideoStream"));
        sizePolicy5.setHeightForWidth(checkBoxEnableEncSmallVideoStream->sizePolicy().hasHeightForWidth());
        checkBoxEnableEncSmallVideoStream->setSizePolicy(sizePolicy5);
        checkBoxEnableEncSmallVideoStream->setFont(font);

        gridLayout_2->addWidget(checkBoxEnableEncSmallVideoStream, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_2);


        retranslateUi(TestVideoSettingDialog);

        comboBoxVideoResolution->setCurrentIndex(16);
        comboBoxResolutionMode->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TestVideoSettingDialog);
    } // setupUi

    void retranslateUi(QDialog *TestVideoSettingDialog)
    {
        TestVideoSettingDialog->setWindowTitle(QApplication::translate("TestVideoSettingDialog", "\347\224\273\350\264\250\350\256\276\347\275\256", nullptr));
        label_3->setText(QApplication::translate("TestVideoSettingDialog", "\350\247\206\351\242\221\345\270\247\347\216\207", nullptr));
        comboBoxVideoResolution->setItemText(0, QApplication::translate("TestVideoSettingDialog", "120_120  // 1:1", nullptr));
        comboBoxVideoResolution->setItemText(1, QApplication::translate("TestVideoSettingDialog", "160_160", nullptr));
        comboBoxVideoResolution->setItemText(2, QApplication::translate("TestVideoSettingDialog", "270_270", nullptr));
        comboBoxVideoResolution->setItemText(3, QApplication::translate("TestVideoSettingDialog", "480_480", nullptr));
        comboBoxVideoResolution->setItemText(4, QApplication::translate("TestVideoSettingDialog", "160_120  // 4:3", nullptr));
        comboBoxVideoResolution->setItemText(5, QApplication::translate("TestVideoSettingDialog", "240_180", nullptr));
        comboBoxVideoResolution->setItemText(6, QApplication::translate("TestVideoSettingDialog", "280_210", nullptr));
        comboBoxVideoResolution->setItemText(7, QApplication::translate("TestVideoSettingDialog", "320_240", nullptr));
        comboBoxVideoResolution->setItemText(8, QApplication::translate("TestVideoSettingDialog", "400_300", nullptr));
        comboBoxVideoResolution->setItemText(9, QApplication::translate("TestVideoSettingDialog", "480_360", nullptr));
        comboBoxVideoResolution->setItemText(10, QApplication::translate("TestVideoSettingDialog", "640_480", nullptr));
        comboBoxVideoResolution->setItemText(11, QApplication::translate("TestVideoSettingDialog", "960_720", nullptr));
        comboBoxVideoResolution->setItemText(12, QApplication::translate("TestVideoSettingDialog", "160_90   // 16:9", nullptr));
        comboBoxVideoResolution->setItemText(13, QApplication::translate("TestVideoSettingDialog", "256_144", nullptr));
        comboBoxVideoResolution->setItemText(14, QApplication::translate("TestVideoSettingDialog", "320_180", nullptr));
        comboBoxVideoResolution->setItemText(15, QApplication::translate("TestVideoSettingDialog", "480_270", nullptr));
        comboBoxVideoResolution->setItemText(16, QApplication::translate("TestVideoSettingDialog", "640_360", nullptr));
        comboBoxVideoResolution->setItemText(17, QApplication::translate("TestVideoSettingDialog", "960_540", nullptr));
        comboBoxVideoResolution->setItemText(18, QApplication::translate("TestVideoSettingDialog", "1280_720", nullptr));
        comboBoxVideoResolution->setItemText(19, QApplication::translate("TestVideoSettingDialog", "1920_1080", nullptr));

        comboBoxVideoResolution->setCurrentText(QApplication::translate("TestVideoSettingDialog", "640_360", nullptr));
        comboBoxVideoFps->setItemText(0, QApplication::translate("TestVideoSettingDialog", "15fps", nullptr));
        comboBoxVideoFps->setItemText(1, QApplication::translate("TestVideoSettingDialog", "20fps", nullptr));

        label_16->setText(QApplication::translate("TestVideoSettingDialog", "\345\210\206\350\276\250\347\216\207\346\250\241\345\274\217", nullptr));
        comboBoxResolutionMode->setItemText(0, QApplication::translate("TestVideoSettingDialog", "Landscape(\346\250\252\345\261\217)", nullptr));
        comboBoxResolutionMode->setItemText(1, QApplication::translate("TestVideoSettingDialog", "Porait(\347\253\226\345\261\217)", nullptr));

        label_17->setText(QApplication::translate("TestVideoSettingDialog", "\345\210\206\350\276\250\347\216\207", nullptr));
        labelBitrateDesc->setText(QApplication::translate("TestVideoSettingDialog", "\344\270\212\350\241\214\347\240\201\347\216\207                 ", nullptr));
        label_18->setText(QApplication::translate("TestVideoSettingDialog", "\345\210\206\350\276\250\347\216\207\350\207\252\350\260\203\346\225\264", nullptr));
        checkBoxEnableAdjustRes->setText(QApplication::translate("TestVideoSettingDialog", "\345\274\200\345\220\257/\345\205\263\351\227\255", nullptr));
        label_31->setText(QApplication::translate("TestVideoSettingDialog", "\345\260\217\347\224\273\351\235\242/\345\217\214\350\267\257", nullptr));
        checkBoxEnableEncSmallVideoStream->setText(QApplication::translate("TestVideoSettingDialog", "\345\274\200\345\220\257/\345\205\263\351\227\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestVideoSettingDialog: public Ui_TestVideoSettingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTVIDEOSETTINGDIALOG_H
