#ifndef ENGINE_H
#define ENGINE_H

#include "Package.h"
#include "QtHeader.h"
#include "gamecore.h"

class Engine : public QObject
{
	Q_OBJECT

public:
	Engine();
	~Engine();

	CardPackage* getCardPack();

private:

	CardPackage *cardpack;
	GameCore* gamecore;

private slots:
	
	void startGameCore(QString character);

};

extern Engine* QYXCQEngine;

#endif // !ENGINE_H
