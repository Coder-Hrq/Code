/********************************************************************************
** Form generated from reading UI file 'TestCdnPlayerDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTCDNPLAYERDIALOG_H
#define UI_TESTCDNPLAYERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestCdnPlayerDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widgetSetting;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *lineEditDoMain;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QLineEdit *lineEditStreamId;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QLabel *play_url_label;
    QVBoxLayout *verticalLayout;
    QWidget *videoPlaceHolder;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btStart;
    QPushButton *btPause;

    void setupUi(QDialog *TestCdnPlayerDialog)
    {
        if (TestCdnPlayerDialog->objectName().isEmpty())
            TestCdnPlayerDialog->setObjectName(QString::fromUtf8("TestCdnPlayerDialog"));
        TestCdnPlayerDialog->resize(543, 414);
        verticalLayout_2 = new QVBoxLayout(TestCdnPlayerDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widgetSetting = new QWidget(TestCdnPlayerDialog);
        widgetSetting->setObjectName(QString::fromUtf8("widgetSetting"));
        widgetSetting->setMinimumSize(QSize(0, 50));
        verticalLayout_3 = new QVBoxLayout(widgetSetting);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(5, 5, 9, 5);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(widgetSetting);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(100, 0));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);

        horizontalLayout_3->addWidget(label);

        lineEditDoMain = new QLineEdit(widgetSetting);
        lineEditDoMain->setObjectName(QString::fromUtf8("lineEditDoMain"));

        horizontalLayout_3->addWidget(lineEditDoMain);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_6 = new QLabel(widgetSetting);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(100, 0));
        label_6->setFont(font);

        horizontalLayout_4->addWidget(label_6);

        lineEditStreamId = new QLineEdit(widgetSetting);
        lineEditStreamId->setObjectName(QString::fromUtf8("lineEditStreamId"));

        horizontalLayout_4->addWidget(lineEditStreamId);


        verticalLayout_3->addLayout(horizontalLayout_4);


        verticalLayout_2->addWidget(widgetSetting);

        label_2 = new QLabel(TestCdnPlayerDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);

        verticalLayout_2->addWidget(label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        play_url_label = new QLabel(TestCdnPlayerDialog);
        play_url_label->setObjectName(QString::fromUtf8("play_url_label"));
        play_url_label->setFont(font);
        play_url_label->setText(QString::fromUtf8("http://liteavapp.qcloud.com/live/Stream_id.flv"));

        horizontalLayout->addWidget(play_url_label);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        videoPlaceHolder = new QWidget(TestCdnPlayerDialog);
        videoPlaceHolder->setObjectName(QString::fromUtf8("videoPlaceHolder"));
        videoPlaceHolder->setFont(font);
        videoPlaceHolder->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(videoPlaceHolder);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        btStart = new QPushButton(TestCdnPlayerDialog);
        btStart->setObjectName(QString::fromUtf8("btStart"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btStart->sizePolicy().hasHeightForWidth());
        btStart->setSizePolicy(sizePolicy);
        btStart->setFont(font);
        btStart->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_2->addWidget(btStart);

        btPause = new QPushButton(TestCdnPlayerDialog);
        btPause->setObjectName(QString::fromUtf8("btPause"));
        sizePolicy.setHeightForWidth(btPause->sizePolicy().hasHeightForWidth());
        btPause->setSizePolicy(sizePolicy);
        btPause->setFont(font);
        btPause->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_2->addWidget(btPause);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalLayout_2->setStretch(3, 1);

        retranslateUi(TestCdnPlayerDialog);

        QMetaObject::connectSlotsByName(TestCdnPlayerDialog);
    } // setupUi

    void retranslateUi(QDialog *TestCdnPlayerDialog)
    {
        TestCdnPlayerDialog->setWindowTitle(QApplication::translate("TestCdnPlayerDialog", "CDN\350\247\202\347\234\213", nullptr));
        label->setText(QApplication::translate("TestCdnPlayerDialog", "\345\237\237\345\220\215\357\274\232", nullptr));
        lineEditDoMain->setText(QApplication::translate("TestCdnPlayerDialog", "liteavapp.qcloud.com", nullptr));
        lineEditDoMain->setPlaceholderText(QString());
        label_6->setText(QApplication::translate("TestCdnPlayerDialog", "\346\265\201\345\234\260\345\235\200\357\274\232", nullptr));
        lineEditStreamId->setPlaceholderText(QApplication::translate("TestCdnPlayerDialog", "Stream_id", nullptr));
        label_2->setText(QApplication::translate("TestCdnPlayerDialog", "\346\222\255\346\224\276\345\234\260\345\235\200:", nullptr));
        btStart->setText(QApplication::translate("TestCdnPlayerDialog", "\345\274\200\345\247\213", nullptr));
        btPause->setText(QApplication::translate("TestCdnPlayerDialog", "\346\232\202\345\201\234", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestCdnPlayerDialog: public Ui_TestCdnPlayerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTCDNPLAYERDIALOG_H
