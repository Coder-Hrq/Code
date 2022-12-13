/********************************************************************************
** Form generated from reading UI file 'TestCustomMessageDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTCUSTOMMESSAGEDIALOG_H
#define UI_TESTCUSTOMMESSAGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TestCustomMessageDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QGridLayout *gridLayout;
    QLineEdit *lineEditCmdMsg;
    QLabel *label;
    QLineEdit *lineEditCmdId;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QCheckBox *checkBoxReliableAndOrdered;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonSendCmdMsg;
    QFrame *line_2;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QLineEdit *lineEditRepeatCount;
    QLabel *label_6;
    QLineEdit *lineEditSEIMsg;
    QPushButton *pushButtonSendSEIMsg;
    QFrame *line;
    QLabel *label_5;
    QTextBrowser *textBrowserMsgDetail;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *TestCustomMessageDialog)
    {
        if (TestCustomMessageDialog->objectName().isEmpty())
            TestCustomMessageDialog->setObjectName(QString::fromUtf8("TestCustomMessageDialog"));
        TestCustomMessageDialog->resize(371, 513);
        TestCustomMessageDialog->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(TestCustomMessageDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_4 = new QLabel(TestCustomMessageDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_4->setFont(font);
        label_4->setLayoutDirection(Qt::RightToLeft);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_4);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEditCmdMsg = new QLineEdit(TestCustomMessageDialog);
        lineEditCmdMsg->setObjectName(QString::fromUtf8("lineEditCmdMsg"));
        QFont font1;
        font1.setPointSize(14);
        lineEditCmdMsg->setFont(font1);
        lineEditCmdMsg->setText(QString::fromUtf8(""));

        gridLayout->addWidget(lineEditCmdMsg, 0, 1, 1, 1);

        label = new QLabel(TestCustomMessageDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font1);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEditCmdId = new QLineEdit(TestCustomMessageDialog);
        lineEditCmdId->setObjectName(QString::fromUtf8("lineEditCmdId"));
        lineEditCmdId->setFont(font1);
        lineEditCmdId->setText(QString::fromUtf8("1"));

        gridLayout->addWidget(lineEditCmdId, 2, 1, 1, 1);

        label_2 = new QLabel(TestCustomMessageDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        checkBoxReliableAndOrdered = new QCheckBox(TestCustomMessageDialog);
        checkBoxReliableAndOrdered->setObjectName(QString::fromUtf8("checkBoxReliableAndOrdered"));
        checkBoxReliableAndOrdered->setFont(font1);

        horizontalLayout->addWidget(checkBoxReliableAndOrdered);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        pushButtonSendCmdMsg = new QPushButton(TestCustomMessageDialog);
        pushButtonSendCmdMsg->setObjectName(QString::fromUtf8("pushButtonSendCmdMsg"));
        sizePolicy.setHeightForWidth(pushButtonSendCmdMsg->sizePolicy().hasHeightForWidth());
        pushButtonSendCmdMsg->setSizePolicy(sizePolicy);
        pushButtonSendCmdMsg->setFont(font);
        pushButtonSendCmdMsg->setFocusPolicy(Qt::NoFocus);

        verticalLayout->addWidget(pushButtonSendCmdMsg);

        line_2 = new QFrame(TestCustomMessageDialog);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_3 = new QLabel(TestCustomMessageDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        lineEditRepeatCount = new QLineEdit(TestCustomMessageDialog);
        lineEditRepeatCount->setObjectName(QString::fromUtf8("lineEditRepeatCount"));
        lineEditRepeatCount->setFont(font1);
        lineEditRepeatCount->setText(QString::fromUtf8("1"));

        gridLayout_2->addWidget(lineEditRepeatCount, 1, 1, 1, 1);

        label_6 = new QLabel(TestCustomMessageDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font1);

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);

        lineEditSEIMsg = new QLineEdit(TestCustomMessageDialog);
        lineEditSEIMsg->setObjectName(QString::fromUtf8("lineEditSEIMsg"));
        lineEditSEIMsg->setFont(font1);

        gridLayout_2->addWidget(lineEditSEIMsg, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        pushButtonSendSEIMsg = new QPushButton(TestCustomMessageDialog);
        pushButtonSendSEIMsg->setObjectName(QString::fromUtf8("pushButtonSendSEIMsg"));
        sizePolicy.setHeightForWidth(pushButtonSendSEIMsg->sizePolicy().hasHeightForWidth());
        pushButtonSendSEIMsg->setSizePolicy(sizePolicy);
        pushButtonSendSEIMsg->setFont(font);
        pushButtonSendSEIMsg->setFocusPolicy(Qt::NoFocus);

        verticalLayout->addWidget(pushButtonSendSEIMsg);

        line = new QFrame(TestCustomMessageDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        label_5 = new QLabel(TestCustomMessageDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        label_5->setFont(font);
        label_5->setLayoutDirection(Qt::RightToLeft);
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_5);

        textBrowserMsgDetail = new QTextBrowser(TestCustomMessageDialog);
        textBrowserMsgDetail->setObjectName(QString::fromUtf8("textBrowserMsgDetail"));

        verticalLayout->addWidget(textBrowserMsgDetail);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(TestCustomMessageDialog);

        QMetaObject::connectSlotsByName(TestCustomMessageDialog);
    } // setupUi

    void retranslateUi(QDialog *TestCustomMessageDialog)
    {
        TestCustomMessageDialog->setWindowTitle(QApplication::translate("TestCustomMessageDialog", "\350\207\252\345\256\232\344\271\211\346\266\210\346\201\257", nullptr));
        label_4->setText(QApplication::translate("TestCustomMessageDialog", "\346\266\210\346\201\257\350\256\276\347\275\256", nullptr));
        lineEditCmdMsg->setPlaceholderText(QApplication::translate("TestCustomMessageDialog", "\350\257\267\350\276\223\345\205\245\350\207\252\345\256\232\344\271\211\346\266\210\346\201\257", nullptr));
        label->setText(QApplication::translate("TestCustomMessageDialog", "\346\266\210\346\201\257\345\206\205\345\256\271\357\274\232", nullptr));
        lineEditCmdId->setPlaceholderText(QApplication::translate("TestCustomMessageDialog", "\350\257\267\350\276\223\345\205\245\346\266\210\346\201\257ID", nullptr));
        label_2->setText(QApplication::translate("TestCustomMessageDialog", "\346\266\210\346\201\257ID\357\274\2321 - 10", nullptr));
        checkBoxReliableAndOrdered->setText(QApplication::translate("TestCustomMessageDialog", "\345\217\257\351\235\240/\346\234\211\345\272\217", nullptr));
        pushButtonSendCmdMsg->setText(QApplication::translate("TestCustomMessageDialog", "\346\231\256\351\200\232\346\266\210\346\201\257", nullptr));
        label_3->setText(QApplication::translate("TestCustomMessageDialog", "\345\217\221\351\200\201\346\225\260\346\215\256\346\254\241\346\225\260\357\274\232", nullptr));
        lineEditRepeatCount->setPlaceholderText(QApplication::translate("TestCustomMessageDialog", "\350\257\267\350\276\223\345\205\245\345\217\221\351\200\201\346\254\241\346\225\260", nullptr));
        label_6->setText(QApplication::translate("TestCustomMessageDialog", "\346\266\210\346\201\257\345\206\205\345\256\271\357\274\232", nullptr));
        lineEditSEIMsg->setPlaceholderText(QApplication::translate("TestCustomMessageDialog", "\350\257\267\350\276\223\345\205\245\350\207\252\345\256\232\344\271\211\346\266\210\346\201\257", nullptr));
        pushButtonSendSEIMsg->setText(QApplication::translate("TestCustomMessageDialog", "SEI\346\266\210\346\201\257", nullptr));
        label_5->setText(QApplication::translate("TestCustomMessageDialog", "\346\266\210\346\201\257\347\212\266\346\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestCustomMessageDialog: public Ui_TestCustomMessageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTCUSTOMMESSAGEDIALOG_H
