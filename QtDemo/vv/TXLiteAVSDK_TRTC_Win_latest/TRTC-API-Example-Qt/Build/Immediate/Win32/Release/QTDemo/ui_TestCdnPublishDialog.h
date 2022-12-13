/********************************************************************************
** Form generated from reading UI file 'TestCdnPublishDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTCDNPUBLISHDIALOG_H
#define UI_TESTCDNPUBLISHDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TestCdnPublishDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *streamIdLineEt;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *switchPublishStatus;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *TestCdnPublishDialog)
    {
        if (TestCdnPublishDialog->objectName().isEmpty())
            TestCdnPublishDialog->setObjectName(QString::fromUtf8("TestCdnPublishDialog"));
        TestCdnPublishDialog->resize(655, 186);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TestCdnPublishDialog->sizePolicy().hasHeightForWidth());
        TestCdnPublishDialog->setSizePolicy(sizePolicy);
        TestCdnPublishDialog->setFocusPolicy(Qt::TabFocus);
        TestCdnPublishDialog->setAutoFillBackground(false);
        TestCdnPublishDialog->setStyleSheet(QString::fromUtf8(""));
        TestCdnPublishDialog->setSizeGripEnabled(false);
        verticalLayout = new QVBoxLayout(TestCdnPublishDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(TestCdnPublishDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(14);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_3);

        streamIdLineEt = new QLineEdit(TestCdnPublishDialog);
        streamIdLineEt->setObjectName(QString::fromUtf8("streamIdLineEt"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(streamIdLineEt->sizePolicy().hasHeightForWidth());
        streamIdLineEt->setSizePolicy(sizePolicy2);
        streamIdLineEt->setFont(font);
        streamIdLineEt->setFocusPolicy(Qt::ClickFocus);
        streamIdLineEt->setText(QString::fromUtf8(""));
        streamIdLineEt->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(streamIdLineEt);

        label = new QLabel(TestCdnPublishDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy3);
        QFont font1;
        font1.setPointSize(12);
        label->setFont(font1);

        horizontalLayout->addWidget(label);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        switchPublishStatus = new QPushButton(TestCdnPublishDialog);
        switchPublishStatus->setObjectName(QString::fromUtf8("switchPublishStatus"));
        switchPublishStatus->setEnabled(true);
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(switchPublishStatus->sizePolicy().hasHeightForWidth());
        switchPublishStatus->setSizePolicy(sizePolicy4);
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        switchPublishStatus->setFont(font2);
        switchPublishStatus->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_2->addWidget(switchPublishStatus);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(TestCdnPublishDialog);

        QMetaObject::connectSlotsByName(TestCdnPublishDialog);
    } // setupUi

    void retranslateUi(QDialog *TestCdnPublishDialog)
    {
        TestCdnPublishDialog->setWindowTitle(QApplication::translate("TestCdnPublishDialog", "CDN\345\217\221\345\270\203", nullptr));
        label_3->setText(QApplication::translate("TestCdnPublishDialog", "stream_id:", nullptr));
        streamIdLineEt->setPlaceholderText(QApplication::translate("TestCdnPublishDialog", "stream_id", nullptr));
        label->setText(QApplication::translate("TestCdnPublishDialog", "(\351\273\230\350\256\244\350\277\233\346\210\277\346\227\266streamId)", nullptr));
        switchPublishStatus->setText(QApplication::translate("TestCdnPublishDialog", "\345\274\200\345\247\213\345\217\221\345\270\203", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestCdnPublishDialog: public Ui_TestCdnPublishDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTCDNPUBLISHDIALOG_H
