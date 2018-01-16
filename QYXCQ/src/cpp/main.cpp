#include "Engine.h"
#include "QYXCQ.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	// initialize random seed for later use

	//QTranslator qt_translator;
	//qt_translator.load("qyxcq_zh.qm");
	//a.installTranslator(&qt_translator);

    QYXCQEngine = new Engine();

    QYXCQWindow = new QYXCQ();
    QYXCQEngine->setParent(QYXCQWindow);

    QYXCQWindow->show();

	return a.exec();
}
