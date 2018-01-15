#include "QYXCQ.h"

QYXCQ* QYXCQWindow = NULL;

QYXCQ::QYXCQ(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	startDialog = new StartDialog(this);
	cardOverViewDialog = new CardOverViewDialog(this);

	connect(ui.startButton, SIGNAL(clicked()), startDialog, SLOT(exec()));
	connect(ui.cardViewButton, SIGNAL(clicked()), cardOverViewDialog, SLOT(exec()));
}
QYXCQ::~QYXCQ()
{

}
