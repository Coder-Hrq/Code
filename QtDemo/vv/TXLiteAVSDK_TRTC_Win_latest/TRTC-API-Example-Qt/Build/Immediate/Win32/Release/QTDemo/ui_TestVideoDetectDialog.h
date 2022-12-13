/********************************************************************************
** Form generated from reading UI file 'TestVideoDetectDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTVIDEODETECTDIALOG_H
#define UI_TESTVIDEODETECTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestVideoDetectDialog
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *videoview;
    QHBoxLayout *horizontalLayout;
    QLabel *labelCameraChoices;
    QComboBox *comboBoxCameraDevices;
    QPushButton *pushButtonStartCameraTest;

    void setupUi(QDialog *TestVideoDetectDialog)
    {
        if (TestVideoDetectDialog->objectName().isEmpty())
            TestVideoDetectDialog->setObjectName(QString::fromUtf8("TestVideoDetectDialog"));
        TestVideoDetectDialog->resize(338, 237);
        TestVideoDetectDialog->setWindowOpacity(1.000000000000000);
        TestVideoDetectDialog->setAutoFillBackground(false);
        TestVideoDetectDialog->setStyleSheet(QString::fromUtf8(""));
        TestVideoDetectDialog->setSizeGripEnabled(false);
        TestVideoDetectDialog->setModal(false);
        verticalLayout = new QVBoxLayout(TestVideoDetectDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        videoview = new QWidget(TestVideoDetectDialog);
        videoview->setObjectName(QString::fromUtf8("videoview"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(videoview->sizePolicy().hasHeightForWidth());
        videoview->setSizePolicy(sizePolicy);
        videoview->setMinimumSize(QSize(320, 180));
        videoview->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(videoview);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelCameraChoices = new QLabel(TestVideoDetectDialog);
        labelCameraChoices->setObjectName(QString::fromUtf8("labelCameraChoices"));
        QFont font;
        font.setPointSize(14);
        labelCameraChoices->setFont(font);
        labelCameraChoices->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(labelCameraChoices);

        comboBoxCameraDevices = new QComboBox(TestVideoDetectDialog);
        comboBoxCameraDevices->setObjectName(QString::fromUtf8("comboBoxCameraDevices"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBoxCameraDevices->sizePolicy().hasHeightForWidth());
        comboBoxCameraDevices->setSizePolicy(sizePolicy1);
        comboBoxCameraDevices->setFont(font);
        comboBoxCameraDevices->setStyleSheet(QString::fromUtf8(""));
        comboBoxCameraDevices->setCurrentText(QString::fromUtf8(""));

        horizontalLayout->addWidget(comboBoxCameraDevices);

        pushButtonStartCameraTest = new QPushButton(TestVideoDetectDialog);
        pushButtonStartCameraTest->setObjectName(QString::fromUtf8("pushButtonStartCameraTest"));
        pushButtonStartCameraTest->setFont(font);
        pushButtonStartCameraTest->setFocusPolicy(Qt::NoFocus);
        pushButtonStartCameraTest->setStyleSheet(QString::fromUtf8(""));
        pushButtonStartCameraTest->setCheckable(true);

        horizontalLayout->addWidget(pushButtonStartCameraTest);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(TestVideoDetectDialog);

        QMetaObject::connectSlotsByName(TestVideoDetectDialog);
    } // setupUi

    void retranslateUi(QDialog *TestVideoDetectDialog)
    {
        TestVideoDetectDialog->setWindowTitle(QApplication::translate("TestVideoDetectDialog", "\350\247\206\351\242\221\346\243\200\346\265\213", nullptr));
        labelCameraChoices->setText(QApplication::translate("TestVideoDetectDialog", "\351\200\211\346\213\251\350\256\276\345\244\207", nullptr));
        pushButtonStartCameraTest->setText(QApplication::translate("TestVideoDetectDialog", "\345\274\200\345\247\213\346\265\213\350\257\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestVideoDetectDialog: public Ui_TestVideoDetectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTVIDEODETECTDIALOG_H
