#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "QtHeader.h"
#include "ui_QYXCQ.h"
#include "startDialog.h"

class QYXCQ : public QMainWindow
{
	Q_OBJECT

public:
	QYXCQ(QWidget *parent = Q_NULLPTR);
	~QYXCQ();

private:
	Ui::QYXCQClass ui;
	StartDialog* startDialog;
private slots:
	
};

extern QYXCQ* QYXCQWindow;

#endif
