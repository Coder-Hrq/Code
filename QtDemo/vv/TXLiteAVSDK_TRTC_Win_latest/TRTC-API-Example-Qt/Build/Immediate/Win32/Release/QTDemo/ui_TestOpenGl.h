/********************************************************************************
** Form generated from reading UI file 'TestOpenGl.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTOPENGL_H
#define UI_TESTOPENGL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestOpenGlClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TestOpenGlClass)
    {
        if (TestOpenGlClass->objectName().isEmpty())
            TestOpenGlClass->setObjectName(QString::fromUtf8("TestOpenGlClass"));
        TestOpenGlClass->resize(600, 400);
        menuBar = new QMenuBar(TestOpenGlClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        TestOpenGlClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TestOpenGlClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        TestOpenGlClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(TestOpenGlClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        TestOpenGlClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(TestOpenGlClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        TestOpenGlClass->setStatusBar(statusBar);

        retranslateUi(TestOpenGlClass);

        QMetaObject::connectSlotsByName(TestOpenGlClass);
    } // setupUi

    void retranslateUi(QMainWindow *TestOpenGlClass)
    {
        TestOpenGlClass->setWindowTitle(QApplication::translate("TestOpenGlClass", "TestOpenGl", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestOpenGlClass: public Ui_TestOpenGlClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTOPENGL_H
