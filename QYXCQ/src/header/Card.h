#ifndef CARD_H
#define CARD_H
#include "QtHeader.h"

class Card : public QObject{

	Q_OBJECT
	Q_ENUMS(Suit)
	Q_ENUMS(Color)
	Q_ENUMS(Type)

public:

	enum Suit{
		Spade, Club, Heart, Diamond
	};

	enum Color{
		Red, Black
	};
	enum Type{
		Basic, Skill, Equip
	};

	Card();
	Card(Suit s, Color c, Type t, int p);
	//void setSuit(Suit s);
	//void setColor(Color c);
	//void setType(Type t);
	Suit getSuit();
	Color getColor();
	Type getType();
	int getPoints();

private:

	Suit m_suit;
	Color m_color;
	Type  m_type;
	int m_points;
};


class SkillCard : public Card{

	Q_OBJECT
	Q_ENUMS(SKill)

public:
	enum Skill{
		Juedou, Shoupenglei, Wuxie, Huadi, Jiedao, Wugu, Wuzhong, Xiuyang, Fenghuo, Wanjian, Tannang, Fudi
	};

	SkillCard(Skill s, Suit sui, Color c, int p);

	//void setSkill(Skill s);
	Skill getSkill();

private:

	Skill m_skill;

};

class BasicCard : public Card{

	Q_OBJECT
	Q_ENUMS(Basic)

public:

	enum Basic{
		blow, parry, supplement
	};
	BasicCard(Basic b);

	//void setBasic(Basic b);
	Basic getBasic();

private:

	Basic m_basic;

};

class EquipCard : public Card{

	Q_OBJECT
	Q_ENUMS(Equip)

public:

	enum Equip{
		jingong, fangyu, yuchangjian, bolangchui, bawanggong, yuruyu, langyabang, panlonggun, luyeqiang, hufu, longlindao
	};
	EquipCard(Equip e);

	//void setEquip(Equip e);
	Equip getEquip();

private:

	Equip m_equip;
};
#endif