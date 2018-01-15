#include "cardOverViewDialog.h"
#include "Engine.h"

CardOverViewDialog::CardOverViewDialog(QWidget * parent)
: QDialog(parent){

	ui.setupUi(this);

	CardInfo* ci = QYXCQEngine->cardinfo;
	CardPackage* cp = QYXCQEngine->getCardPack();
	int cardcount = cp->getAllCount();
	ui.tableWidget->setRowCount(cardcount);
	ui.tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

	for (int i = 0; i < cardcount; i++){
		QTableWidgetItem* t = new QTableWidgetItem(ci->getCardName(cp->cards[i]));
		ui.tableWidget->setItem(i, 0, t);
	}


}
CardOverViewDialog::~CardOverViewDialog(){

}