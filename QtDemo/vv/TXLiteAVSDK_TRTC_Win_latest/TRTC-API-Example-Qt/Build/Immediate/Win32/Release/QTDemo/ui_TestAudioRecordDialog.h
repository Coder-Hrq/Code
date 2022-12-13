/********************************************************************************
** Form generated from reading UI file 'TestAudioRecordDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTAUDIORECORDDIALOG_H
#define UI_TESTAUDIORECORDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TestAudioRecordDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEditRecordFilePath;
    QPushButton *pushButtonRecordPathChoose;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonStartStopRecord;
    QLabel *labelRecordingDuration;
    QPushButton *pushButtonOpenPath;

    void setupUi(QDialog *TestAudioRecordDialog)
    {
        if (TestAudioRecordDialog->objectName().isEmpty())
            TestAudioRecordDialog->setObjectName(QString::fromUtf8("TestAudioRecordDialog"));
        TestAudioRecordDialog->resize(502, 136);
        TestAudioRecordDialog->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(TestAudioRecordDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(TestAudioRecordDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(label);

        lineEditRecordFilePath = new QLineEdit(TestAudioRecordDialog);
        lineEditRecordFilePath->setObjectName(QString::fromUtf8("lineEditRecordFilePath"));
        lineEditRecordFilePath->setFont(font);
        lineEditRecordFilePath->setText(QString::fromUtf8(""));

        horizontalLayout->addWidget(lineEditRecordFilePath);

        pushButtonRecordPathChoose = new QPushButton(TestAudioRecordDialog);
        pushButtonRecordPathChoose->setObjectName(QString::fromUtf8("pushButtonRecordPathChoose"));
        pushButtonRecordPathChoose->setFont(font);
        pushButtonRecordPathChoose->setFocusPolicy(Qt::NoFocus);
        pushButtonRecordPathChoose->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(pushButtonRecordPathChoose);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButtonStartStopRecord = new QPushButton(TestAudioRecordDialog);
        pushButtonStartStopRecord->setObjectName(QString::fromUtf8("pushButtonStartStopRecord"));
        pushButtonStartStopRecord->setFont(font);
        pushButtonStartStopRecord->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_2->addWidget(pushButtonStartStopRecord);

        labelRecordingDuration = new QLabel(TestAudioRecordDialog);
        labelRecordingDuration->setObjectName(QString::fromUtf8("labelRecordingDuration"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelRecordingDuration->sizePolicy().hasHeightForWidth());
        labelRecordingDuration->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(18);
        labelRecordingDuration->setFont(font1);
        labelRecordingDuration->setContextMenuPolicy(Qt::DefaultContextMenu);
        labelRecordingDuration->setStyleSheet(QString::fromUtf8("color: rgb(252, 1, 7);"));
        labelRecordingDuration->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(labelRecordingDuration);

        pushButtonOpenPath = new QPushButton(TestAudioRecordDialog);
        pushButtonOpenPath->setObjectName(QString::fromUtf8("pushButtonOpenPath"));
        pushButtonOpenPath->setFont(font);
        pushButtonOpenPath->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_2->addWidget(pushButtonOpenPath);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(TestAudioRecordDialog);

        QMetaObject::connectSlotsByName(TestAudioRecordDialog);
    } // setupUi

    void retranslateUi(QDialog *TestAudioRecordDialog)
    {
        TestAudioRecordDialog->setWindowTitle(QApplication::translate("TestAudioRecordDialog", "\351\237\263\351\242\221\345\275\225\345\210\266", nullptr));
        label->setText(QApplication::translate("TestAudioRecordDialog", "\345\255\230\345\202\250\350\267\257\345\276\204\351\200\211\346\213\251\357\274\232", nullptr));
        pushButtonRecordPathChoose->setText(QApplication::translate("TestAudioRecordDialog", "\351\200\211\346\213\251", nullptr));
        pushButtonStartStopRecord->setText(QApplication::translate("TestAudioRecordDialog", "\345\274\200\345\247\213\345\275\225\345\210\266", nullptr));
        labelRecordingDuration->setText(QApplication::translate("TestAudioRecordDialog", "00:00", nullptr));
        pushButtonOpenPath->setText(QApplication::translate("TestAudioRecordDialog", "\346\211\223\345\274\200\344\270\212\346\254\241\345\275\225\351\237\263\346\226\207\344\273\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestAudioRecordDialog: public Ui_TestAudioRecordDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTAUDIORECORDDIALOG_H
