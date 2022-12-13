/********************************************************************************
** Form generated from reading UI file 'TestCustomRenderDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTCUSTOMRENDERDIALOG_H
#define UI_TESTCUSTOMRENDERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestCustomRenderDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QComboBox *combUserList;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnStartCustomRender;
    QWidget *customRenderVideoPreview;

    void setupUi(QDialog *TestCustomRenderDialog)
    {
        if (TestCustomRenderDialog->objectName().isEmpty())
            TestCustomRenderDialog->setObjectName(QString::fromUtf8("TestCustomRenderDialog"));
        TestCustomRenderDialog->resize(462, 352);
        QFont font;
        font.setPointSize(14);
        TestCustomRenderDialog->setFont(font);
        verticalLayout = new QVBoxLayout(TestCustomRenderDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(TestCustomRenderDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        combUserList = new QComboBox(TestCustomRenderDialog);
        combUserList->addItem(QString());
        combUserList->setObjectName(QString::fromUtf8("combUserList"));
        sizePolicy.setHeightForWidth(combUserList->sizePolicy().hasHeightForWidth());
        combUserList->setSizePolicy(sizePolicy);
        combUserList->setCurrentText(QString::fromUtf8("myself"));

        horizontalLayout->addWidget(combUserList);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnStartCustomRender = new QPushButton(TestCustomRenderDialog);
        btnStartCustomRender->setObjectName(QString::fromUtf8("btnStartCustomRender"));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        btnStartCustomRender->setFont(font1);
        btnStartCustomRender->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(btnStartCustomRender);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout);

        customRenderVideoPreview = new QWidget(TestCustomRenderDialog);
        customRenderVideoPreview->setObjectName(QString::fromUtf8("customRenderVideoPreview"));
        customRenderVideoPreview->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(customRenderVideoPreview);

        verticalLayout->setStretch(2, 1);

        retranslateUi(TestCustomRenderDialog);

        QMetaObject::connectSlotsByName(TestCustomRenderDialog);
    } // setupUi

    void retranslateUi(QDialog *TestCustomRenderDialog)
    {
        TestCustomRenderDialog->setWindowTitle(QApplication::translate("TestCustomRenderDialog", "\350\207\252\345\256\232\344\271\211\346\270\262\346\237\223", nullptr));
        label->setText(QApplication::translate("TestCustomRenderDialog", "\350\257\267\351\200\211\346\213\251\347\224\250\346\210\267(\345\277\205\351\200\211)\357\274\232", nullptr));
        combUserList->setItemText(0, QApplication::translate("TestCustomRenderDialog", "myself", nullptr));

        btnStartCustomRender->setText(QApplication::translate("TestCustomRenderDialog", "\345\274\200\345\247\213\350\247\206\351\242\221\350\207\252\345\256\232\344\271\211\346\270\262\346\237\223", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestCustomRenderDialog: public Ui_TestCustomRenderDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTCUSTOMRENDERDIALOG_H
