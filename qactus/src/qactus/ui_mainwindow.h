/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "packagetreewidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbout;
    QAction *action_aboutQt;
    QAction *actionQuit;
    QAction *actionConfigure_Qactus;
    QAction *actionLogin;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tabPackages;
    QGridLayout *gridLayout_tabPackages;
    PackageTreeWidget *treePackages;
    QWidget *tabRequests;
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QTreeWidget *treeRequests;
    QTextBrowser *textBrowser;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QMenu *menuSettings;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(785, 520);
        QIcon icon;
        icon.addFile(QStringLiteral(":/obs.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/help-about.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon1);
        action_aboutQt = new QAction(MainWindow);
        action_aboutQt->setObjectName(QStringLiteral("action_aboutQt"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/application-exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon2);
        actionConfigure_Qactus = new QAction(MainWindow);
        actionConfigure_Qactus->setObjectName(QStringLiteral("actionConfigure_Qactus"));
        actionConfigure_Qactus->setEnabled(true);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons/configure.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionConfigure_Qactus->setIcon(icon3);
        actionLogin = new QAction(MainWindow);
        actionLogin->setObjectName(QStringLiteral("actionLogin"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icons/dialog-password.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLogin->setIcon(icon4);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabPackages = new QWidget();
        tabPackages->setObjectName(QStringLiteral("tabPackages"));
        gridLayout_tabPackages = new QGridLayout(tabPackages);
        gridLayout_tabPackages->setObjectName(QStringLiteral("gridLayout_tabPackages"));
        treePackages = new PackageTreeWidget(tabPackages);
        treePackages->setObjectName(QStringLiteral("treePackages"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(treePackages->sizePolicy().hasHeightForWidth());
        treePackages->setSizePolicy(sizePolicy);
        treePackages->setFrameShadow(QFrame::Sunken);
        treePackages->setAlternatingRowColors(true);
        treePackages->setSelectionMode(QAbstractItemView::SingleSelection);
        treePackages->setSelectionBehavior(QAbstractItemView::SelectRows);
        treePackages->setRootIsDecorated(false);
        treePackages->setSortingEnabled(true);

        gridLayout_tabPackages->addWidget(treePackages, 0, 0, 1, 1);

        tabWidget->addTab(tabPackages, QString());
        tabRequests = new QWidget();
        tabRequests->setObjectName(QStringLiteral("tabRequests"));
        sizePolicy.setHeightForWidth(tabRequests->sizePolicy().hasHeightForWidth());
        tabRequests->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(tabRequests);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        splitter = new QSplitter(tabRequests);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        treeRequests = new QTreeWidget(splitter);
        treeRequests->setObjectName(QStringLiteral("treeRequests"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(treeRequests->sizePolicy().hasHeightForWidth());
        treeRequests->setSizePolicy(sizePolicy1);
        treeRequests->setFrameShape(QFrame::StyledPanel);
        treeRequests->setFrameShadow(QFrame::Sunken);
        treeRequests->setProperty("showDropIndicator", QVariant(false));
        treeRequests->setDragDropOverwriteMode(false);
        treeRequests->setAlternatingRowColors(true);
        treeRequests->setSelectionMode(QAbstractItemView::SingleSelection);
        treeRequests->setSelectionBehavior(QAbstractItemView::SelectRows);
        treeRequests->setRootIsDecorated(false);
        treeRequests->setSortingEnabled(true);
        splitter->addWidget(treeRequests);
        textBrowser = new QTextBrowser(splitter);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        sizePolicy1.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy1);
        splitter->addWidget(textBrowser);

        verticalLayout->addWidget(splitter);

        tabWidget->addTab(tabRequests, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 785, 29));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuSettings = new QMenu(menubar);
        menuSettings->setObjectName(QStringLiteral("menuSettings"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuSettings->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionLogin);
        menuFile->addAction(actionQuit);
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(action_aboutQt);
        menuSettings->addAction(actionConfigure_Qactus);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Qactus", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "&About", 0));
        action_aboutQt->setText(QApplication::translate("MainWindow", "About &Qt", 0));
        actionQuit->setText(QApplication::translate("MainWindow", "&Quit", 0));
        actionQuit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0));
        actionConfigure_Qactus->setText(QApplication::translate("MainWindow", "&Configure Qactus", 0));
        actionLogin->setText(QApplication::translate("MainWindow", "&Login", 0));
        QTreeWidgetItem *___qtreewidgetitem = treePackages->headerItem();
        ___qtreewidgetitem->setText(4, QApplication::translate("MainWindow", "Status", 0));
        ___qtreewidgetitem->setText(3, QApplication::translate("MainWindow", "Arch", 0));
        ___qtreewidgetitem->setText(2, QApplication::translate("MainWindow", "Repository", 0));
        ___qtreewidgetitem->setText(1, QApplication::translate("MainWindow", "Package", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindow", "Project", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabPackages), QApplication::translate("MainWindow", "Packages", 0));
        QTreeWidgetItem *___qtreewidgetitem1 = treeRequests->headerItem();
        ___qtreewidgetitem1->setText(6, QApplication::translate("MainWindow", "State", 0));
        ___qtreewidgetitem1->setText(5, QApplication::translate("MainWindow", "Type", 0));
        ___qtreewidgetitem1->setText(4, QApplication::translate("MainWindow", "Requester", 0));
        ___qtreewidgetitem1->setText(3, QApplication::translate("MainWindow", "Target", 0));
        ___qtreewidgetitem1->setText(2, QApplication::translate("MainWindow", "Source", 0));
        ___qtreewidgetitem1->setText(1, QApplication::translate("MainWindow", "SR#", 0));
        ___qtreewidgetitem1->setText(0, QApplication::translate("MainWindow", "Date", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabRequests), QApplication::translate("MainWindow", "Requests", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "Fi&le", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
        menuSettings->setTitle(QApplication::translate("MainWindow", "Setti&ngs", 0));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
