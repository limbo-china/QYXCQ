#include "player.h"


Player::Player(): m_blood(4){

	

};
void Player::getOneCard(Card* c){

	m_cards << c;
	
	QString s1 = c->getName();
	QString s = c->getName() + " " + c->getSuit() + " " + QString::number(c->getPoint());
	m_cardcontainer->addItem(s);
	cardnumlabel->setText(QString::number(m_cards.length()));
}