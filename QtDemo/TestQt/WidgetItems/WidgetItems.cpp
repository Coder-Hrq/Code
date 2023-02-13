#include "WidgetItems.h"
#include <QDebug>
#include <QMessageBox>
#include "VSafeChatModeWidget.h"
#include "VToast.h"
#include <QTextCharFormat>
#include <windows.h>
#include <QFileInfo>

WidgetItems::WidgetItems(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    ui.textBrowser->setOpenLinks(false);
    ui.textBrowser->setOpenExternalLinks(false);
    QString richText = QStringLiteral("<body style=\"line - height: 18px; font - family:'SimSun'; font - size:9pt; font - weight:400; font - style:normal; \">"
        "<p style = \" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">"
        "%1"
        "<a href='%2'><span style=\"text-decoration: underline; color:#55aaff;\"> 复制</span></a></p></body>").arg("teststesrterte").arg("wechat");
    ui.textBrowser->setHtml(richText);
    connect(ui.textBrowser, &QTextBrowser::anchorClicked, [=](const QUrl &url) {
        QString strUrl = url.toString();
        qDebug() << strUrl;
    });


    //VSafeChatModeWidget
    auto pSafeChatModeWidget = new VSafeChatModeWidget();
    connect(pSafeChatModeWidget, &VSafeChatModeWidget::sigCheckMsg, [=]() {
        QMessageBox::warning(this, "warring", "from msg");
    });
    connect(pSafeChatModeWidget, &VSafeChatModeWidget::sigLinkActivated, [=]() {
        QMessageBox::warning(this, "warring", "from link");
    });
    connect(ui.pushButton_safeChatMode, &QPushButton::clicked, [=] {
        pSafeChatModeWidget->show();
    });

    connect(ui.pushButton_toast, &QPushButton::clicked, [=] {
        ////全局调用
        //vToast.toast(QStringLiteral("这都不...."));
        //子控件调用
        static VToast myToast(this);
        myToast.setToastStyle(QStringLiteral(
            "QLabel#label_toast"
            "{"
            "   color: rgba(255, 255, 255);"
            "   background: rgba(0, 0, 0, 0.6);"
            "   border-radius: 12px;"
            "   font-weight: 400;"
            "   font-size: 12px;"
            "   padding: 5px 15px 5px 15px;"
            ""
            "}"));
        myToast.toast(QStringLiteral("这都不...."));
    });

    //init 日期类
    {

        QTextCharFormat format;//字体风格：黑色
        format.setForeground(QColor(Qt::black));
        ui.calendarWidget->setWeekdayTextFormat(Qt::Saturday, format);
        ui.calendarWidget->setWeekdayTextFormat(Qt::Sunday, format);

    }

    //测试系统
    connect(ui.pushButton_system, &QPushButton::clicked, [=]() {
        QMessageBox::warning(nullptr, QStringLiteral("提示"), getSystemStr());
    });
}

QString WidgetItems::getSystemStr()
{
    qint64 fileSize = 35 * 1024 * 1024;
    return QStringLiteral("磁盘剩余空间：%1\n创建文件是否成功：size:%2,ret:%3")
        .arg(getDiskFreeSpace("C:"))
        .arg(fileSize)
        .arg(saveFile("G:/file", fileSize));
}

quint64 WidgetItems::getDiskFreeSpace(const QString &driver)
{
    QString strDiver;
    LPCWSTR lpcwstrDriver = (LPCWSTR)driver.utf16();

    ULARGE_INTEGER liFreeBytesAvailable, liTotalBytes, liTotalFreeBytes;

    if (!GetDiskFreeSpaceEx(lpcwstrDriver, &liFreeBytesAvailable, &liTotalBytes, &liTotalFreeBytes))
    {
        qDebug() << "ERROR: Call to GetDiskFreeSpaceEx() failed.";
        return 0;
    }

    //磁盘总空间
    qDebug() << "liTotalBytes=" << liTotalBytes.QuadPart / 1024 / 1024 / 1024 << "G";
    //磁盘剩余空间
    qDebug() << "liTotalFreeBytes=" << liTotalFreeBytes.QuadPart / 1024 / 1024 / 1024 << "G";

    return (quint64)liTotalFreeBytes.QuadPart / 1024 / 1024 / 1024;
}

bool WidgetItems::saveFile(const QString &fileName, qint64 size)
{
    QFileInfo fileInfo(fileName);
    if (fileInfo.exists())
    {
        QFile(fileName).remove();
    }
    QFile file(fileName);
    int maxSize = 100 * 1024 * 1024;
    qint64 theSize = size;
    qint64 writeCount = 0;
    if (file.open(QIODevice::WriteOnly))
    {
        //每次写入不大于100M
        while(theSize > 0)
        {
            QString strData = QString().fill('1', theSize >= maxSize ? maxSize : theSize);
            writeCount += file.write(strData.toUtf8());
            theSize -= maxSize;
        }
    }
    file.close();
    return QFileInfo(fileName).exists() && QFileInfo(fileName).size() == size;
}