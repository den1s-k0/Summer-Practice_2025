/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQTableWidget;
    QAction *actionQListWidget;
    QAction *actionQListView;
    QAction *actionExit;
    QAction *actionMain;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit_1_1;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QStackedWidget *stackedWidget;
    QWidget *page_0;
    QGridLayout *gridLayout_6;
    QLabel *label_4;
    QLabel *label_5;
    QWidget *page_1;
    QGridLayout *gridLayout_3;
    QListView *listView;
    QLabel *label_1;
    QWidget *page_2;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_2_1;
    QPushButton *pushButton_2_2;
    QPushButton *pushButton_2_3;
    QPushButton *pushButton_2_4;
    QLabel *label_2;
    QListWidget *listWidget;
    QWidget *page_3;
    QGridLayout *gridLayout_5;
    QTableWidget *tableWidget;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_3_1;
    QPushButton *pushButton_3_2;
    QMenuBar *menubar;
    QMenu *menulistView;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        actionQTableWidget = new QAction(MainWindow);
        actionQTableWidget->setObjectName("actionQTableWidget");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/rec/img/tabel.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionQTableWidget->setIcon(icon);
        actionQListWidget = new QAction(MainWindow);
        actionQListWidget->setObjectName("actionQListWidget");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/rec/img/List.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionQListWidget->setIcon(icon1);
        actionQListView = new QAction(MainWindow);
        actionQListView->setObjectName("actionQListView");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/rec/img/List1.jpg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionQListView->setIcon(icon2);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/rec/img/exit.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionExit->setIcon(icon3);
        actionMain = new QAction(MainWindow);
        actionMain->setObjectName("actionMain");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/rec/img/computer.jpg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionMain->setIcon(icon4);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 780, 537));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        lineEdit_1_1 = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_1_1->setObjectName("lineEdit_1_1");

        verticalLayout_2->addWidget(lineEdit_1_1);


        horizontalLayout->addLayout(verticalLayout_2);

        pushButton = new QPushButton(scrollAreaWidgetContents);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(270, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout_2->addLayout(horizontalLayout, 4, 0, 1, 1);

        stackedWidget = new QStackedWidget(scrollAreaWidgetContents);
        stackedWidget->setObjectName("stackedWidget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        stackedWidget->setMinimumSize(QSize(0, 455));
        stackedWidget->setSizeIncrement(QSize(0, 440));
        page_0 = new QWidget();
        page_0->setObjectName("page_0");
        gridLayout_6 = new QGridLayout(page_0);
        gridLayout_6->setObjectName("gridLayout_6");
        label_4 = new QLabel(page_0);
        label_4->setObjectName("label_4");

        gridLayout_6->addWidget(label_4, 0, 0, 1, 1);

        label_5 = new QLabel(page_0);
        label_5->setObjectName("label_5");
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setMinimumSize(QSize(0, 400));

        gridLayout_6->addWidget(label_5, 1, 0, 1, 1);

        stackedWidget->addWidget(page_0);
        page_1 = new QWidget();
        page_1->setObjectName("page_1");
        gridLayout_3 = new QGridLayout(page_1);
        gridLayout_3->setObjectName("gridLayout_3");
        listView = new QListView(page_1);
        listView->setObjectName("listView");
        listView->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        listView->setProperty("showDropIndicator", QVariant(false));

        gridLayout_3->addWidget(listView, 1, 0, 1, 1);

        label_1 = new QLabel(page_1);
        label_1->setObjectName("label_1");

        gridLayout_3->addWidget(label_1, 0, 0, 1, 1);

        stackedWidget->addWidget(page_1);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        gridLayout_4 = new QGridLayout(page_2);
        gridLayout_4->setObjectName("gridLayout_4");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton_2_1 = new QPushButton(page_2);
        pushButton_2_1->setObjectName("pushButton_2_1");

        horizontalLayout_2->addWidget(pushButton_2_1);

        pushButton_2_2 = new QPushButton(page_2);
        pushButton_2_2->setObjectName("pushButton_2_2");

        horizontalLayout_2->addWidget(pushButton_2_2);

        pushButton_2_3 = new QPushButton(page_2);
        pushButton_2_3->setObjectName("pushButton_2_3");

        horizontalLayout_2->addWidget(pushButton_2_3);

        pushButton_2_4 = new QPushButton(page_2);
        pushButton_2_4->setObjectName("pushButton_2_4");

        horizontalLayout_2->addWidget(pushButton_2_4);


        gridLayout_4->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        label_2 = new QLabel(page_2);
        label_2->setObjectName("label_2");

        gridLayout_4->addWidget(label_2, 0, 0, 1, 1);

        listWidget = new QListWidget(page_2);
        listWidget->setObjectName("listWidget");

        gridLayout_4->addWidget(listWidget, 1, 0, 1, 1);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        gridLayout_5 = new QGridLayout(page_3);
        gridLayout_5->setObjectName("gridLayout_5");
        tableWidget = new QTableWidget(page_3);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setMaximumSize(QSize(744, 16777215));
        tableWidget->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        tableWidget->setColumnCount(3);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget->horizontalHeader()->setDefaultSectionSize(100);

        gridLayout_5->addWidget(tableWidget, 1, 0, 1, 1);

        label_3 = new QLabel(page_3);
        label_3->setObjectName("label_3");

        gridLayout_5->addWidget(label_3, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pushButton_3_1 = new QPushButton(page_3);
        pushButton_3_1->setObjectName("pushButton_3_1");

        horizontalLayout_3->addWidget(pushButton_3_1);

        pushButton_3_2 = new QPushButton(page_3);
        pushButton_3_2->setObjectName("pushButton_3_2");

        horizontalLayout_3->addWidget(pushButton_3_2);


        gridLayout_5->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        stackedWidget->addWidget(page_3);

        gridLayout_2->addWidget(stackedWidget, 5, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menulistView = new QMenu(menubar);
        menulistView->setObjectName("menulistView");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menulistView->menuAction());
        menulistView->addSeparator();
        menulistView->addAction(actionMain);
        menulistView->addSeparator();
        menulistView->addAction(actionQListView);
        menulistView->addAction(actionQListWidget);
        menulistView->addAction(actionQTableWidget);
        menulistView->addSeparator();
        menulistView->addAction(actionExit);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionQTableWidget->setText(QCoreApplication::translate("MainWindow", "QTableWidget", nullptr));
        actionQListWidget->setText(QCoreApplication::translate("MainWindow", "QListWidget", nullptr));
        actionQListView->setText(QCoreApplication::translate("MainWindow", "QListView", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionMain->setText(QCoreApplication::translate("MainWindow", "Main", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\207\320\270\321\201\320\273\320\276 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\276\320\262, \320\272\320\276\321\202\320\276\321\200\321\213\320\265 \320\275\320\265\320\276\320\261\321\205\320\276\320\264\320\270\320\274\320\276 \320\277\321\200\320\276\321\207\320\265\321\201\321\202\321\214 \320\270\320\267 \321\204\320\260\320\271\320\273\320\260", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "OK", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">\320\247\321\202\320\276\320\261\321\213 \320\275\320\260\321\207\320\260\321\202\321\214, \320\262\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\262\320\270\320\264 \321\201\320\277\320\270\321\201\320\272\320\260 \320\262 \320\273\320\265\320\262\320\276\320\274 \320\262\320\265\321\200\321\205\320\275\320\265\320\274 \321\203\320\263\320\273\321\203</p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><img src=\":/rec/img/computer.jpg\"/></p></body></html>", nullptr));
        label_1->setText(QCoreApplication::translate("MainWindow", "QListView", nullptr));
        pushButton_2_1->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\215\320\273\320\265\320\274\320\265\320\275\321\202 \320\262 List Widget", nullptr));
        pushButton_2_2->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\215\320\273\320\265\320\274\320\265\320\275\321\202 \320\270\320\267 List Widget", nullptr));
        pushButton_2_3->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\260\320\275\320\264\320\260\321\200\321\202\320\275\320\260\321\217 \321\201\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\272\320\260", nullptr));
        pushButton_2_4->setText(QCoreApplication::translate("MainWindow", "\320\230\320\275\320\264\320\270\320\262\320\270\320\264\321\203\320\260\320\273\321\214\320\275\320\260\321\217 \321\201\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\272\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "QListWidget", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "QTableWidget", nullptr));
        pushButton_3_1->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\215\320\273\320\265\320\274\320\265\320\275\321\202 \320\262 Table Widget", nullptr));
        pushButton_3_2->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\215\320\273\320\265\320\274\320\265\320\275\321\202 \320\270\320\267 Table Widget", nullptr));
        menulistView->setTitle(QCoreApplication::translate("MainWindow", "\320\222\320\270\320\264 \321\201\320\277\320\270\321\201\320\272\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
