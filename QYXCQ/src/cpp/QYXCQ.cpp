#include "QYXCQ.h"

QYXCQ* QYXCQWindow = NULL;

QYXCQ::QYXCQ(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	startDialog = new StartDialog(this);

	connect(ui.startButton, SIGNAL(clicked()), startDialog, SLOT(exec()));
}
QYXCQ::~QYXCQ()
{

}
