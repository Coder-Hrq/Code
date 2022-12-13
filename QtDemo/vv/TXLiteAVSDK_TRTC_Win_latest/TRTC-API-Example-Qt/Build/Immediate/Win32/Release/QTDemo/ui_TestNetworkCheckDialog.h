/********************************************************************************
** Form generated from reading UI file 'TestNetworkCheckDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTNETWORKCHECKDIALOG_H
#define UI_TESTNETWORKCHECKDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TestNetworkCheckDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *startSpeedTest;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_3;
    QTextBrowser *resultQtb;

    void setupUi(QDialog *TestNetworkCheckDialog)
    {
        if (TestNetworkCheckDialog->objectName().isEmpty())
            TestNetworkCheckDialog->setObjectName(QString::fromUtf8("TestNetworkCheckDialog"));
        TestNetworkCheckDialog->resize(406, 375);
        TestNetworkCheckDialog->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(TestNetworkCheckDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        startSpeedTest = new QPushButton(TestNetworkCheckDialog);
        startSpeedTest->setObjectName(QString::fromUtf8("startSpeedTest"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        startSpeedTest->setFont(font);
        startSpeedTest->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(startSpeedTest);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        label_3 = new QLabel(TestNetworkCheckDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        verticalLayout->addWidget(label_3);

        resultQtb = new QTextBrowser(TestNetworkCheckDialog);
        resultQtb->setObjectName(QString::fromUtf8("resultQtb"));

        verticalLayout->addWidget(resultQtb);


        retranslateUi(TestNetworkCheckDialog);

        QMetaObject::connectSlotsByName(TestNetworkCheckDialog);
    } // setupUi

    void retranslateUi(QDialog *TestNetworkCheckDialog)
    {
        TestNetworkCheckDialog->setWindowTitle(QApplication::translate("TestNetworkCheckDialog", "\347\275\221\347\273\234\346\265\213\351\200\237", nullptr));
        startSpeedTest->setText(QApplication::translate("TestNetworkCheckDialog", "\345\274\200\345\247\213\346\265\213\350\257\225", nullptr));
        label_3->setText(QApplication::translate("TestNetworkCheckDialog", "\346\265\213\350\257\225\347\273\223\346\236\234\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestNetworkCheckDialog: public Ui_TestNetworkCheckDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTNETWORKCHECKDIALOG_H
