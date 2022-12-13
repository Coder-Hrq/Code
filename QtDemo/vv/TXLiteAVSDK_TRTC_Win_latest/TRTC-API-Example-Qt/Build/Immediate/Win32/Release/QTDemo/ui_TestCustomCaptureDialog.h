/********************************************************************************
** Form generated from reading UI file 'TestCustomCaptureDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTCUSTOMCAPTUREDIALOG_H
#define UI_TESTCUSTOMCAPTUREDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestCustomCaptureDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QCheckBox *cbEnableCustomTimeCapture;
    QPushButton *btnVideoCustomCapture;
    QFrame *line;
    QWidget *videoPlaceHolder;
    QLabel *label_2;
    QGridLayout *gridLayout;
    QPushButton *btnAudioCustomCapture;

    void setupUi(QDialog *TestCustomCaptureDialog)
    {
        if (TestCustomCaptureDialog->objectName().isEmpty())
            TestCustomCaptureDialog->setObjectName(QString::fromUtf8("TestCustomCaptureDialog"));
        TestCustomCaptureDialog->resize(389, 395);
        verticalLayout = new QVBoxLayout(TestCustomCaptureDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(TestCustomCaptureDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        cbEnableCustomTimeCapture = new QCheckBox(TestCustomCaptureDialog);
        cbEnableCustomTimeCapture->setObjectName(QString::fromUtf8("cbEnableCustomTimeCapture"));
        QFont font1;
        font1.setPointSize(14);
        cbEnableCustomTimeCapture->setFont(font1);

        horizontalLayout->addWidget(cbEnableCustomTimeCapture);

        btnVideoCustomCapture = new QPushButton(TestCustomCaptureDialog);
        btnVideoCustomCapture->setObjectName(QString::fromUtf8("btnVideoCustomCapture"));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(false);
        font2.setWeight(50);
        btnVideoCustomCapture->setFont(font2);
        btnVideoCustomCapture->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(btnVideoCustomCapture);


        verticalLayout->addLayout(horizontalLayout);

        line = new QFrame(TestCustomCaptureDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        videoPlaceHolder = new QWidget(TestCustomCaptureDialog);
        videoPlaceHolder->setObjectName(QString::fromUtf8("videoPlaceHolder"));
        videoPlaceHolder->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(videoPlaceHolder);

        label_2 = new QLabel(TestCustomCaptureDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout->addWidget(label_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(6);
        btnAudioCustomCapture = new QPushButton(TestCustomCaptureDialog);
        btnAudioCustomCapture->setObjectName(QString::fromUtf8("btnAudioCustomCapture"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnAudioCustomCapture->sizePolicy().hasHeightForWidth());
        btnAudioCustomCapture->setSizePolicy(sizePolicy2);
        QFont font3;
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setWeight(75);
        btnAudioCustomCapture->setFont(font3);
        btnAudioCustomCapture->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(btnAudioCustomCapture, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalLayout->setStretch(3, 3);

        retranslateUi(TestCustomCaptureDialog);

        QMetaObject::connectSlotsByName(TestCustomCaptureDialog);
    } // setupUi

    void retranslateUi(QDialog *TestCustomCaptureDialog)
    {
        TestCustomCaptureDialog->setWindowTitle(QApplication::translate("TestCustomCaptureDialog", "\350\207\252\345\256\232\344\271\211\351\207\207\351\233\206", nullptr));
        label->setText(QApplication::translate("TestCustomCaptureDialog", "\350\247\206\351\242\221\351\207\207\351\233\206", nullptr));
        cbEnableCustomTimeCapture->setText(QApplication::translate("TestCustomCaptureDialog", "\345\274\200\345\220\257\350\207\252\345\256\232\344\271\211\351\207\207\351\233\206\346\227\266\351\227\264\346\210\263", nullptr));
        btnVideoCustomCapture->setText(QApplication::translate("TestCustomCaptureDialog", "\345\274\200\345\247\213\350\247\206\351\242\221\350\207\252\345\256\232\344\271\211\351\207\207\351\233\206", nullptr));
        label_2->setText(QApplication::translate("TestCustomCaptureDialog", "\351\237\263\351\242\221\351\207\207\351\233\206", nullptr));
        btnAudioCustomCapture->setText(QApplication::translate("TestCustomCaptureDialog", "\345\274\200\345\247\213\351\237\263\351\242\221\350\207\252\345\256\232\344\271\211\351\207\207\351\233\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestCustomCaptureDialog: public Ui_TestCustomCaptureDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTCUSTOMCAPTUREDIALOG_H
