#pragma once

#include <QPushButton>
#include "ui_vColorfulBtn.h"

class vColorfulBtn : public QPushButton
{
    Q_OBJECT

    //首先要通过Q_PROPERTY宏添加自己自定义的属性来让QPropertyAnimation追踪到，
    //在此该属性为整型变量 changeV
    Q_PROPERTY(int changeV READ getChangeV WRITE setChangeV)

public:
    vColorfulBtn(QWidget *parent = Q_NULLPTR);
    ~vColorfulBtn();

    int getChangeV() const;           //获取变化的值
    void setChangeV(const int &changeV); //设置变化的值

private:
    Ui::vColorfulBtn ui;
    int m_changeV;
};
