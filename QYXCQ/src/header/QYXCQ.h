#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "QtHeader.h"
#include "ui_QYXCQ.h"
#include "startDialog.h"
#include "cardOverViewDialog.h"

class QYXCQ : public QMainWindow
{
	Q_OBJECT

public:
	QYXCQ(QWidget *parent = Q_NULLPTR);
	~QYXCQ();

private:
	Ui::QYXCQClass ui;
	StartDialog* startDialog;
	CardOverViewDialog* cardOverViewDialog;
private slots:
	
};

extern QYXCQ* QYXCQWindow;

#endif
