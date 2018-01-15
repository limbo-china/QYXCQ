#include "Engine.h"

Engine* QYXCQEngine = NULL;

Engine::Engine()
{
	CardInfo::init();
	cardpack = new CardPackage();
}
Engine::~Engine()
{

}
CardPackage* Engine::getCardPack(){
	return cardpack;
}