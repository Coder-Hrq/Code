/********************************************************************************
** Form generated from reading UI file 'ScreenShareSelectionItem.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCREENSHARESELECTIONITEM_H
#define UI_SCREENSHARESELECTIONITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ScreenShareSelectionItem
{
public:
    QLabel *windowItem;
    QRadioButton *radioButtonSelected;
    QLabel *labelWindowsName;

    void setupUi(QWidget *ScreenShareSelectionItem)
    {
        if (ScreenShareSelectionItem->objectName().isEmpty())
            ScreenShareSelectionItem->setObjectName(QString::fromUtf8("ScreenShareSelectionItem"));
        ScreenShareSelectionItem->resize(303, 303);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ScreenShareSelectionItem->sizePolicy().hasHeightForWidth());
        ScreenShareSelectionItem->setSizePolicy(sizePolicy);
        ScreenShareSelectionItem->setAutoFillBackground(false);
        ScreenShareSelectionItem->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);"));
        windowItem = new QLabel(ScreenShareSelectionItem);
        windowItem->setObjectName(QString::fromUtf8("windowItem"));
        windowItem->setGeometry(QRect(2, 2, 300, 300));
        QPalette palette;
        QBrush brush(QColor(0, 0, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 0));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush2(QColor(120, 120, 120, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        windowItem->setPalette(palette);
        QFont font;
        font.setPointSize(10);
        windowItem->setFont(font);
        windowItem->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        windowItem->setMargin(10);
        radioButtonSelected = new QRadioButton(ScreenShareSelectionItem);
        radioButtonSelected->setObjectName(QString::fromUtf8("radioButtonSelected"));
        radioButtonSelected->setGeometry(QRect(10, 10, 16, 16));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(radioButtonSelected->sizePolicy().hasHeightForWidth());
        radioButtonSelected->setSizePolicy(sizePolicy1);
        labelWindowsName = new QLabel(ScreenShareSelectionItem);
        labelWindowsName->setObjectName(QString::fromUtf8("labelWindowsName"));
        labelWindowsName->setGeometry(QRect(10, 270, 281, 16));
        QFont font1;
        font1.setPointSize(12);
        labelWindowsName->setFont(font1);
        labelWindowsName->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        labelWindowsName->setAlignment(Qt::AlignCenter);

        retranslateUi(ScreenShareSelectionItem);

        QMetaObject::connectSlotsByName(ScreenShareSelectionItem);
    } // setupUi

    void retranslateUi(QWidget *ScreenShareSelectionItem)
    {
        ScreenShareSelectionItem->setWindowTitle(QApplication::translate("ScreenShareSelectionItem", "Form", nullptr));
        windowItem->setText(QApplication::translate("ScreenShareSelectionItem", "TextLabel", nullptr));
        radioButtonSelected->setText(QString());
        labelWindowsName->setText(QApplication::translate("ScreenShareSelectionItem", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ScreenShareSelectionItem: public Ui_ScreenShareSelectionItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCREENSHARESELECTIONITEM_H
