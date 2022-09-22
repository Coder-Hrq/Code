#include "vColorfulBtn.h"

vColorfulBtn::vColorfulBtn(QWidget *parent)
    : QPushButton(parent)
{
    ui.setupUi(this);
}

vColorfulBtn::~vColorfulBtn()
{
}

int vColorfulBtn::getChangeV() const
{
    return m_changeV;
}

void vColorfulBtn::setChangeV(const int &changeV)
{
    m_changeV = changeV;
}
