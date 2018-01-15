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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QYXCQClass
{
public:
    QWidget *centralWidget;
    QPushButton *startButton;
    QPushButton *cardViewButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QYXCQClass)
    {
        if (QYXCQClass->objectName().isEmpty())
            QYXCQClass->setObjectName(QStringLiteral("QYXCQClass"));
        QYXCQClass->resize(825, 733);
        centralWidget = new QWidget(QYXCQClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        startButton = new QPushButton(centralWidget);
        startButton->setObjectName(QStringLiteral("startButton"));
        startButton->setGeometry(QRect(260, 140, 93, 28));
        cardViewButton = new QPushButton(centralWidget);
        cardViewButton->setObjectName(QStringLiteral("cardViewButton"));
        cardViewButton->setGeometry(QRect(260, 220, 151, 28));
        QYXCQClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QYXCQClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 825, 26));
        QYXCQClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QYXCQClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QYXCQClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QYXCQClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QYXCQClass->setStatusBar(statusBar);

        retranslateUi(QYXCQClass);

        QMetaObject::connectSlotsByName(QYXCQClass);
    } // setupUi

    void retranslateUi(QMainWindow *QYXCQClass)
    {
        QYXCQClass->setWindowTitle(QApplication::translate("QYXCQClass", "QYXCQ", 0));
        startButton->setText(QApplication::translate("QYXCQClass", "Start1", 0));
        cardViewButton->setText(QApplication::translate("QYXCQClass", "cardoverview", 0));
    } // retranslateUi

};

namespace Ui {
    class QYXCQClass: public Ui_QYXCQClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QYXCQ_H
