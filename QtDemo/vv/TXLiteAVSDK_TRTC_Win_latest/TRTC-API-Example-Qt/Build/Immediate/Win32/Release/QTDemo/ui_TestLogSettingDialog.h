/********************************************************************************
** Form generated from reading UI file 'TestLogSettingDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTLOGSETTINGDIALOG_H
#define UI_TESTLOGSETTINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TestLogSettingDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPushButton *selectLogOutputDirBtn;
    QLineEdit *logDirPathLe;
    QLabel *sdkVersionLabel;
    QComboBox *setLogLevelCb;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QCheckBox *logCompressCb;
    QCheckBox *setConsoleEnabledCb;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *TestLogSettingDialog)
    {
        if (TestLogSettingDialog->objectName().isEmpty())
            TestLogSettingDialog->setObjectName(QString::fromUtf8("TestLogSettingDialog"));
        TestLogSettingDialog->resize(510, 115);
        TestLogSettingDialog->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(TestLogSettingDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        selectLogOutputDirBtn = new QPushButton(TestLogSettingDialog);
        selectLogOutputDirBtn->setObjectName(QString::fromUtf8("selectLogOutputDirBtn"));
        QFont font;
        font.setPointSize(14);
        selectLogOutputDirBtn->setFont(font);
        selectLogOutputDirBtn->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(selectLogOutputDirBtn, 0, 0, 1, 1);

        logDirPathLe = new QLineEdit(TestLogSettingDialog);
        logDirPathLe->setObjectName(QString::fromUtf8("logDirPathLe"));
        logDirPathLe->setEnabled(false);
        logDirPathLe->setFont(font);
        logDirPathLe->setText(QString::fromUtf8(""));

        gridLayout->addWidget(logDirPathLe, 0, 1, 1, 1);

        sdkVersionLabel = new QLabel(TestLogSettingDialog);
        sdkVersionLabel->setObjectName(QString::fromUtf8("sdkVersionLabel"));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        sdkVersionLabel->setFont(font1);

        gridLayout->addWidget(sdkVersionLabel, 1, 0, 1, 1);

        setLogLevelCb = new QComboBox(TestLogSettingDialog);
        setLogLevelCb->addItem(QString());
        setLogLevelCb->addItem(QString());
        setLogLevelCb->addItem(QString());
        setLogLevelCb->addItem(QString());
        setLogLevelCb->addItem(QString());
        setLogLevelCb->addItem(QString());
        setLogLevelCb->addItem(QString());
        setLogLevelCb->setObjectName(QString::fromUtf8("setLogLevelCb"));
        setLogLevelCb->setEnabled(true);
        setLogLevelCb->setFont(font);
        setLogLevelCb->setMaxVisibleItems(7);

        gridLayout->addWidget(setLogLevelCb, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        logCompressCb = new QCheckBox(TestLogSettingDialog);
        logCompressCb->setObjectName(QString::fromUtf8("logCompressCb"));
        logCompressCb->setEnabled(false);
        logCompressCb->setFont(font);
        logCompressCb->setChecked(true);

        horizontalLayout->addWidget(logCompressCb);

        setConsoleEnabledCb = new QCheckBox(TestLogSettingDialog);
        setConsoleEnabledCb->setObjectName(QString::fromUtf8("setConsoleEnabledCb"));
        setConsoleEnabledCb->setFont(font);

        horizontalLayout->addWidget(setConsoleEnabledCb);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(TestLogSettingDialog);

        setLogLevelCb->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TestLogSettingDialog);
    } // setupUi

    void retranslateUi(QDialog *TestLogSettingDialog)
    {
        TestLogSettingDialog->setWindowTitle(QApplication::translate("TestLogSettingDialog", "\346\227\245\345\277\227\350\256\276\347\275\256", nullptr));
        selectLogOutputDirBtn->setText(QApplication::translate("TestLogSettingDialog", "\351\200\211\346\213\251\346\227\245\345\277\227\350\276\223\345\207\272\347\233\256\345\275\225", nullptr));
        logDirPathLe->setPlaceholderText(QApplication::translate("TestLogSettingDialog", "\350\257\267\351\200\211\346\213\251\346\227\245\345\277\227\350\276\223\345\207\272\347\233\256\345\275\225", nullptr));
        sdkVersionLabel->setText(QApplication::translate("TestLogSettingDialog", "\350\256\276\347\275\256Log\350\276\223\345\207\272\347\272\247\345\210\253\357\274\232", nullptr));
        setLogLevelCb->setItemText(0, QApplication::translate("TestLogSettingDialog", "\350\276\223\345\207\272\346\211\200\346\234\211\347\272\247\345\210\253\347\232\204 Log", nullptr));
        setLogLevelCb->setItemText(1, QApplication::translate("TestLogSettingDialog", "\350\276\223\345\207\272 DEBUG\347\255\211", nullptr));
        setLogLevelCb->setItemText(2, QApplication::translate("TestLogSettingDialog", "\350\276\223\345\207\272 INFO\347\255\211", nullptr));
        setLogLevelCb->setItemText(3, QApplication::translate("TestLogSettingDialog", "\345\217\252\350\276\223\345\207\272WARNING\357\274\214ERROR \345\222\214 FATAL", nullptr));
        setLogLevelCb->setItemText(4, QApplication::translate("TestLogSettingDialog", "\345\217\252\350\276\223\345\207\272ERROR \345\222\214 FATAL ", nullptr));
        setLogLevelCb->setItemText(5, QApplication::translate("TestLogSettingDialog", "\345\217\252\350\276\223\345\207\272 FATAL", nullptr));
        setLogLevelCb->setItemText(6, QApplication::translate("TestLogSettingDialog", "\344\270\215\350\276\223\345\207\272\344\273\273\344\275\225 SDK Log", nullptr));

        logCompressCb->setText(QApplication::translate("TestLogSettingDialog", "\345\216\213\347\274\251Log ", nullptr));
        setConsoleEnabledCb->setText(QApplication::translate("TestLogSettingDialog", "\346\216\247\345\210\266\345\217\260\350\276\223\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestLogSettingDialog: public Ui_TestLogSettingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTLOGSETTINGDIALOG_H
