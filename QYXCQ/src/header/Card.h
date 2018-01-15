#ifndef CARD_H
#define CARD_H
#include "QtHeader.h"

//static QList<QString> cards;
//static QList<QString> suits;

class Card : public QObject{

	Q_OBJECT

public:

	/*enum Suit{
		spade, club, heart, diamond
	};*/

	/*enum Color{
		Red, Black
	};*/
	/*enum Type{
		basic, skill, equip
	};*/

	Card();
	Card(QString suit, QString type, int p);
	//void setSuit(Suit s);
	//void setColor(Color c);
	//void setType(Type t);
	QString getSuit();
	QString getType();
	int getPoints();

private:

	QString m_suit;
	QString  m_type;
	int m_points;
};

//class CardInfo: public QObject{
//
//	Q_OBJECT
//public:
//
//	static void init();
//	static QString getNameByCard(Card* c);
//	static int getTypeByCard(Card* c);
//	static int getTypeByName(QString s);
//	//int getCardNumber(Card* c);
//	static QList<QString> cards;
//	static QList<QString> suits;
//};

class SkillCard : public Card{

	Q_OBJECT

public:
	/*enum Skill{
		juedou, shoupenglei, wuxie, huadi, jiedao, wugu, wuzhong, xiuyang, fenghuo, wanjian, tannang, fudi
	};*/

	SkillCard(QString skill, QString sui, int p);

	//void setSkill(Skill s);
	QString getSkill();

private:

	QString m_skill;

};

class BasicCard : public Card{

	Q_OBJECT

public:

	/*enum Basic{
		slash, parry, supplement
	};*/
	BasicCard(QString b, QString suit, int p);

	//void setBasic(Basic b);
	QString getBasic();

private:

	QString m_basic;

};

class EquipCard : public Card{

	Q_OBJECT

public:

	/*enum Equip{
		jingong, fangyu, yuchangjian, bolangchui, bawanggong, yuruyu, langyabang, panlonggun, luyeqiang, hufu, longlindao
	};*/
	EquipCard(QString e, QString suit, int p);

	//void setEquip(Equip e);
	QString getEquip();

private:

	QString m_equip;
};


#endif