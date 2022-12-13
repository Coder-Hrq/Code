/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QTabWidget *trtcApiExample;
    QWidget *baseApiExample;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *languageComboBox;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_36;
    QFrame *line_3;
    QLabel *label_13;
    QGridLayout *gridLayout;
    QLineEdit *userIdLineEdit;
    QLabel *label_5;
    QComboBox *appSceneComboBox;
    QLabel *sdkVersionLabel_11;
    QLineEdit *roomNumLineEdit;
    QLabel *label_6;
    QComboBox *userRoleComB;
    QLabel *sdkVersionLabel_12;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_16;
    QSpacerItem *horizontalSpacer_19;
    QPushButton *exitRoomButton;
    QSpacerItem *horizontalSpacer_17;
    QPushButton *enterRoomButton;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_18;
    QLabel *label_18;
    QSpacerItem *horizontalSpacer_20;
    QPushButton *pushButtonDeviceManager;
    QSpacerItem *horizontalSpacer_21;
    QFrame *line_13;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_24;
    QPushButton *pushButtonAudioTest;
    QSpacerItem *horizontalSpacer_22;
    QPushButton *pushButtonVideoTest;
    QSpacerItem *horizontalSpacer_23;
    QPushButton *btnNetworkChecker;
    QSpacerItem *horizontalSpacer_25;
    QFrame *line_4;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_27;
    QPushButton *pushButtonAudioSetting;
    QSpacerItem *horizontalSpacer_26;
    QPushButton *pushButtonVideoSetting;
    QSpacerItem *horizontalSpacer_28;
    QFrame *line_5;
    QLabel *label_15;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_29;
    QPushButton *cdnPublishBt;
    QSpacerItem *horizontalSpacer_30;
    QPushButton *mixStreamPublish;
    QSpacerItem *horizontalSpacer_31;
    QPushButton *pushButtonCdnPlayer;
    QSpacerItem *horizontalSpacer_32;
    QFrame *line_6;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_33;
    QLabel *label_14;
    QSpacerItem *horizontalSpacer_34;
    QPushButton *btScreenSharingSetting;
    QSpacerItem *horizontalSpacer_35;
    QWidget *advanceApiExample;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_19;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineetSubRoomId;
    QPushButton *btnEnterSubRoom;
    QFrame *line_11;
    QLabel *label_22;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout_4;
    QLineEdit *lineEtOtherRoomId;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEtOtherUserId;
    QPushButton *btnEnterOtherRoom;
    QFrame *line_12;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_21;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButtonAudioRecord;
    QSpacerItem *horizontalSpacer_6;
    QFrame *line_7;
    QLabel *label_16;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnStartBGMSetting;
    QSpacerItem *horizontalSpacer_3;
    QFrame *line_10;
    QLabel *label_20;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pushButtonBeautyWaterMark;
    QSpacerItem *horizontalSpacer_9;
    QFrame *line_8;
    QLabel *label_17;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *btnCustomCapture;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *btnCustomRender;
    QSpacerItem *horizontalSpacer_12;
    QFrame *line_9;
    QLabel *label_23;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer_13;
    QPushButton *pushButtonCustomMessage;
    QSpacerItem *horizontalSpacer_14;
    QPushButton *logSettingQbtn;
    QSpacerItem *horizontalSpacer_15;
    QFrame *line;
    QWidget *videoListView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1320, 800);
        MainWindow->setMinimumSize(QSize(1320, 800));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        trtcApiExample = new QTabWidget(centralwidget);
        trtcApiExample->setObjectName(QString::fromUtf8("trtcApiExample"));
        trtcApiExample->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(trtcApiExample->sizePolicy().hasHeightForWidth());
        trtcApiExample->setSizePolicy(sizePolicy1);
        trtcApiExample->setAutoFillBackground(false);
        trtcApiExample->setTabShape(QTabWidget::Rounded);
        trtcApiExample->setElideMode(Qt::ElideNone);
        trtcApiExample->setTabsClosable(false);
        baseApiExample = new QWidget();
        baseApiExample->setObjectName(QString::fromUtf8("baseApiExample"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(1);
        sizePolicy2.setHeightForWidth(baseApiExample->sizePolicy().hasHeightForWidth());
        baseApiExample->setSizePolicy(sizePolicy2);
        baseApiExample->setTabletTracking(true);
        baseApiExample->setAutoFillBackground(false);
        verticalLayout = new QVBoxLayout(baseApiExample);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        languageComboBox = new QComboBox(baseApiExample);
        languageComboBox->addItem(QString());
        languageComboBox->addItem(QString());
        languageComboBox->setObjectName(QString::fromUtf8("languageComboBox"));
        languageComboBox->setCurrentText(QString::fromUtf8("\347\256\200\344\275\223\344\270\255\346\226\207"));

        gridLayout_3->addWidget(languageComboBox, 0, 3, 1, 1);

        label_3 = new QLabel(baseApiExample);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 0, 1, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_8, 0, 2, 1, 1);

        horizontalSpacer_36 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_36, 0, 4, 1, 1);


        verticalLayout->addLayout(gridLayout_3);

        line_3 = new QFrame(baseApiExample);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_3);

        label_13 = new QLabel(baseApiExample);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy3);
        label_13->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_13);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetFixedSize);
        gridLayout->setHorizontalSpacing(0);
        userIdLineEdit = new QLineEdit(baseApiExample);
        userIdLineEdit->setObjectName(QString::fromUtf8("userIdLineEdit"));
        userIdLineEdit->setText(QString::fromUtf8("8888"));
        userIdLineEdit->setReadOnly(false);

        gridLayout->addWidget(userIdLineEdit, 0, 1, 1, 1);

        label_5 = new QLabel(baseApiExample);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy3.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(label_5, 2, 0, 1, 1, Qt::AlignLeft);

        appSceneComboBox = new QComboBox(baseApiExample);
        appSceneComboBox->addItem(QString());
        appSceneComboBox->addItem(QString());
        appSceneComboBox->addItem(QString());
        appSceneComboBox->addItem(QString());
        appSceneComboBox->setObjectName(QString::fromUtf8("appSceneComboBox"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(appSceneComboBox->sizePolicy().hasHeightForWidth());
        appSceneComboBox->setSizePolicy(sizePolicy4);

        gridLayout->addWidget(appSceneComboBox, 2, 1, 1, 1);

        sdkVersionLabel_11 = new QLabel(baseApiExample);
        sdkVersionLabel_11->setObjectName(QString::fromUtf8("sdkVersionLabel_11"));
        sizePolicy3.setHeightForWidth(sdkVersionLabel_11->sizePolicy().hasHeightForWidth());
        sdkVersionLabel_11->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(sdkVersionLabel_11, 0, 0, 1, 1, Qt::AlignLeft);

        roomNumLineEdit = new QLineEdit(baseApiExample);
        roomNumLineEdit->setObjectName(QString::fromUtf8("roomNumLineEdit"));
        roomNumLineEdit->setInputMethodHints(Qt::ImhDigitsOnly);
        roomNumLineEdit->setText(QString::fromUtf8("8888"));
        roomNumLineEdit->setReadOnly(false);
        roomNumLineEdit->setClearButtonEnabled(false);

        gridLayout->addWidget(roomNumLineEdit, 1, 1, 1, 1);

        label_6 = new QLabel(baseApiExample);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy3.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(label_6, 3, 0, 1, 1, Qt::AlignLeft);

        userRoleComB = new QComboBox(baseApiExample);
        userRoleComB->addItem(QString());
        userRoleComB->addItem(QString());
        userRoleComB->setObjectName(QString::fromUtf8("userRoleComB"));
        userRoleComB->setEnabled(false);
        sizePolicy4.setHeightForWidth(userRoleComB->sizePolicy().hasHeightForWidth());
        userRoleComB->setSizePolicy(sizePolicy4);
        userRoleComB->setAcceptDrops(false);
        userRoleComB->setToolTipDuration(3);

        gridLayout->addWidget(userRoleComB, 3, 1, 1, 1);

        sdkVersionLabel_12 = new QLabel(baseApiExample);
        sdkVersionLabel_12->setObjectName(QString::fromUtf8("sdkVersionLabel_12"));
        sizePolicy3.setHeightForWidth(sdkVersionLabel_12->sizePolicy().hasHeightForWidth());
        sdkVersionLabel_12->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(sdkVersionLabel_12, 1, 0, 1, 1, Qt::AlignLeft);

        gridLayout->setColumnStretch(0, 2);

        verticalLayout->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSpacer_16 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_16, 0, 0, 1, 1);

        horizontalSpacer_19 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_19, 0, 4, 1, 1);

        exitRoomButton = new QPushButton(baseApiExample);
        exitRoomButton->setObjectName(QString::fromUtf8("exitRoomButton"));
        exitRoomButton->setEnabled(false);
        sizePolicy3.setHeightForWidth(exitRoomButton->sizePolicy().hasHeightForWidth());
        exitRoomButton->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(exitRoomButton, 0, 3, 1, 1);

        horizontalSpacer_17 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_17, 0, 2, 1, 1);

        enterRoomButton = new QPushButton(baseApiExample);
        enterRoomButton->setObjectName(QString::fromUtf8("enterRoomButton"));
        enterRoomButton->setEnabled(true);
        sizePolicy3.setHeightForWidth(enterRoomButton->sizePolicy().hasHeightForWidth());
        enterRoomButton->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(enterRoomButton, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        line_2 = new QFrame(baseApiExample);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_18 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_18);

        label_18 = new QLabel(baseApiExample);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        sizePolicy3.setHeightForWidth(label_18->sizePolicy().hasHeightForWidth());
        label_18->setSizePolicy(sizePolicy3);
        label_18->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_18);

        horizontalSpacer_20 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_20);

        pushButtonDeviceManager = new QPushButton(baseApiExample);
        pushButtonDeviceManager->setObjectName(QString::fromUtf8("pushButtonDeviceManager"));
        pushButtonDeviceManager->setEnabled(false);
        sizePolicy3.setHeightForWidth(pushButtonDeviceManager->sizePolicy().hasHeightForWidth());
        pushButtonDeviceManager->setSizePolicy(sizePolicy3);

        horizontalLayout_4->addWidget(pushButtonDeviceManager);

        horizontalSpacer_21 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_21);


        verticalLayout->addLayout(horizontalLayout_4);

        line_13 = new QFrame(baseApiExample);
        line_13->setObjectName(QString::fromUtf8("line_13"));
        line_13->setFrameShape(QFrame::HLine);
        line_13->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_13);

        label_10 = new QLabel(baseApiExample);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy3.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy3);
        label_10->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_10);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_24 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_24);

        pushButtonAudioTest = new QPushButton(baseApiExample);
        pushButtonAudioTest->setObjectName(QString::fromUtf8("pushButtonAudioTest"));
        pushButtonAudioTest->setEnabled(true);
        sizePolicy3.setHeightForWidth(pushButtonAudioTest->sizePolicy().hasHeightForWidth());
        pushButtonAudioTest->setSizePolicy(sizePolicy3);

        horizontalLayout_5->addWidget(pushButtonAudioTest);

        horizontalSpacer_22 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_22);

        pushButtonVideoTest = new QPushButton(baseApiExample);
        pushButtonVideoTest->setObjectName(QString::fromUtf8("pushButtonVideoTest"));
        pushButtonVideoTest->setEnabled(true);
        sizePolicy3.setHeightForWidth(pushButtonVideoTest->sizePolicy().hasHeightForWidth());
        pushButtonVideoTest->setSizePolicy(sizePolicy3);

        horizontalLayout_5->addWidget(pushButtonVideoTest);

        horizontalSpacer_23 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_23);

        btnNetworkChecker = new QPushButton(baseApiExample);
        btnNetworkChecker->setObjectName(QString::fromUtf8("btnNetworkChecker"));
        btnNetworkChecker->setEnabled(true);
        sizePolicy3.setHeightForWidth(btnNetworkChecker->sizePolicy().hasHeightForWidth());
        btnNetworkChecker->setSizePolicy(sizePolicy3);

        horizontalLayout_5->addWidget(btnNetworkChecker);

        horizontalSpacer_25 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_25);


        verticalLayout->addLayout(horizontalLayout_5);

        line_4 = new QFrame(baseApiExample);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_4);

        label_11 = new QLabel(baseApiExample);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy3.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy3);
        label_11->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_11);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_27 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_27);

        pushButtonAudioSetting = new QPushButton(baseApiExample);
        pushButtonAudioSetting->setObjectName(QString::fromUtf8("pushButtonAudioSetting"));
        pushButtonAudioSetting->setEnabled(false);
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(pushButtonAudioSetting->sizePolicy().hasHeightForWidth());
        pushButtonAudioSetting->setSizePolicy(sizePolicy5);

        horizontalLayout_6->addWidget(pushButtonAudioSetting);

        horizontalSpacer_26 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_26);

        pushButtonVideoSetting = new QPushButton(baseApiExample);
        pushButtonVideoSetting->setObjectName(QString::fromUtf8("pushButtonVideoSetting"));
        pushButtonVideoSetting->setEnabled(false);
        sizePolicy3.setHeightForWidth(pushButtonVideoSetting->sizePolicy().hasHeightForWidth());
        pushButtonVideoSetting->setSizePolicy(sizePolicy3);

        horizontalLayout_6->addWidget(pushButtonVideoSetting);

        horizontalSpacer_28 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_28);


        verticalLayout->addLayout(horizontalLayout_6);

        line_5 = new QFrame(baseApiExample);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_5);

        label_15 = new QLabel(baseApiExample);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        sizePolicy3.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy3);
        label_15->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_15);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_29 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_29);

        cdnPublishBt = new QPushButton(baseApiExample);
        cdnPublishBt->setObjectName(QString::fromUtf8("cdnPublishBt"));
        cdnPublishBt->setEnabled(false);
        sizePolicy3.setHeightForWidth(cdnPublishBt->sizePolicy().hasHeightForWidth());
        cdnPublishBt->setSizePolicy(sizePolicy3);

        horizontalLayout_7->addWidget(cdnPublishBt);

        horizontalSpacer_30 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_30);

        mixStreamPublish = new QPushButton(baseApiExample);
        mixStreamPublish->setObjectName(QString::fromUtf8("mixStreamPublish"));
        mixStreamPublish->setEnabled(false);
        sizePolicy3.setHeightForWidth(mixStreamPublish->sizePolicy().hasHeightForWidth());
        mixStreamPublish->setSizePolicy(sizePolicy3);

        horizontalLayout_7->addWidget(mixStreamPublish);

        horizontalSpacer_31 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_31);

        pushButtonCdnPlayer = new QPushButton(baseApiExample);
        pushButtonCdnPlayer->setObjectName(QString::fromUtf8("pushButtonCdnPlayer"));
        pushButtonCdnPlayer->setEnabled(true);
        sizePolicy3.setHeightForWidth(pushButtonCdnPlayer->sizePolicy().hasHeightForWidth());
        pushButtonCdnPlayer->setSizePolicy(sizePolicy3);

        horizontalLayout_7->addWidget(pushButtonCdnPlayer);

        horizontalSpacer_32 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_32);


        verticalLayout->addLayout(horizontalLayout_7);

        line_6 = new QFrame(baseApiExample);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_6);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer_33 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_33);

        label_14 = new QLabel(baseApiExample);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        sizePolicy5.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy5);
        label_14->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_8->addWidget(label_14);

        horizontalSpacer_34 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_34);

        btScreenSharingSetting = new QPushButton(baseApiExample);
        btScreenSharingSetting->setObjectName(QString::fromUtf8("btScreenSharingSetting"));
        btScreenSharingSetting->setEnabled(false);
        sizePolicy5.setHeightForWidth(btScreenSharingSetting->sizePolicy().hasHeightForWidth());
        btScreenSharingSetting->setSizePolicy(sizePolicy5);

        horizontalLayout_8->addWidget(btScreenSharingSetting);

        horizontalSpacer_35 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_35);


        verticalLayout->addLayout(horizontalLayout_8);

        trtcApiExample->addTab(baseApiExample, QString());
        advanceApiExample = new QWidget();
        advanceApiExample->setObjectName(QString::fromUtf8("advanceApiExample"));
        verticalLayout_2 = new QVBoxLayout(advanceApiExample);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_19 = new QLabel(advanceApiExample);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        sizePolicy3.setHeightForWidth(label_19->sizePolicy().hasHeightForWidth());
        label_19->setSizePolicy(sizePolicy3);
        label_19->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_19);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lineetSubRoomId = new QLineEdit(advanceApiExample);
        lineetSubRoomId->setObjectName(QString::fromUtf8("lineetSubRoomId"));
        sizePolicy4.setHeightForWidth(lineetSubRoomId->sizePolicy().hasHeightForWidth());
        lineetSubRoomId->setSizePolicy(sizePolicy4);
        lineetSubRoomId->setInputMethodHints(Qt::ImhDigitsOnly);
        lineetSubRoomId->setText(QString::fromUtf8(""));
        lineetSubRoomId->setReadOnly(false);
        lineetSubRoomId->setClearButtonEnabled(false);

        horizontalLayout_3->addWidget(lineetSubRoomId);

        btnEnterSubRoom = new QPushButton(advanceApiExample);
        btnEnterSubRoom->setObjectName(QString::fromUtf8("btnEnterSubRoom"));
        btnEnterSubRoom->setEnabled(false);
        sizePolicy3.setHeightForWidth(btnEnterSubRoom->sizePolicy().hasHeightForWidth());
        btnEnterSubRoom->setSizePolicy(sizePolicy3);

        horizontalLayout_3->addWidget(btnEnterSubRoom);

        horizontalLayout_3->setStretch(0, 4);
        horizontalLayout_3->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalLayout_3);

        line_11 = new QFrame(advanceApiExample);
        line_11->setObjectName(QString::fromUtf8("line_11"));
        line_11->setFrameShape(QFrame::HLine);
        line_11->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_11);

        label_22 = new QLabel(advanceApiExample);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        sizePolicy3.setHeightForWidth(label_22->sizePolicy().hasHeightForWidth());
        label_22->setSizePolicy(sizePolicy3);
        label_22->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_22);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setSizeConstraint(QLayout::SetNoConstraint);
        lineEtOtherRoomId = new QLineEdit(advanceApiExample);
        lineEtOtherRoomId->setObjectName(QString::fromUtf8("lineEtOtherRoomId"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(3);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(lineEtOtherRoomId->sizePolicy().hasHeightForWidth());
        lineEtOtherRoomId->setSizePolicy(sizePolicy6);
        lineEtOtherRoomId->setInputMethodHints(Qt::ImhDigitsOnly);
        lineEtOtherRoomId->setText(QString::fromUtf8(""));
        lineEtOtherRoomId->setReadOnly(false);
        lineEtOtherRoomId->setClearButtonEnabled(false);

        gridLayout_4->addWidget(lineEtOtherRoomId, 1, 1, 1, 2);

        label = new QLabel(advanceApiExample);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(2);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy7);

        gridLayout_4->addWidget(label, 0, 0, 1, 1, Qt::AlignLeft);

        label_2 = new QLabel(advanceApiExample);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy7.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy7);

        gridLayout_4->addWidget(label_2, 1, 0, 1, 1, Qt::AlignLeft);

        lineEtOtherUserId = new QLineEdit(advanceApiExample);
        lineEtOtherUserId->setObjectName(QString::fromUtf8("lineEtOtherUserId"));
        sizePolicy6.setHeightForWidth(lineEtOtherUserId->sizePolicy().hasHeightForWidth());
        lineEtOtherUserId->setSizePolicy(sizePolicy6);
        lineEtOtherUserId->setInputMethodHints(Qt::ImhDigitsOnly);
        lineEtOtherUserId->setText(QString::fromUtf8(""));
        lineEtOtherUserId->setReadOnly(false);
        lineEtOtherUserId->setClearButtonEnabled(false);

        gridLayout_4->addWidget(lineEtOtherUserId, 0, 1, 1, 2);

        btnEnterOtherRoom = new QPushButton(advanceApiExample);
        btnEnterOtherRoom->setObjectName(QString::fromUtf8("btnEnterOtherRoom"));
        btnEnterOtherRoom->setEnabled(false);
        sizePolicy5.setHeightForWidth(btnEnterOtherRoom->sizePolicy().hasHeightForWidth());
        btnEnterOtherRoom->setSizePolicy(sizePolicy5);
        btnEnterOtherRoom->setContextMenuPolicy(Qt::DefaultContextMenu);
        btnEnterOtherRoom->setLayoutDirection(Qt::LeftToRight);

        gridLayout_4->addWidget(btnEnterOtherRoom, 3, 0, 1, 3, Qt::AlignHCenter);


        horizontalLayout_2->addLayout(gridLayout_4);


        verticalLayout_2->addLayout(horizontalLayout_2);

        line_12 = new QFrame(advanceApiExample);
        line_12->setObjectName(QString::fromUtf8("line_12"));
        line_12->setFrameShape(QFrame::HLine);
        line_12->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_12);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_4);

        label_21 = new QLabel(advanceApiExample);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        sizePolicy5.setHeightForWidth(label_21->sizePolicy().hasHeightForWidth());
        label_21->setSizePolicy(sizePolicy5);
        label_21->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(label_21);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_5);

        pushButtonAudioRecord = new QPushButton(advanceApiExample);
        pushButtonAudioRecord->setObjectName(QString::fromUtf8("pushButtonAudioRecord"));
        pushButtonAudioRecord->setEnabled(false);
        sizePolicy5.setHeightForWidth(pushButtonAudioRecord->sizePolicy().hasHeightForWidth());
        pushButtonAudioRecord->setSizePolicy(sizePolicy5);

        horizontalLayout_9->addWidget(pushButtonAudioRecord);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_6);


        verticalLayout_2->addLayout(horizontalLayout_9);

        line_7 = new QFrame(advanceApiExample);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_7);

        label_16 = new QLabel(advanceApiExample);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        sizePolicy3.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy3);
        label_16->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_16);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer);

        btnStartBGMSetting = new QPushButton(advanceApiExample);
        btnStartBGMSetting->setObjectName(QString::fromUtf8("btnStartBGMSetting"));
        btnStartBGMSetting->setEnabled(false);
        sizePolicy5.setHeightForWidth(btnStartBGMSetting->sizePolicy().hasHeightForWidth());
        btnStartBGMSetting->setSizePolicy(sizePolicy5);

        horizontalLayout_10->addWidget(btnStartBGMSetting);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout_10);

        line_10 = new QFrame(advanceApiExample);
        line_10->setObjectName(QString::fromUtf8("line_10"));
        line_10->setFrameShape(QFrame::HLine);
        line_10->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_10);

        label_20 = new QLabel(advanceApiExample);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        sizePolicy3.setHeightForWidth(label_20->sizePolicy().hasHeightForWidth());
        label_20->setSizePolicy(sizePolicy3);
        label_20->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_20);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_7);

        pushButtonBeautyWaterMark = new QPushButton(advanceApiExample);
        pushButtonBeautyWaterMark->setObjectName(QString::fromUtf8("pushButtonBeautyWaterMark"));
        pushButtonBeautyWaterMark->setEnabled(false);
        sizePolicy5.setHeightForWidth(pushButtonBeautyWaterMark->sizePolicy().hasHeightForWidth());
        pushButtonBeautyWaterMark->setSizePolicy(sizePolicy5);

        horizontalLayout_11->addWidget(pushButtonBeautyWaterMark);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_9);


        verticalLayout_2->addLayout(horizontalLayout_11);

        line_8 = new QFrame(advanceApiExample);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_8);

        label_17 = new QLabel(advanceApiExample);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        sizePolicy3.setHeightForWidth(label_17->sizePolicy().hasHeightForWidth());
        label_17->setSizePolicy(sizePolicy3);
        label_17->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_17);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_10);

        btnCustomCapture = new QPushButton(advanceApiExample);
        btnCustomCapture->setObjectName(QString::fromUtf8("btnCustomCapture"));
        btnCustomCapture->setEnabled(false);
        sizePolicy5.setHeightForWidth(btnCustomCapture->sizePolicy().hasHeightForWidth());
        btnCustomCapture->setSizePolicy(sizePolicy5);

        horizontalLayout_12->addWidget(btnCustomCapture);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_11);

        btnCustomRender = new QPushButton(advanceApiExample);
        btnCustomRender->setObjectName(QString::fromUtf8("btnCustomRender"));
        btnCustomRender->setEnabled(false);
        sizePolicy5.setHeightForWidth(btnCustomRender->sizePolicy().hasHeightForWidth());
        btnCustomRender->setSizePolicy(sizePolicy5);

        horizontalLayout_12->addWidget(btnCustomRender);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_12);


        verticalLayout_2->addLayout(horizontalLayout_12);

        line_9 = new QFrame(advanceApiExample);
        line_9->setObjectName(QString::fromUtf8("line_9"));
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_9);

        label_23 = new QLabel(advanceApiExample);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        sizePolicy3.setHeightForWidth(label_23->sizePolicy().hasHeightForWidth());
        label_23->setSizePolicy(sizePolicy3);
        label_23->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_23);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_13);

        pushButtonCustomMessage = new QPushButton(advanceApiExample);
        pushButtonCustomMessage->setObjectName(QString::fromUtf8("pushButtonCustomMessage"));
        pushButtonCustomMessage->setEnabled(false);
        sizePolicy5.setHeightForWidth(pushButtonCustomMessage->sizePolicy().hasHeightForWidth());
        pushButtonCustomMessage->setSizePolicy(sizePolicy5);

        horizontalLayout_13->addWidget(pushButtonCustomMessage);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_14);

        logSettingQbtn = new QPushButton(advanceApiExample);
        logSettingQbtn->setObjectName(QString::fromUtf8("logSettingQbtn"));
        logSettingQbtn->setEnabled(true);
        sizePolicy5.setHeightForWidth(logSettingQbtn->sizePolicy().hasHeightForWidth());
        logSettingQbtn->setSizePolicy(sizePolicy5);
        logSettingQbtn->setCheckable(false);

        horizontalLayout_13->addWidget(logSettingQbtn);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_15);


        verticalLayout_2->addLayout(horizontalLayout_13);

        trtcApiExample->addTab(advanceApiExample, QString());

        horizontalLayout->addWidget(trtcApiExample);

        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        QSizePolicy sizePolicy8(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy8);
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        videoListView = new QWidget(centralwidget);
        videoListView->setObjectName(QString::fromUtf8("videoListView"));
        QSizePolicy sizePolicy9(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy9.setHorizontalStretch(3);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(videoListView->sizePolicy().hasHeightForWidth());
        videoListView->setSizePolicy(sizePolicy9);
        videoListView->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(videoListView);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1320, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        trtcApiExample->setCurrentIndex(0);
        userRoleComB->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "TrtcApiExample", nullptr));
        languageComboBox->setItemText(0, QApplication::translate("MainWindow", "\347\256\200\344\275\223\344\270\255\346\226\207", nullptr));
        languageComboBox->setItemText(1, QApplication::translate("MainWindow", "English", nullptr));

        label_3->setText(QApplication::translate("MainWindow", "\350\257\255\350\250\200\350\256\276\347\275\256", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "\345\237\272\347\241\200\345\234\272\346\231\257", nullptr));
        userIdLineEdit->setPlaceholderText(QApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267ID", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "\345\234\272\346\231\257\357\274\232", nullptr));
        appSceneComboBox->setItemText(0, QApplication::translate("MainWindow", "\350\247\206\351\242\221\351\200\232\350\257\235\345\234\272\346\231\257", nullptr));
        appSceneComboBox->setItemText(1, QApplication::translate("MainWindow", "\350\247\206\351\242\221\344\272\222\345\212\250\347\233\264\346\222\255", nullptr));
        appSceneComboBox->setItemText(2, QApplication::translate("MainWindow", "\350\257\255\351\237\263\351\200\232\350\257\235\345\234\272\346\231\257", nullptr));
        appSceneComboBox->setItemText(3, QApplication::translate("MainWindow", "\350\257\255\351\237\263\344\272\222\345\212\250\347\233\264\346\222\255", nullptr));

        sdkVersionLabel_11->setText(QApplication::translate("MainWindow", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        roomNumLineEdit->setPlaceholderText(QApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\346\210\277\351\227\264\345\217\267", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "\347\233\264\346\222\255\350\247\222\350\211\262\357\274\232", nullptr));
        userRoleComB->setItemText(0, QApplication::translate("MainWindow", "\344\270\273\346\222\255", nullptr));
        userRoleComB->setItemText(1, QApplication::translate("MainWindow", "\345\220\254\344\274\227", nullptr));

#ifndef QT_NO_TOOLTIP
        userRoleComB->setToolTip(QApplication::translate("MainWindow", "\347\233\264\346\222\255\345\234\272\346\231\257\345\277\205\351\200\211\357\274\214\351\235\236\347\233\264\346\222\255\346\250\241\345\274\217 \344\270\215\345\217\257\347\224\250", nullptr));
#endif // QT_NO_TOOLTIP
        sdkVersionLabel_12->setText(QApplication::translate("MainWindow", "\346\210\277\351\227\264\345\217\267\357\274\232", nullptr));
        exitRoomButton->setText(QApplication::translate("MainWindow", " \351\200\200\346\210\277", nullptr));
        enterRoomButton->setText(QApplication::translate("MainWindow", "\350\277\233\346\210\277", nullptr));
        label_18->setText(QApplication::translate("MainWindow", "\350\256\276\345\244\207\347\256\241\347\220\206", nullptr));
        pushButtonDeviceManager->setText(QApplication::translate("MainWindow", " \350\256\276\345\244\207\351\200\211\346\213\251", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "\350\256\276\345\244\207\346\243\200\346\265\213", nullptr));
        pushButtonAudioTest->setText(QApplication::translate("MainWindow", "\345\243\260\351\237\263\346\243\200\346\265\213", nullptr));
        pushButtonVideoTest->setText(QApplication::translate("MainWindow", "\350\247\206\351\242\221\346\243\200\346\265\213", nullptr));
#ifndef QT_NO_TOOLTIP
        btnNetworkChecker->setToolTip(QApplication::translate("MainWindow", "\350\257\267\345\205\210\346\223\215\344\275\234\350\277\233\346\210\277\351\227\264", nullptr));
#endif // QT_NO_TOOLTIP
        btnNetworkChecker->setText(QApplication::translate("MainWindow", "\347\275\221\347\273\234\346\265\213\351\200\237", nullptr));
        label_11->setText(QApplication::translate("MainWindow", " \351\237\263\350\247\206\351\242\221\350\256\276\347\275\256", nullptr));
        pushButtonAudioSetting->setText(QApplication::translate("MainWindow", "\351\237\263\351\242\221\350\256\276\347\275\256", nullptr));
        pushButtonVideoSetting->setText(QApplication::translate("MainWindow", "\350\247\206\351\242\221\350\256\276\347\275\256", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "CDN\345\217\221\345\270\203 & \346\267\267\346\265\201", nullptr));
#ifndef QT_NO_TOOLTIP
        cdnPublishBt->setToolTip(QApplication::translate("MainWindow", "\350\257\267\345\205\210\346\223\215\344\275\234\350\277\233\346\210\277\351\227\264", nullptr));
#endif // QT_NO_TOOLTIP
        cdnPublishBt->setText(QApplication::translate("MainWindow", " CDN\345\217\221\345\270\203", nullptr));
#ifndef QT_NO_TOOLTIP
        mixStreamPublish->setToolTip(QApplication::translate("MainWindow", "\350\257\267\345\205\210\346\223\215\344\275\234\350\277\233 \346\210\277\351\227\264", nullptr));
#endif // QT_NO_TOOLTIP
        mixStreamPublish->setText(QApplication::translate("MainWindow", "\346\267\267\346\265\201\345\217\221\345\270\203", nullptr));
        pushButtonCdnPlayer->setText(QApplication::translate("MainWindow", " CDN\350\247\202\347\234\213", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "\345\261\217\345\271\225\345\210\206\344\272\253", nullptr));
        btScreenSharingSetting->setText(QApplication::translate("MainWindow", "\345\261\217\345\271\225\345\210\206\344\272\253\350\256\276\347\275\256", nullptr));
        trtcApiExample->setTabText(trtcApiExample->indexOf(baseApiExample), QApplication::translate("MainWindow", "\345\237\272\347\241\200", nullptr));
        label_19->setText(QApplication::translate("MainWindow", "\345\255\220\346\210\277\351\227\264", nullptr));
        lineetSubRoomId->setPlaceholderText(QApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\345\255\220\346\210\277\351\227\264\345\217\267", nullptr));
        btnEnterSubRoom->setText(QApplication::translate("MainWindow", "\350\277\233\346\210\277", nullptr));
        label_22->setText(QApplication::translate("MainWindow", "\350\267\250\346\210\277PK", nullptr));
        lineEtOtherRoomId->setPlaceholderText(QApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\350\277\236\351\272\246\346\210\277\351\227\264\345\217\267", nullptr));
        label->setText(QApplication::translate("MainWindow", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\346\210\277\351\227\264\345\217\267", nullptr));
        lineEtOtherUserId->setPlaceholderText(QApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\350\277\236\351\272\246\347\224\250\346\210\267\345\220\215", nullptr));
        btnEnterOtherRoom->setText(QApplication::translate("MainWindow", "\350\277\233\346\210\277", nullptr));
        label_21->setText(QApplication::translate("MainWindow", "\351\237\263\351\242\221\345\275\225\345\210\266  ", nullptr));
        pushButtonAudioRecord->setText(QApplication::translate("MainWindow", "\351\237\263\351\242\221\345\275\225\345\210\266", nullptr));
        label_16->setText(QApplication::translate("MainWindow", "\350\203\214\346\231\257&\351\237\263\346\225\210", nullptr));
        btnStartBGMSetting->setText(QApplication::translate("MainWindow", "\351\237\263\346\225\210\347\256\241\347\220\206", nullptr));
        label_20->setText(QApplication::translate("MainWindow", "\347\276\216\351\242\234&\346\260\264\345\215\260", nullptr));
        pushButtonBeautyWaterMark->setText(QApplication::translate("MainWindow", "\347\211\271\346\225\210\350\256\276\347\275\256", nullptr));
        label_17->setText(QApplication::translate("MainWindow", "\350\207\252\345\256\232\344\271\211 \351\207\207\351\233\206&\346\270\262\346\237\223", nullptr));
        btnCustomCapture->setText(QApplication::translate("MainWindow", "\350\207\252\345\256\232\344\271\211\351\207\207\351\233\206", nullptr));
        btnCustomRender->setText(QApplication::translate("MainWindow", "\350\207\252\345\256\232\344\271\211\346\270\262\346\237\223", nullptr));
        label_23->setText(QApplication::translate("MainWindow", "\345\205\266\344\273\226", nullptr));
        pushButtonCustomMessage->setText(QApplication::translate("MainWindow", "\350\207\252\345\256\232\344\271\211\346\266\210\346\201\257", nullptr));
        logSettingQbtn->setText(QApplication::translate("MainWindow", "  \346\227\245\345\277\227\350\256\276\347\275\256  ", nullptr));
        trtcApiExample->setTabText(trtcApiExample->indexOf(advanceApiExample), QApplication::translate("MainWindow", " \350\277\233\351\230\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
