#include "Toast.h"
#include "VToast.h"
Toast::Toast(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

	connect(ui.pushButton, &QPushButton::clicked, [=] {
		vToast.toast(QStringLiteral("这是要擦hi是覅活塞风hi按时发丝佛西欧奥兽"));
	});
}
