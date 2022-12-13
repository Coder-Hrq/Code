/********************************************************************************
** Form generated from reading UI file 'TestUserScreenShareViewDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTUSERSCREENSHAREVIEWDIALOG_H
#define UI_TESTUSERSCREENSHAREVIEWDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_TestUserScreenShareViewDialog
{
public:

    void setupUi(QDialog *TestUserScreenShareViewDialog)
    {
        if (TestUserScreenShareViewDialog->objectName().isEmpty())
            TestUserScreenShareViewDialog->setObjectName(QString::fromUtf8("TestUserScreenShareViewDialog"));
        TestUserScreenShareViewDialog->resize(600, 400);

        retranslateUi(TestUserScreenShareViewDialog);

        QMetaObject::connectSlotsByName(TestUserScreenShareViewDialog);
    } // setupUi

    void retranslateUi(QDialog *TestUserScreenShareViewDialog)
    {
        TestUserScreenShareViewDialog->setWindowTitle(QApplication::translate("TestUserScreenShareViewDialog", "\345\261\217\345\271\225\345\210\206\344\272\253", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestUserScreenShareViewDialog: public Ui_TestUserScreenShareViewDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTUSERSCREENSHAREVIEWDIALOG_H
