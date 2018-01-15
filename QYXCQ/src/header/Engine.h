#ifndef ENGINE_H
#define ENGINE_H

#include "Package.h"
#include "QtHeader.h"

class Engine : public QObject
{
	Q_OBJECT

public:
	Engine();
	~Engine();

	CardPackage* getCardPack();

private:

	
	CardPackage *cardpack;

};

extern Engine* QYXCQEngine;

#endif // !ENGINE_H
