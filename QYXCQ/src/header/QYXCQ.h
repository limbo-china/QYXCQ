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

	Ui::QYXCQClass getUi(){ return ui; }

private:
	Ui::QYXCQClass ui;
	StartDialog* startDialog;
	CardOverViewDialog* cardOverViewDialog;

	QToolBar* gameToolbar;
	QToolBar* helpToolbar;

	QMenu* gameMenu;
	QAction* startAction;

	QMenu* helpMenu;
	QAction* cardOverViewAction;
private slots:
	
void on_startAction_triggered();
void on_cardOverViewAction_triggered();

};

extern QYXCQ* QYXCQWindow;

#endif
