/********************************************************************************
** Form generated from reading UI file 'QYXCQ.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QYXCQ_H
#define UI_QYXCQ_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QYXCQClass
{
public:
    QWidget *centralWidget;
    QWidget *playBoard;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *player1CardLabel;
    QLabel *player1BloodLabel;
    QListWidget *player1CardContainer;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;
    QPushButton *player1CancelButton;
    QPushButton *player1OkButton;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *player2CardLabel;
    QLabel *player2BloodLabel;
    QSpacerItem *verticalSpacer_3;
    QListWidget *player2CardContainer;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_4;
    QPushButton *player2OkButton;
    QPushButton *player2CancelButton;
    QLabel *remainNumLabel;
    QLabel *discardNumLabel;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QYXCQClass)
    {
        if (QYXCQClass->objectName().isEmpty())
            QYXCQClass->setObjectName(QStringLiteral("QYXCQClass"));
        QYXCQClass->resize(824, 733);
        centralWidget = new QWidget(QYXCQClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        playBoard = new QWidget(centralWidget);
        playBoard->setObjectName(QStringLiteral("playBoard"));
        playBoard->setEnabled(true);
        playBoard->setGeometry(QRect(30, 20, 791, 641));
        layoutWidget = new QWidget(playBoard);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(330, 40, 422, 194));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        player1CardLabel = new QLabel(layoutWidget);
        player1CardLabel->setObjectName(QStringLiteral("player1CardLabel"));

        verticalLayout->addWidget(player1CardLabel);

        player1BloodLabel = new QLabel(layoutWidget);
        player1BloodLabel->setObjectName(QStringLiteral("player1BloodLabel"));

        verticalLayout->addWidget(player1BloodLabel);


        horizontalLayout->addLayout(verticalLayout);

        player1CardContainer = new QListWidget(layoutWidget);
        player1CardContainer->setObjectName(QStringLiteral("player1CardContainer"));
        player1CardContainer->setSelectionMode(QAbstractItemView::MultiSelection);

        horizontalLayout->addWidget(player1CardContainer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        player1CancelButton = new QPushButton(layoutWidget);
        player1CancelButton->setObjectName(QStringLiteral("player1CancelButton"));

        verticalLayout_2->addWidget(player1CancelButton);

        player1OkButton = new QPushButton(layoutWidget);
        player1OkButton->setObjectName(QStringLiteral("player1OkButton"));

        verticalLayout_2->addWidget(player1OkButton);


        horizontalLayout->addLayout(verticalLayout_2);

        layoutWidget1 = new QWidget(playBoard);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 390, 422, 194));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        player2CardLabel = new QLabel(layoutWidget1);
        player2CardLabel->setObjectName(QStringLiteral("player2CardLabel"));

        verticalLayout_3->addWidget(player2CardLabel);

        player2BloodLabel = new QLabel(layoutWidget1);
        player2BloodLabel->setObjectName(QStringLiteral("player2BloodLabel"));

        verticalLayout_3->addWidget(player2BloodLabel);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_2->addItem(verticalSpacer_3);

        player2CardContainer = new QListWidget(layoutWidget1);
        player2CardContainer->setObjectName(QStringLiteral("player2CardContainer"));
        player2CardContainer->setSelectionMode(QAbstractItemView::MultiSelection);

        horizontalLayout_2->addWidget(player2CardContainer);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_4);

        player2OkButton = new QPushButton(layoutWidget1);
        player2OkButton->setObjectName(QStringLiteral("player2OkButton"));

        verticalLayout_4->addWidget(player2OkButton);

        player2CancelButton = new QPushButton(layoutWidget1);
        player2CancelButton->setObjectName(QStringLiteral("player2CancelButton"));

        verticalLayout_4->addWidget(player2CancelButton);


        horizontalLayout_2->addLayout(verticalLayout_4);

        remainNumLabel = new QLabel(playBoard);
        remainNumLabel->setObjectName(QStringLiteral("remainNumLabel"));
        remainNumLabel->setGeometry(QRect(30, 30, 72, 15));
        discardNumLabel = new QLabel(playBoard);
        discardNumLabel->setObjectName(QStringLiteral("discardNumLabel"));
        discardNumLabel->setGeometry(QRect(170, 30, 72, 15));
        label = new QLabel(playBoard);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 10, 72, 15));
        label_2 = new QLabel(playBoard);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(170, 10, 72, 15));
        QYXCQClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QYXCQClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 824, 26));
        QYXCQClass->setMenuBar(menuBar);
        statusBar = new QStatusBar(QYXCQClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QYXCQClass->setStatusBar(statusBar);

        retranslateUi(QYXCQClass);

        QMetaObject::connectSlotsByName(QYXCQClass);
    } // setupUi

    void retranslateUi(QMainWindow *QYXCQClass)
    {
        QYXCQClass->setWindowTitle(QApplication::translate("QYXCQClass", "QYXCQ", 0));
        player1CardLabel->setText(QApplication::translate("QYXCQClass", "TextLabel", 0));
        player1BloodLabel->setText(QApplication::translate("QYXCQClass", "TextLabel", 0));
        player1CancelButton->setText(QApplication::translate("QYXCQClass", "PushButton", 0));
        player1OkButton->setText(QApplication::translate("QYXCQClass", "PushButton", 0));
        player2CardLabel->setText(QApplication::translate("QYXCQClass", "TextLabel", 0));
        player2BloodLabel->setText(QApplication::translate("QYXCQClass", "TextLabel", 0));
        player2OkButton->setText(QApplication::translate("QYXCQClass", "PushButton", 0));
        player2CancelButton->setText(QApplication::translate("QYXCQClass", "PushButton", 0));
        remainNumLabel->setText(QApplication::translate("QYXCQClass", "TextLabel", 0));
        discardNumLabel->setText(QApplication::translate("QYXCQClass", "TextLabel", 0));
        label->setText(QApplication::translate("QYXCQClass", "\345\211\251\344\275\231", 0));
        label_2->setText(QApplication::translate("QYXCQClass", "\344\270\242\345\274\203", 0));
    } // retranslateUi

};

namespace Ui {
    class QYXCQClass: public Ui_QYXCQClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QYXCQ_H
