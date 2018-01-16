#include "cardOverViewDialog.h"
#include "Engine.h"

CardOverViewDialog::CardOverViewDialog(QWidget * parent)
: QDialog(parent){

	ui.setupUi(this);

	CardPackage* cp = QYXCQEngine->getCardPack();
	int cardcount = cp->getAllCount();
	ui.tableWidget->setRowCount(cardcount);
	QStringList columns;
	columns << tr("Name") << tr("Suit") << tr("Point") << tr("Type");
	ui.tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

	for (int i = 0; i < cardcount; i++){
		QTableWidgetItem* name = new QTableWidgetItem(cp->cards[i]->getName());
		QTableWidgetItem* suit = new QTableWidgetItem(cp->cards[i]->getSuit());
		QTableWidgetItem* point = new QTableWidgetItem(QString::number(cp->cards[i]->getPoint()));
		QTableWidgetItem* type = new QTableWidgetItem(cp->cards[i]->getType());
		ui.tableWidget->setItem(i, 0, name);
		ui.tableWidget->setItem(i, 1, suit);
		ui.tableWidget->setItem(i, 2, point);
		ui.tableWidget->setItem(i, 3, type);
	}


}
CardOverViewDialog::~CardOverViewDialog(){

}