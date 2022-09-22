#pragma once

#include <QPushButton>
#include "ui_vColorfulBtn.h"

class vColorfulBtn : public QPushButton
{
    Q_OBJECT

    //����Ҫͨ��Q_PROPERTY������Լ��Զ������������QPropertyAnimation׷�ٵ���
    //�ڴ˸�����Ϊ���ͱ��� changeV
    Q_PROPERTY(int changeV READ getChangeV WRITE setChangeV)

public:
    vColorfulBtn(QWidget *parent = Q_NULLPTR);
    ~vColorfulBtn();

    int getChangeV() const;           //��ȡ�仯��ֵ
    void setChangeV(const int &changeV); //���ñ仯��ֵ

private:
    Ui::vColorfulBtn ui;
    int m_changeV;
};
