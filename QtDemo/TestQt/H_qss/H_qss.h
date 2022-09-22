#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_H_qss.h"

class H_qss : public QMainWindow
{
    Q_OBJECT

public:
    H_qss(QWidget *parent = Q_NULLPTR);

private:
	void	runAnimation();

private:
    Ui::H_qssClass ui;
};
