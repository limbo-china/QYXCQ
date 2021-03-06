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

	QLabel* debuglabel;

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

	QGraphicsScene* gamescene;
	QGraphicsView* gameview;

	private slots:
	
    void tri_startAction();
    void tri_cardOverViewAction();

};

extern QYXCQ* QYXCQWindow;

#endif
