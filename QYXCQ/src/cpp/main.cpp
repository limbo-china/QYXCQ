#include "Engine.h"
#include "QYXCQ.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	// initialize random seed for later use
	qsrand(QTime(0, 0, 0).secsTo(QTime::currentTime()));

	//QTranslator* qt_translator;
	//qt_translator->load("qt_zh_CN.qm");
	//a.installTranslator(qt_translator);

	QYXCQEngine = new Engine();
	
	QYXCQWindow = new QYXCQ();
	QYXCQEngine->setParent(QYXCQWindow);

	QYXCQWindow->show();

	return a.exec();
}
