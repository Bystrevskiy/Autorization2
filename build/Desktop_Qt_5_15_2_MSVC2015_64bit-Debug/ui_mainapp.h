/********************************************************************************
** Form generated from reading UI file 'mainapp.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINAPP_H
#define UI_MAINAPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainApp
{
public:
    QAction *actionProducts;
    QWidget *centralwidget;
    QTableWidget *tableWidget;
    QLabel *photo;
    QMenuBar *menubar;
    QMenu *menuProducts;
    QMenu *menuSearch;
    QMenu *menuPersonnel;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainApp)
    {
        if (MainApp->objectName().isEmpty())
            MainApp->setObjectName(QString::fromUtf8("MainApp"));
        MainApp->resize(980, 712);
        actionProducts = new QAction(MainApp);
        actionProducts->setObjectName(QString::fromUtf8("actionProducts"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/icons8-\320\277\320\260\320\277\320\272\320\260-\321\200\320\260\321\201\321\210\320\270\321\200\320\265\320\275\320\270\320\271-50.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionProducts->setIcon(icon);
        actionProducts->setMenuRole(QAction::NoRole);
        centralwidget = new QWidget(MainApp);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 7)
            tableWidget->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 0, 941, 631));
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        photo = new QLabel(centralwidget);
        photo->setObjectName(QString::fromUtf8("photo"));
        photo->setGeometry(QRect(300, 120, 361, 371));
        MainApp->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainApp);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 980, 25));
        menuProducts = new QMenu(menubar);
        menuProducts->setObjectName(QString::fromUtf8("menuProducts"));
        menuSearch = new QMenu(menubar);
        menuSearch->setObjectName(QString::fromUtf8("menuSearch"));
        menuPersonnel = new QMenu(menubar);
        menuPersonnel->setObjectName(QString::fromUtf8("menuPersonnel"));
        MainApp->setMenuBar(menubar);
        statusbar = new QStatusBar(MainApp);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainApp->setStatusBar(statusbar);
        toolBar = new QToolBar(MainApp);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainApp->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuProducts->menuAction());
        menubar->addAction(menuSearch->menuAction());
        menubar->addAction(menuPersonnel->menuAction());
        toolBar->addAction(actionProducts);

        retranslateUi(MainApp);

        QMetaObject::connectSlotsByName(MainApp);
    } // setupUi

    void retranslateUi(QMainWindow *MainApp)
    {
        MainApp->setWindowTitle(QCoreApplication::translate("MainApp", "MainWindow", nullptr));
        actionProducts->setText(QCoreApplication::translate("MainApp", "Products", nullptr));
#if QT_CONFIG(tooltip)
        actionProducts->setToolTip(QCoreApplication::translate("MainApp", "Products", nullptr));
#endif // QT_CONFIG(tooltip)
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainApp", "FIO", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainApp", "DEPARTMENT", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainApp", "PHONE", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainApp", "START_D", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainApp", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainApp", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainApp", "New Column", nullptr));
        photo->setText(QString());
        menuProducts->setTitle(QCoreApplication::translate("MainApp", "Products", nullptr));
        menuSearch->setTitle(QCoreApplication::translate("MainApp", "Search", nullptr));
        menuPersonnel->setTitle(QCoreApplication::translate("MainApp", "Personnel", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainApp", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainApp: public Ui_MainApp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINAPP_H
