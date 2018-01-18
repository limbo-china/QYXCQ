#include "QYXCQ.h"
#include "Engine.h"

QYXCQ* QYXCQWindow = NULL;

QYXCQ::QYXCQ(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	//ui.playBoard->setVisible(false);

	setWindowTitle(tr("yingxiongchuanqi") + " " + "V1.1");

	debuglabel = new QLabel;
	debuglabel->setMinimumSize(debuglabel->sizeHint());
	statusBar()->addWidget(debuglabel);

	gamescene = NULL;

	startAction = new QAction(tr("Start"),this);
    connect(startAction, SIGNAL(triggered()), this, SLOT(tri_startAction()));
	gameMenu = menuBar()->addMenu(tr("Game"));
	gameMenu->addAction(startAction);

	
	cardOverViewAction = new QAction(tr("Card OverView"),this);
    connect(cardOverViewAction, SIGNAL(triggered()), this, SLOT(tri_cardOverViewAction()));
	helpMenu = menuBar()->addMenu(tr("Help"));
	helpMenu->addAction(cardOverViewAction);

	gameview = new QGraphicsView(gamescene);

	setCentralWidget(gameview);

    //QRectF rt = gamescene->sceneRect();

	
//    connect(ui.startButton, SIGNAL(clicked()), startDialog, SLOT(exec()));
//    connect(ui.cardViewButton, SIGNAL(clicked()), cardOverViewDialog, SLOT(exec()));
}
QYXCQ::~QYXCQ()
{

}

void QYXCQ::tri_startAction(){

	startDialog = new StartDialog(this);
	startDialog->exec();
}
void QYXCQ::tri_cardOverViewAction(){

	cardOverViewDialog = new CardOverViewDialog(this);
	cardOverViewDialog->exec();
}
