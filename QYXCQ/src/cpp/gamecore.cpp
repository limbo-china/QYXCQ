#include "gamecore.h"
#include "QYXCQ.h"


GameCore::GameCore(int players){

	CardPackage* cardpackage = new CardPackage();

	foreach(Card* c, cardpackage->cards)
		remaincards << c;

	playernum = players;

}
void GameCore::startGame(QString character){

	for (int i = 0; i < playernum; i++)
	{
		Player* player = new Player(/*character*/);
		players << player;
	}

	//dealCards();
	generatePlayerBoard(&players);
}

void GameCore::generatePlayerBoard(QList<Player* >* players){

	
	//2 players
	Player* player = (*players)[0];
	QWidget* g_w = QYXCQWindow->getUi().centralWidget;
	QWidget* w = new QWidget(g_w);
	w->setGeometry(QRect(340, 40, 441, 194));
	QHBoxLayout* horizontalLayout = new QHBoxLayout(w);
	horizontalLayout->setContentsMargins(0, 0, 0, 0);
	QVBoxLayout* verticalLayout = new QVBoxLayout(w);
	QSpacerItem* verticalSpacer = new QSpacerItem(17, 88, QSizePolicy::Minimum, QSizePolicy::Expanding);
	verticalLayout->addItem(verticalSpacer);
	player->m_cardcontainer = new QListWidget(w);
	player->okbutton = new QPushButton(w);
	player->cancelbutton = new QPushButton(w);
	player->bloodlabel = new QLabel(w);
	player->cardnumlabel = new QLabel(w);
	verticalLayout->addWidget(player->okbutton);
	verticalLayout->addWidget(player->cancelbutton);
	horizontalLayout->addLayout(verticalLayout);
	horizontalLayout->addWidget(player->m_cardcontainer);
	QVBoxLayout* verticalLayout2 = new QVBoxLayout(w);
	verticalLayout2->addWidget(player->bloodlabel);
	verticalLayout2->addWidget(player->cardnumlabel);
	horizontalLayout->addLayout(verticalLayout2);
	player->okbutton->setText(tr("OK"));
	player->cancelbutton->setText(tr("Cancel"));
	player->bloodlabel->setText(QString::number(player->getBlood()));
	player->cardnumlabel->setText(QString::number(player->getCardsNum()));

	Player* player2 = (*players)[1];
	QWidget* w2 = new QWidget(g_w);
	w2->setGeometry(QRect(51, 401, 441, 194));
	QHBoxLayout* horizontalLayout2 = new QHBoxLayout(w2);
	horizontalLayout2->setContentsMargins(0, 0, 0, 0);
	QVBoxLayout* verticalLayout3 = new QVBoxLayout(w2);
	QSpacerItem* verticalSpacer2 = new QSpacerItem(17, 88, QSizePolicy::Minimum, QSizePolicy::Expanding);
	verticalLayout3->addItem(verticalSpacer2);
	player2->m_cardcontainer = new QListWidget(w2);
	player2->okbutton = new QPushButton(w2);
	player2->cancelbutton = new QPushButton(w2);
	player2->bloodlabel = new QLabel(w2);
	player2->cardnumlabel = new QLabel(w2);
	verticalLayout3->addWidget(player2->okbutton);
	verticalLayout3->addWidget(player2->cancelbutton);
	horizontalLayout2->addLayout(verticalLayout3);
	horizontalLayout2->addWidget(player2->m_cardcontainer);
	QVBoxLayout* verticalLayout4 = new QVBoxLayout(w2);
	verticalLayout4->addWidget(player2->bloodlabel);
	verticalLayout4->addWidget(player2->cardnumlabel);
	horizontalLayout2->addLayout(verticalLayout4);
	player2->okbutton->setText(tr("OK"));
	player2->cancelbutton->setText(tr("Cancel"));
	player2->bloodlabel->setText(QString::number(player2->getBlood()));
	player2->cardnumlabel->setText(QString::number(player2->getCardsNum()));

	QVBoxLayout* g_verticalLayout = new QVBoxLayout();
	g_verticalLayout->addLayout(horizontalLayout);
	g_verticalLayout->addLayout(horizontalLayout2);

	g_w->setLayout(g_verticalLayout);

}