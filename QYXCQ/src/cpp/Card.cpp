#include "Card.h"

Card::Card(){}
Card::Card(Suit s, Color c, Type t, int p)
: m_suit(s), m_color(c), m_type(t), m_points(p)
{
}

Card::Suit Card::getSuit(){ return m_suit; }
Card::Color Card::getColor(){ return m_color; }
Card::Type Card::getType(){ return m_type; }
int Card::getPoints(){ return m_points; }

SkillCard::SkillCard(Skill s, Suit sui, Color c, int p) : Card(sui, c, Type::Skill, p), m_skill(s)
{
}

SkillCard::Skill SkillCard::getSkill(){ return m_skill; }

BasicCard::BasicCard(Basic b) : m_basic(b)
{
}

BasicCard::Basic BasicCard::getBasic(){ return m_basic; }

EquipCard::EquipCard(Equip e) : m_equip(e)
{
}

EquipCard::Equip EquipCard::getEquip(){ return m_equip; }

