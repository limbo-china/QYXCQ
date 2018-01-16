#include "QYXCQ.h"
#include "Engine.h"

QYXCQ* QYXCQWindow = NULL;

QYXCQ::QYXCQ(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	
	startAction = new QAction(tr("Start"),this);
	//startAction->setShortcut(tr("Ctrl+S"));
	////startAction->setStatusTip(tr("Start Game"));
	connect(startAction, SIGNAL(triggered()), this, SLOT(on_startAction_triggered()));
	/*gameMenu = menuBar()->addMenu(tr("&Game"));
	gameMenu->addAction(startAction);*/
	gameToolbar = addToolBar(tr("&File"));
	gameToolbar->addAction(startAction);

	
	/*cardOverViewAction = new QAction(tr("Card OverView"),this);
	connect(cardOverViewAction, SIGNAL(triggered()), this, SLOT(on_cardOverViewAction_triggered()));
	helpMenu = menuBar()->addMenu(tr("Help"));
	helpMenu->addAction(cardOverViewAction);*/

	

	//connect(ui.startButton, SIGNAL(clicked()), startDialog, SLOT(exec()));
	//connect(ui.cardViewButton, SIGNAL(clicked()), cardOverViewDialog, SLOT(exec()));
}
QYXCQ::~QYXCQ()
{

}

void QYXCQ::on_startAction_triggered(){

	startDialog = new StartDialog(this);
	startDialog->exec();
}
void QYXCQ::on_cardOverViewAction_triggered(){

	cardOverViewDialog = new CardOverViewDialog(this);
	cardOverViewDialog->exec();
}
