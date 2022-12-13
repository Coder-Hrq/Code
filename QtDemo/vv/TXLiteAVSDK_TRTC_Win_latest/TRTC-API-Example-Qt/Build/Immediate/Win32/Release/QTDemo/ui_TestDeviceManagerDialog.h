/********************************************************************************
** Form generated from reading UI file 'TestDeviceManagerDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTDEVICEMANAGERDIALOG_H
#define UI_TESTDEVICEMANAGERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_TestDeviceMangerDialog
{
public:
    QGridLayout *gridLayout;
    QComboBox *cameraChooseComboBox;
    QLabel *microphoneChooseLabel;
    QComboBox *microphoneChooseComboBox;
    QComboBox *loudspeakerChooseComboBox;
    QLabel *cameraChooseLabel;
    QLabel *loudspeakerChooseLabel;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *TestDeviceMangerDialog)
    {
        if (TestDeviceMangerDialog->objectName().isEmpty())
            TestDeviceMangerDialog->setObjectName(QString::fromUtf8("TestDeviceMangerDialog"));
        TestDeviceMangerDialog->resize(361, 111);
        gridLayout = new QGridLayout(TestDeviceMangerDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        cameraChooseComboBox = new QComboBox(TestDeviceMangerDialog);
        cameraChooseComboBox->setObjectName(QString::fromUtf8("cameraChooseComboBox"));
        QFont font;
        font.setPointSize(14);
        cameraChooseComboBox->setFont(font);
        cameraChooseComboBox->setMouseTracking(false);
        cameraChooseComboBox->setEditable(true);
        cameraChooseComboBox->setCurrentText(QString::fromUtf8(""));

        gridLayout->addWidget(cameraChooseComboBox, 0, 1, 1, 1);

        microphoneChooseLabel = new QLabel(TestDeviceMangerDialog);
        microphoneChooseLabel->setObjectName(QString::fromUtf8("microphoneChooseLabel"));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setWeight(50);
        microphoneChooseLabel->setFont(font1);
        microphoneChooseLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(microphoneChooseLabel, 1, 0, 1, 1);

        microphoneChooseComboBox = new QComboBox(TestDeviceMangerDialog);
        microphoneChooseComboBox->setObjectName(QString::fromUtf8("microphoneChooseComboBox"));
        microphoneChooseComboBox->setFont(font);
        microphoneChooseComboBox->setEditable(true);
        microphoneChooseComboBox->setCurrentText(QString::fromUtf8(""));

        gridLayout->addWidget(microphoneChooseComboBox, 1, 1, 1, 1);

        loudspeakerChooseComboBox = new QComboBox(TestDeviceMangerDialog);
        loudspeakerChooseComboBox->setObjectName(QString::fromUtf8("loudspeakerChooseComboBox"));
        loudspeakerChooseComboBox->setFont(font1);
        loudspeakerChooseComboBox->setEditable(true);
        loudspeakerChooseComboBox->setCurrentText(QString::fromUtf8(""));

        gridLayout->addWidget(loudspeakerChooseComboBox, 2, 1, 1, 1);

        cameraChooseLabel = new QLabel(TestDeviceMangerDialog);
        cameraChooseLabel->setObjectName(QString::fromUtf8("cameraChooseLabel"));
        cameraChooseLabel->setFont(font1);
        cameraChooseLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(cameraChooseLabel, 0, 0, 1, 1);

        loudspeakerChooseLabel = new QLabel(TestDeviceMangerDialog);
        loudspeakerChooseLabel->setObjectName(QString::fromUtf8("loudspeakerChooseLabel"));
        loudspeakerChooseLabel->setFont(font1);
        loudspeakerChooseLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(loudspeakerChooseLabel, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);


        retranslateUi(TestDeviceMangerDialog);

        QMetaObject::connectSlotsByName(TestDeviceMangerDialog);
    } // setupUi

    void retranslateUi(QDialog *TestDeviceMangerDialog)
    {
        TestDeviceMangerDialog->setWindowTitle(QApplication::translate("TestDeviceMangerDialog", "\350\256\276\345\244\207\351\200\211\346\213\251", nullptr));
#ifndef QT_NO_STATUSTIP
        TestDeviceMangerDialog->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        microphoneChooseLabel->setText(QApplication::translate("TestDeviceMangerDialog", "\350\257\267\351\200\211\346\213\251\351\272\246\345\205\213\351\243\216", nullptr));
        cameraChooseLabel->setText(QApplication::translate("TestDeviceMangerDialog", "\350\257\267\351\200\211\346\213\251\346\221\204\345\203\217\345\244\264", nullptr));
        loudspeakerChooseLabel->setText(QApplication::translate("TestDeviceMangerDialog", "\350\257\267\351\200\211\346\213\251\346\211\254\345\243\260\345\231\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestDeviceMangerDialog: public Ui_TestDeviceMangerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTDEVICEMANAGERDIALOG_H
