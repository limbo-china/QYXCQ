#ifndef PACKAGE_H
#define PACKAGE_H

#include "QtHeader.h"
#include "Card.h"


class Package : public QObject{

	Q_OBJECT
	Q_ENUMS(Type)

public:

	enum Type{
		General, Cardtype /*not named 'Card' to aviod conflicting with class 'Card' */
	};

	Package();

	Package(Type t){ m_type = t; }

private:

	Type m_type;

};

class CardPackage : public Package{

	Q_OBJECT

public:
	
	CardPackage();
	QList<Card *> cards;

};

class GeneralPackage :public Package{
	
	Q_OBJECT

public:
	GeneralPackage();

};

#endif