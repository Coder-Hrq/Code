#include "vChatJoinItem.h"
#include "stdafx.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    vChatJoinItem w;
	//w.setWordWrap(true);
	//w.setText(QString::fromLocal8Bit("<p style='line-height:20px'>"
	//	"<font style = 'color:#E73692; font-size:13px; font-weight:bold'>憨憨张天乐 </font>"
	//	"<font style = 'font-size:13px; font-weight:bold'> 通过 </font>"
	//	"<font style = 'color:#E73692; font-size:13px; font-weight:bold'>有点傻点又可爱的肥仔 .</font>"
	//	"<font style = 'font-size:13px; font-weight:bold'>邀请入了氪金团.</font>"
	//	"<font style = 'color:#FFFFFF; font-size:13px; font-weight:bold'>占位符占位</font>"
	//	"< /p>"));
	//w.setWordWrap(false);
	//w.setText(QString::fromLocal8Bit("<p style='line-height:0px'>"
	//	"<font style = 'font-size:13px; font-weight:bold'>恋..若梦 </font>"
	//	"<font style = 'color:#2C5DFF; font-size:13px; font-weight:bold'>加入了群</font>"
	//	"<font style = 'color:#FFFFFF; font-size:13px; font-weight:bold'>占位符占位</font>"
	//	"< /p>"));
    w.show();
    return a.exec();
}
