/********************************************************************************
** Form generated from reading UI file 'TestScreenShareSelectWindowDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTSCREENSHARESELECTWINDOWDIALOG_H
#define UI_TESTSCREENSHARESELECTWINDOWDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestScreenShareSelectWindowDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QWidget *screenSharedPreview;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QPushButton *btnStartScreenCapture;
    QPushButton *btPauseScreenCapture;
    QScrollArea *scrollArea;
    QWidget *scrrenSharingWindows;

    void setupUi(QDialog *TestScreenShareSelectWindowDialog)
    {
        if (TestScreenShareSelectWindowDialog->objectName().isEmpty())
            TestScreenShareSelectWindowDialog->setObjectName(QString::fromUtf8("TestScreenShareSelectWindowDialog"));
        TestScreenShareSelectWindowDialog->resize(1276, 996);
        QFont font;
        font.setPointSize(14);
        TestScreenShareSelectWindowDialog->setFont(font);
        verticalLayout = new QVBoxLayout(TestScreenShareSelectWindowDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(TestScreenShareSelectWindowDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        screenSharedPreview = new QWidget(TestScreenShareSelectWindowDialog);
        screenSharedPreview->setObjectName(QString::fromUtf8("screenSharedPreview"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(screenSharedPreview->sizePolicy().hasHeightForWidth());
        screenSharedPreview->setSizePolicy(sizePolicy1);
        screenSharedPreview->setFont(font);
        screenSharedPreview->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(screenSharedPreview);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(TestScreenShareSelectWindowDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);
        label_3->setFont(font1);

        horizontalLayout->addWidget(label_3);

        btnStartScreenCapture = new QPushButton(TestScreenShareSelectWindowDialog);
        btnStartScreenCapture->setObjectName(QString::fromUtf8("btnStartScreenCapture"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(btnStartScreenCapture->sizePolicy().hasHeightForWidth());
        btnStartScreenCapture->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(btnStartScreenCapture);

        btPauseScreenCapture = new QPushButton(TestScreenShareSelectWindowDialog);
        btPauseScreenCapture->setObjectName(QString::fromUtf8("btPauseScreenCapture"));
        btPauseScreenCapture->setEnabled(false);
        sizePolicy3.setHeightForWidth(btPauseScreenCapture->sizePolicy().hasHeightForWidth());
        btPauseScreenCapture->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(btPauseScreenCapture);

        horizontalLayout->setStretch(0, 1);

        verticalLayout->addLayout(horizontalLayout);

        scrollArea = new QScrollArea(TestScreenShareSelectWindowDialog);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(false);
        scrrenSharingWindows = new QWidget();
        scrrenSharingWindows->setObjectName(QString::fromUtf8("scrrenSharingWindows"));
        scrrenSharingWindows->setGeometry(QRect(0, 0, 1072, 606));
        scrollArea->setWidget(scrrenSharingWindows);

        verticalLayout->addWidget(scrollArea);

        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(3, 2);

        retranslateUi(TestScreenShareSelectWindowDialog);

        QMetaObject::connectSlotsByName(TestScreenShareSelectWindowDialog);
    } // setupUi

    void retranslateUi(QDialog *TestScreenShareSelectWindowDialog)
    {
        TestScreenShareSelectWindowDialog->setWindowTitle(QApplication::translate("TestScreenShareSelectWindowDialog", "\347\252\227\345\217\243\345\210\206\344\272\253", nullptr));
        label_2->setText(QApplication::translate("TestScreenShareSelectWindowDialog", "\347\252\227\345\217\243\345\210\206\344\272\253", nullptr));
        label_3->setText(QApplication::translate("TestScreenShareSelectWindowDialog", "\350\257\267\351\200\211\346\213\251\347\252\227\345\217\243:", nullptr));
        btnStartScreenCapture->setText(QApplication::translate("TestScreenShareSelectWindowDialog", "\345\274\200\345\247\213\345\210\206\344\272\253", nullptr));
        btPauseScreenCapture->setText(QApplication::translate("TestScreenShareSelectWindowDialog", "\346\232\202\345\201\234\345\210\206\344\272\253", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestScreenShareSelectWindowDialog: public Ui_TestScreenShareSelectWindowDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTSCREENSHARESELECTWINDOWDIALOG_H
