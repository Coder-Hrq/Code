#include "Toast.h"
#include "VToast.h"
Toast::Toast(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

	connect(ui.pushButton, &QPushButton::clicked, [=] {
		vToast.toast(QStringLiteral("����Ҫ��hi��҅������hi��ʱ��˿����ŷ����"));
	});
}
