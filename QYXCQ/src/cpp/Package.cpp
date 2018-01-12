#include "Package.h"

CardPackage::CardPackage() : Package(Type::Cardtype){

	cards << new SkillCard(SkillCard::Juedou, Card::Spade, Card::Red, 1);
}