/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "glass.h"
#include "nextfigure.h"
#include "photo.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionExit;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pusButtonNextGame;
    QLabel *label_2;
    NextFigure *widget;
    QLabel *label;
    QLCDNumber *lcdNumber;
    GLASS *Glass;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    Photo *wphoto;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuhjhfj;
    QMenu *menu;
    QMenu *menuSpravka;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(600, 332);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(600, 0));
        MainWindow->setMaximumSize(QSize(600, 400));
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        pusButtonNextGame = new QPushButton(centralWidget);
        pusButtonNextGame->setObjectName(QStringLiteral("pusButtonNextGame"));
        pusButtonNextGame->setMinimumSize(QSize(100, 0));

        verticalLayout_2->addWidget(pusButtonNextGame);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setMaximumSize(QSize(100, 20));

        verticalLayout_2->addWidget(label_2);

        widget = new NextFigure(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        widget->setMinimumSize(QSize(100, 0));

        verticalLayout_2->addWidget(widget);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(100, 25));
        label->setText(QStringLiteral("Naskolko mamochka zadrot:"));
        label->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        label->setWordWrap(true);

        verticalLayout_2->addWidget(label);

        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setMinimumSize(QSize(100, 0));
        lcdNumber->setMaximumSize(QSize(100, 75));

        verticalLayout_2->addWidget(lcdNumber);


        horizontalLayout->addLayout(verticalLayout_2);

        Glass = new GLASS(centralWidget);
        Glass->setObjectName(QStringLiteral("Glass"));
        Glass->setFocusPolicy(Qt::StrongFocus);
        Glass->setProperty("rows", QVariant(20u));
        Glass->setProperty("columns", QVariant(10u));

        horizontalLayout->addWidget(Glass);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(16777215, 20));

        verticalLayout->addWidget(label_3);

        wphoto = new Photo(centralWidget);
        wphoto->setObjectName(QStringLiteral("wphoto"));

        verticalLayout->addWidget(wphoto);


        horizontalLayout->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        menuhjhfj = new QMenu(menuBar);
        menuhjhfj->setObjectName(QStringLiteral("menuhjhfj"));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menuSpravka = new QMenu(menuBar);
        menuSpravka->setObjectName(QStringLiteral("menuSpravka"));
        MainWindow->setMenuBar(menuBar);

        mainToolBar->addAction(actionNew);
        mainToolBar->addAction(actionExit);
        menuBar->addAction(menuhjhfj->menuAction());
        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menuSpravka->menuAction());
        menuhjhfj->addAction(actionNew);
        menuhjhfj->addAction(actionExit);

        retranslateUi(MainWindow);
        QObject::connect(pusButtonNextGame, SIGNAL(clicked()), Glass, SLOT(slotNewGame()));
        QObject::connect(actionExit, SIGNAL(triggered()), MainWindow, SLOT(close()));
        QObject::connect(actionNew, SIGNAL(triggered()), Glass, SLOT(slotNewGame()));
        QObject::connect(Glass, SIGNAL(setScore(int)), lcdNumber, SLOT(display(int)));
        QObject::connect(Glass, SIGNAL(drawPattern(Figure*)), widget, SLOT(setNewNext(Figure*)));
        QObject::connect(Glass, SIGNAL(setScore(int)), wphoto, SLOT(scoreChanged(int)));
        QObject::connect(wphoto, SIGNAL(changeText(QString)), label_3, SLOT(setText(QString)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "tetris", nullptr));
        actionNew->setText(QApplication::translate("MainWindow", "New", nullptr));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        pusButtonNextGame->setText(QApplication::translate("MainWindow", "New", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Next Figure:", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Privet! Horoshei igri!", nullptr));
        menuhjhfj->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        menu->setTitle(QApplication::translate("MainWindow", "Svoistva ", nullptr));
        menuSpravka->setTitle(QApplication::translate("MainWindow", "Spravka", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
