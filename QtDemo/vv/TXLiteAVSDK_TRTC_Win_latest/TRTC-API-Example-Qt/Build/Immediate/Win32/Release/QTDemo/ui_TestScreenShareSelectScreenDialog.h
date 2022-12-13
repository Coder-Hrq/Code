/********************************************************************************
** Form generated from reading UI file 'TestScreenShareSelectScreenDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTSCREENSHARESELECTSCREENDIALOG_H
#define UI_TESTSCREENSHARESELECTSCREENDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestScreenShareSelectScreenDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QWidget *screenSharedPreview;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnStartScreenCapture;
    QPushButton *btnPauseScreenCapture;
    QScrollArea *scrollArea;
    QWidget *widgetScreenWindows;

    void setupUi(QDialog *TestScreenShareSelectScreenDialog)
    {
        if (TestScreenShareSelectScreenDialog->objectName().isEmpty())
            TestScreenShareSelectScreenDialog->setObjectName(QString::fromUtf8("TestScreenShareSelectScreenDialog"));
        TestScreenShareSelectScreenDialog->resize(1276, 720);
        QFont font;
        font.setPointSize(14);
        TestScreenShareSelectScreenDialog->setFont(font);
        TestScreenShareSelectScreenDialog->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(TestScreenShareSelectScreenDialog);
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(TestScreenShareSelectScreenDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
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

        screenSharedPreview = new QWidget(TestScreenShareSelectScreenDialog);
        screenSharedPreview->setObjectName(QString::fromUtf8("screenSharedPreview"));
        screenSharedPreview->setFont(font);
        screenSharedPreview->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(screenSharedPreview);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(TestScreenShareSelectScreenDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setFont(font);

        horizontalLayout->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnStartScreenCapture = new QPushButton(TestScreenShareSelectScreenDialog);
        btnStartScreenCapture->setObjectName(QString::fromUtf8("btnStartScreenCapture"));
        sizePolicy1.setHeightForWidth(btnStartScreenCapture->sizePolicy().hasHeightForWidth());
        btnStartScreenCapture->setSizePolicy(sizePolicy1);
        btnStartScreenCapture->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(btnStartScreenCapture);

        btnPauseScreenCapture = new QPushButton(TestScreenShareSelectScreenDialog);
        btnPauseScreenCapture->setObjectName(QString::fromUtf8("btnPauseScreenCapture"));
        btnPauseScreenCapture->setEnabled(false);
        sizePolicy1.setHeightForWidth(btnPauseScreenCapture->sizePolicy().hasHeightForWidth());
        btnPauseScreenCapture->setSizePolicy(sizePolicy1);
        btnPauseScreenCapture->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(btnPauseScreenCapture);


        verticalLayout->addLayout(horizontalLayout);

        scrollArea = new QScrollArea(TestScreenShareSelectScreenDialog);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy2);
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        scrollArea->setWidgetResizable(false);
        widgetScreenWindows = new QWidget();
        widgetScreenWindows->setObjectName(QString::fromUtf8("widgetScreenWindows"));
        widgetScreenWindows->setGeometry(QRect(0, 0, 1060, 466));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(1);
        sizePolicy3.setHeightForWidth(widgetScreenWindows->sizePolicy().hasHeightForWidth());
        widgetScreenWindows->setSizePolicy(sizePolicy3);
        scrollArea->setWidget(widgetScreenWindows);

        verticalLayout->addWidget(scrollArea);

        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(3, 3);

        retranslateUi(TestScreenShareSelectScreenDialog);

        QMetaObject::connectSlotsByName(TestScreenShareSelectScreenDialog);
    } // setupUi

    void retranslateUi(QDialog *TestScreenShareSelectScreenDialog)
    {
        TestScreenShareSelectScreenDialog->setWindowTitle(QApplication::translate("TestScreenShareSelectScreenDialog", "\345\261\217\345\271\225\345\210\206\344\272\253", nullptr));
        label_2->setText(QApplication::translate("TestScreenShareSelectScreenDialog", "\345\261\217\345\271\225\345\210\206\344\272\253", nullptr));
        label_3->setText(QApplication::translate("TestScreenShareSelectScreenDialog", "\350\257\267\351\200\211\346\213\251\345\261\217\345\271\225:", nullptr));
        btnStartScreenCapture->setText(QApplication::translate("TestScreenShareSelectScreenDialog", "\345\274\200\345\247\213\345\210\206\344\272\253", nullptr));
        btnPauseScreenCapture->setText(QApplication::translate("TestScreenShareSelectScreenDialog", "\346\232\202\345\201\234\345\210\206\344\272\253", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestScreenShareSelectScreenDialog: public Ui_TestScreenShareSelectScreenDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTSCREENSHARESELECTSCREENDIALOG_H
