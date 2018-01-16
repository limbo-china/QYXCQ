#include "Engine.h"
#include "QYXCQ.h"

Engine* QYXCQEngine = NULL;

Engine::Engine()
{
	cardpack = new CardPackage();
	gamecore = new GameCore();
}
Engine::~Engine()
{

}
void Engine::startGameCore(QString character){

	//QYXCQWindow->getUi().menuGroupBox->setVisible(false);
	gamecore->startGame(character);
}
CardPackage* Engine::getCardPack(){
	return cardpack;
}