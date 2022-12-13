/********************************************************************************
** Form generated from reading UI file 'TestBeautyAndWaterMarkDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTBEAUTYANDWATERMARKDIALOG_H
#define UI_TESTBEAUTYANDWATERMARKDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TestBeautyAndWaterMarkDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelBeautyStyle;
    QComboBox *comboBoxBeautyStyle;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelBeautyLevel;
    QSlider *horizontalSliderBeautyLevel;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelWhitenessLevel;
    QSlider *horizontalSliderWhitenessLevel;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelRuddinessLevel;
    QSlider *horizontalSliderruddinessLevel;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QCheckBox *checkBoxWaterMark;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *TestBeautyAndWaterMarkDialog)
    {
        if (TestBeautyAndWaterMarkDialog->objectName().isEmpty())
            TestBeautyAndWaterMarkDialog->setObjectName(QString::fromUtf8("TestBeautyAndWaterMarkDialog"));
        TestBeautyAndWaterMarkDialog->resize(404, 157);
        TestBeautyAndWaterMarkDialog->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(TestBeautyAndWaterMarkDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelBeautyStyle = new QLabel(TestBeautyAndWaterMarkDialog);
        labelBeautyStyle->setObjectName(QString::fromUtf8("labelBeautyStyle"));
        QFont font;
        font.setPointSize(14);
        labelBeautyStyle->setFont(font);
        labelBeautyStyle->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(labelBeautyStyle);

        comboBoxBeautyStyle = new QComboBox(TestBeautyAndWaterMarkDialog);
        comboBoxBeautyStyle->addItem(QString());
        comboBoxBeautyStyle->addItem(QString());
        comboBoxBeautyStyle->setObjectName(QString::fromUtf8("comboBoxBeautyStyle"));
        comboBoxBeautyStyle->setFont(font);
        comboBoxBeautyStyle->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(comboBoxBeautyStyle);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labelBeautyLevel = new QLabel(TestBeautyAndWaterMarkDialog);
        labelBeautyLevel->setObjectName(QString::fromUtf8("labelBeautyLevel"));
        labelBeautyLevel->setFont(font);
        labelBeautyLevel->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(labelBeautyLevel);

        horizontalSliderBeautyLevel = new QSlider(TestBeautyAndWaterMarkDialog);
        horizontalSliderBeautyLevel->setObjectName(QString::fromUtf8("horizontalSliderBeautyLevel"));
        horizontalSliderBeautyLevel->setFont(font);
        horizontalSliderBeautyLevel->setMaximum(9);
        horizontalSliderBeautyLevel->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(horizontalSliderBeautyLevel);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        labelWhitenessLevel = new QLabel(TestBeautyAndWaterMarkDialog);
        labelWhitenessLevel->setObjectName(QString::fromUtf8("labelWhitenessLevel"));
        labelWhitenessLevel->setFont(font);
        labelWhitenessLevel->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_3->addWidget(labelWhitenessLevel);

        horizontalSliderWhitenessLevel = new QSlider(TestBeautyAndWaterMarkDialog);
        horizontalSliderWhitenessLevel->setObjectName(QString::fromUtf8("horizontalSliderWhitenessLevel"));
        horizontalSliderWhitenessLevel->setFont(font);
        horizontalSliderWhitenessLevel->setMaximum(9);
        horizontalSliderWhitenessLevel->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(horizontalSliderWhitenessLevel);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        labelRuddinessLevel = new QLabel(TestBeautyAndWaterMarkDialog);
        labelRuddinessLevel->setObjectName(QString::fromUtf8("labelRuddinessLevel"));
        labelRuddinessLevel->setFont(font);
        labelRuddinessLevel->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_4->addWidget(labelRuddinessLevel);

        horizontalSliderruddinessLevel = new QSlider(TestBeautyAndWaterMarkDialog);
        horizontalSliderruddinessLevel->setObjectName(QString::fromUtf8("horizontalSliderruddinessLevel"));
        horizontalSliderruddinessLevel->setFont(font);
        horizontalSliderruddinessLevel->setMaximum(9);
        horizontalSliderruddinessLevel->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(horizontalSliderruddinessLevel);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        checkBoxWaterMark = new QCheckBox(TestBeautyAndWaterMarkDialog);
        checkBoxWaterMark->setObjectName(QString::fromUtf8("checkBoxWaterMark"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(checkBoxWaterMark->sizePolicy().hasHeightForWidth());
        checkBoxWaterMark->setSizePolicy(sizePolicy);
        checkBoxWaterMark->setFont(font);
        checkBoxWaterMark->setAcceptDrops(false);
        checkBoxWaterMark->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_5->addWidget(checkBoxWaterMark);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_5);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(TestBeautyAndWaterMarkDialog);

        QMetaObject::connectSlotsByName(TestBeautyAndWaterMarkDialog);
    } // setupUi

    void retranslateUi(QDialog *TestBeautyAndWaterMarkDialog)
    {
        TestBeautyAndWaterMarkDialog->setWindowTitle(QApplication::translate("TestBeautyAndWaterMarkDialog", "\347\276\216\351\242\234&\346\260\264\345\215\260", nullptr));
        labelBeautyStyle->setText(QApplication::translate("TestBeautyAndWaterMarkDialog", " \347\276\216\351\242\234\351\243\216\346\240\274\357\274\232", nullptr));
        comboBoxBeautyStyle->setItemText(0, QApplication::translate("TestBeautyAndWaterMarkDialog", "\345\205\211\346\273\221", nullptr));
        comboBoxBeautyStyle->setItemText(1, QApplication::translate("TestBeautyAndWaterMarkDialog", "\350\207\252\347\204\266", nullptr));

        labelBeautyLevel->setText(QApplication::translate("TestBeautyAndWaterMarkDialog", " \347\243\250\347\232\256\347\272\247\345\210\253 0- 9\357\274\232", nullptr));
        labelWhitenessLevel->setText(QApplication::translate("TestBeautyAndWaterMarkDialog", " \347\276\216\347\231\275\347\272\247\345\210\253 0- 9\357\274\232", nullptr));
        labelRuddinessLevel->setText(QApplication::translate("TestBeautyAndWaterMarkDialog", " \347\272\242\346\266\246\347\272\247\345\210\253 0- 9\357\274\232", nullptr));
        checkBoxWaterMark->setText(QApplication::translate("TestBeautyAndWaterMarkDialog", "\350\256\276\347\275\256/\345\217\226\346\266\210\346\260\264\345\215\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestBeautyAndWaterMarkDialog: public Ui_TestBeautyAndWaterMarkDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTBEAUTYANDWATERMARKDIALOG_H
