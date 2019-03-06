/********************************************************************************
** Form generated from reading UI file 'main_window.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_H
#define UI_MAIN_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *about;
    QAction *aboutQt;
    QAction *preferences;
    QAction *quit;
    QWidget *widgetMain;
    QVBoxLayout *layoutMain;
    QTabWidget *tabs;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QListWidget *remotes;
    QHBoxLayout *horizontalLayout;
    QPushButton *config;
    QPushButton *refresh;
    QSpacerItem *horizontalSpacer;
    QPushButton *open;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QScrollArea *jobsArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *jobs;
    QLabel *noJobsAvailable;
    QSpacerItem *verticalSpacer;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(658, 411);
        about = new QAction(MainWindow);
        about->setObjectName(QStringLiteral("about"));
        about->setMenuRole(QAction::AboutRole);
        aboutQt = new QAction(MainWindow);
        aboutQt->setObjectName(QStringLiteral("aboutQt"));
        aboutQt->setMenuRole(QAction::AboutQtRole);
        preferences = new QAction(MainWindow);
        preferences->setObjectName(QStringLiteral("preferences"));
        preferences->setMenuRole(QAction::PreferencesRole);
        quit = new QAction(MainWindow);
        quit->setObjectName(QStringLiteral("quit"));
        quit->setMenuRole(QAction::QuitRole);
        widgetMain = new QWidget(MainWindow);
        widgetMain->setObjectName(QStringLiteral("widgetMain"));
        layoutMain = new QVBoxLayout(widgetMain);
        layoutMain->setSpacing(0);
        layoutMain->setObjectName(QStringLiteral("layoutMain"));
        layoutMain->setContentsMargins(0, 0, 0, 0);
        tabs = new QTabWidget(widgetMain);
        tabs->setObjectName(QStringLiteral("tabs"));
        tabs->setTabsClosable(true);
        widget = new QWidget();
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        remotes = new QListWidget(widget);
        remotes->setObjectName(QStringLiteral("remotes"));
        remotes->setEditTriggers(QAbstractItemView::NoEditTriggers);
        remotes->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(remotes);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        config = new QPushButton(widget);
        config->setObjectName(QStringLiteral("config"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(config->sizePolicy().hasHeightForWidth());
        config->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(config);

        refresh = new QPushButton(widget);
        refresh->setObjectName(QStringLiteral("refresh"));

        horizontalLayout->addWidget(refresh);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        open = new QPushButton(widget);
        open->setObjectName(QStringLiteral("open"));
        open->setEnabled(false);

        horizontalLayout->addWidget(open);


        verticalLayout->addLayout(horizontalLayout);

        tabs->addTab(widget, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        jobsArea = new QScrollArea(tab);
        jobsArea->setObjectName(QStringLiteral("jobsArea"));
        jobsArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 628, 305));
        verticalLayout_4 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        jobs = new QVBoxLayout();
        jobs->setObjectName(QStringLiteral("jobs"));
        noJobsAvailable = new QLabel(scrollAreaWidgetContents);
        noJobsAvailable->setObjectName(QStringLiteral("noJobsAvailable"));

        jobs->addWidget(noJobsAvailable);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        jobs->addItem(verticalSpacer);


        verticalLayout_4->addLayout(jobs);

        jobsArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(jobsArea);

        tabs->addTab(tab, QString());

        layoutMain->addWidget(tabs);

        MainWindow->setCentralWidget(widgetMain);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 658, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(tabs, remotes);
        QWidget::setTabOrder(remotes, config);
        QWidget::setTabOrder(config, refresh);
        QWidget::setTabOrder(refresh, open);
        QWidget::setTabOrder(open, jobsArea);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(preferences);
        menuFile->addSeparator();
        menuFile->addAction(quit);
        menuHelp->addAction(about);
        menuHelp->addAction(aboutQt);

        retranslateUi(MainWindow);

        tabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Rclone Browser", Q_NULLPTR));
        about->setText(QApplication::translate("MainWindow", "&About", Q_NULLPTR));
        aboutQt->setText(QApplication::translate("MainWindow", "About &Qt", Q_NULLPTR));
        preferences->setText(QApplication::translate("MainWindow", "&Preferences...", Q_NULLPTR));
        quit->setText(QApplication::translate("MainWindow", "&Quit", Q_NULLPTR));
        quit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", Q_NULLPTR));
        config->setText(QApplication::translate("MainWindow", "&Config...", Q_NULLPTR));
        refresh->setText(QApplication::translate("MainWindow", "Refresh", Q_NULLPTR));
        open->setText(QApplication::translate("MainWindow", "&Open", Q_NULLPTR));
        tabs->setTabText(tabs->indexOf(widget), QApplication::translate("MainWindow", "Remotes", Q_NULLPTR));
        noJobsAvailable->setText(QApplication::translate("MainWindow", "No jobs are available", Q_NULLPTR));
        tabs->setTabText(tabs->indexOf(tab), QApplication::translate("MainWindow", "Jobs", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainWindow", "&File", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("MainWindow", "&Help", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H
