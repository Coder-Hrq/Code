/********************************************************************************
** Form generated from reading UI file 'TestUserVideoGroup.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTUSERVIDEOGROUP_H
#define UI_TESTUSERVIDEOGROUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestUserVideoGroup
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_37;
    QComboBox *networkModeCb;
    QCheckBox *muteAllRemoteAudioCb;
    QCheckBox *muteAllRemoteVideoCb;
    QCheckBox *openDashBoardCb;
    QCheckBox *checkBoxVolumeEvaluation;
    QPushButton *pushButtonShowRemoteScreenShare;
    QSpacerItem *horizontalSpacer;
    QScrollArea *scrollVeiw;
    QWidget *mainVideoPlaceHolder;

    void setupUi(QWidget *TestUserVideoGroup)
    {
        if (TestUserVideoGroup->objectName().isEmpty())
            TestUserVideoGroup->setObjectName(QString::fromUtf8("TestUserVideoGroup"));
        TestUserVideoGroup->resize(962, 782);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(TestUserVideoGroup->sizePolicy().hasHeightForWidth());
        TestUserVideoGroup->setSizePolicy(sizePolicy);
        TestUserVideoGroup->setLayoutDirection(Qt::RightToLeft);
        TestUserVideoGroup->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_2 = new QVBoxLayout(TestUserVideoGroup);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame = new QFrame(TestUserVideoGroup);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setLayoutDirection(Qt::LeftToRight);
        frame->setAutoFillBackground(false);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label_37 = new QLabel(frame);
        label_37->setObjectName(QString::fromUtf8("label_37"));

        horizontalLayout->addWidget(label_37);

        networkModeCb = new QComboBox(frame);
        networkModeCb->addItem(QString());
        networkModeCb->addItem(QString());
        networkModeCb->setObjectName(QString::fromUtf8("networkModeCb"));
        networkModeCb->setMouseTracking(true);
        networkModeCb->setStyleSheet(QString::fromUtf8(""));
        networkModeCb->setFrame(false);

        horizontalLayout->addWidget(networkModeCb);

        muteAllRemoteAudioCb = new QCheckBox(frame);
        muteAllRemoteAudioCb->setObjectName(QString::fromUtf8("muteAllRemoteAudioCb"));
        muteAllRemoteAudioCb->setEnabled(true);

        horizontalLayout->addWidget(muteAllRemoteAudioCb);

        muteAllRemoteVideoCb = new QCheckBox(frame);
        muteAllRemoteVideoCb->setObjectName(QString::fromUtf8("muteAllRemoteVideoCb"));
        muteAllRemoteVideoCb->setEnabled(true);

        horizontalLayout->addWidget(muteAllRemoteVideoCb);

        openDashBoardCb = new QCheckBox(frame);
        openDashBoardCb->setObjectName(QString::fromUtf8("openDashBoardCb"));
        openDashBoardCb->setEnabled(true);

        horizontalLayout->addWidget(openDashBoardCb);

        checkBoxVolumeEvaluation = new QCheckBox(frame);
        checkBoxVolumeEvaluation->setObjectName(QString::fromUtf8("checkBoxVolumeEvaluation"));
        checkBoxVolumeEvaluation->setChecked(true);

        horizontalLayout->addWidget(checkBoxVolumeEvaluation);

        pushButtonShowRemoteScreenShare = new QPushButton(frame);
        pushButtonShowRemoteScreenShare->setObjectName(QString::fromUtf8("pushButtonShowRemoteScreenShare"));
        pushButtonShowRemoteScreenShare->setEnabled(false);

        horizontalLayout->addWidget(pushButtonShowRemoteScreenShare);

        horizontalSpacer = new QSpacerItem(70, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addWidget(frame);

        scrollVeiw = new QScrollArea(TestUserVideoGroup);
        scrollVeiw->setObjectName(QString::fromUtf8("scrollVeiw"));
        sizePolicy.setHeightForWidth(scrollVeiw->sizePolicy().hasHeightForWidth());
        scrollVeiw->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(14);
        font.setKerning(true);
        scrollVeiw->setFont(font);
        scrollVeiw->setLayoutDirection(Qt::LeftToRight);
        scrollVeiw->setFrameShape(QFrame::NoFrame);
        scrollVeiw->setLineWidth(0);
        scrollVeiw->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        scrollVeiw->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        scrollVeiw->setWidgetResizable(false);
        mainVideoPlaceHolder = new QWidget();
        mainVideoPlaceHolder->setObjectName(QString::fromUtf8("mainVideoPlaceHolder"));
        mainVideoPlaceHolder->setGeometry(QRect(0, 0, 895, 699));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(1);
        sizePolicy2.setHeightForWidth(mainVideoPlaceHolder->sizePolicy().hasHeightForWidth());
        mainVideoPlaceHolder->setSizePolicy(sizePolicy2);
        scrollVeiw->setWidget(mainVideoPlaceHolder);

        verticalLayout_2->addWidget(scrollVeiw);


        retranslateUi(TestUserVideoGroup);

        QMetaObject::connectSlotsByName(TestUserVideoGroup);
    } // setupUi

    void retranslateUi(QWidget *TestUserVideoGroup)
    {
        TestUserVideoGroup->setWindowTitle(QApplication::translate("TestUserVideoGroup", "Form", nullptr));
        label_37->setText(QApplication::translate("TestUserVideoGroup", "\347\275\221\347\273\234\346\250\241\345\274\217", nullptr));
        networkModeCb->setItemText(0, QApplication::translate("TestUserVideoGroup", "\344\274\230\345\205\210\346\270\205\346\231\260", nullptr));
        networkModeCb->setItemText(1, QApplication::translate("TestUserVideoGroup", "\344\274\230\345\205\210\346\265\201\347\225\205", nullptr));

        muteAllRemoteAudioCb->setText(QApplication::translate("TestUserVideoGroup", "\350\277\234\347\253\257\345\205\250\351\203\250\351\235\231\351\237\263", nullptr));
        muteAllRemoteVideoCb->setText(QApplication::translate("TestUserVideoGroup", "\350\277\234\347\253\257\345\205\250\351\203\250\351\235\231\347\224\273", nullptr));
        openDashBoardCb->setText(QApplication::translate("TestUserVideoGroup", "\344\273\252\350\241\250\347\233\230", nullptr));
        checkBoxVolumeEvaluation->setText(QApplication::translate("TestUserVideoGroup", "\345\274\200\345\220\257/\345\205\263\351\227\255\351\237\263\351\207\217\346\237\261", nullptr));
        pushButtonShowRemoteScreenShare->setText(QApplication::translate("TestUserVideoGroup", "\346\230\276\347\244\272\345\261\217\345\271\225\345\210\206\344\272\253", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestUserVideoGroup: public Ui_TestUserVideoGroup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTUSERVIDEOGROUP_H
