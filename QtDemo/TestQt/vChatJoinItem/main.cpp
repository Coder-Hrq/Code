#include "vChatJoinItem.h"
#include "stdafx.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    vChatJoinItem w;
	//w.setWordWrap(true);
	//w.setText(QString::fromLocal8Bit("<p style='line-height:20px'>"
	//	"<font style = 'color:#E73692; font-size:13px; font-weight:bold'>���������� </font>"
	//	"<font style = 'font-size:13px; font-weight:bold'> ͨ�� </font>"
	//	"<font style = 'color:#E73692; font-size:13px; font-weight:bold'>�е�ɵ���ֿɰ��ķ��� .</font>"
	//	"<font style = 'font-size:13px; font-weight:bold'>��������봽���.</font>"
	//	"<font style = 'color:#FFFFFF; font-size:13px; font-weight:bold'>ռλ��ռλ</font>"
	//	"< /p>"));
	//w.setWordWrap(false);
	//w.setText(QString::fromLocal8Bit("<p style='line-height:0px'>"
	//	"<font style = 'font-size:13px; font-weight:bold'>��..���� </font>"
	//	"<font style = 'color:#2C5DFF; font-size:13px; font-weight:bold'>������Ⱥ</font>"
	//	"<font style = 'color:#FFFFFF; font-size:13px; font-weight:bold'>ռλ��ռλ</font>"
	//	"< /p>"));
    w.show();
    return a.exec();
}
