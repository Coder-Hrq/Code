#include "VVMDMode.h"
#include "vMyDelegate.h"
#include "vMyModel.h"

VVMDMode::VVMDMode(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    auto myModel = new vMyModel(this);
    myModel->addValue(1);
    myModel->addValue(2);
    ui.listView->setModel(myModel);
    ui.listView->setItemDelegate(new vMyDelegate(this));
}
