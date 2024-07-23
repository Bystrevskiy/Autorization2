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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainApp
{
public:
    QAction *actionProducts;
    QAction *actionMessages;
    QAction *actionPersonnel;
    QWidget *centralwidget;
    QTableWidget *tableWidget;
    QLabel *label;
    QStatusBar *statusbar;
    QToolBar *toolBar_2;
    QToolBar *toolBar_3;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainApp)
    {
        if (MainApp->objectName().isEmpty())
            MainApp->setObjectName(QString::fromUtf8("MainApp"));
        MainApp->resize(1920, 1080);
        actionProducts = new QAction(MainApp);
        actionProducts->setObjectName(QString::fromUtf8("actionProducts"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/icons8-\320\277\320\260\320\277\320\272\320\260-\321\200\320\260\321\201\321\210\320\270\321\200\320\265\320\275\320\270\320\271-50.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionProducts->setIcon(icon);
        actionProducts->setMenuRole(QAction::NoRole);
        actionMessages = new QAction(MainApp);
        actionMessages->setObjectName(QString::fromUtf8("actionMessages"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/icons8-\320\272\320\276\320\275\320\262\320\265\321\200\321\202-50.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMessages->setIcon(icon1);
        actionMessages->setMenuRole(QAction::NoRole);
        actionPersonnel = new QAction(MainApp);
        actionPersonnel->setObjectName(QString::fromUtf8("actionPersonnel"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/icons8-\320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\320\270-50.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPersonnel->setIcon(icon2);
        actionPersonnel->setMenuRole(QAction::NoRole);
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
        tableWidget->setGeometry(QRect(10, 30, 1920, 1000));
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 420, 1631, 151));
        label->setStyleSheet(QString::fromUtf8("font: 36pt \"Segoe UI\";\n"
"color: qconicalgradient(cx:0.5, cy:0.5, angle:0, stop:0 rgba(255, 255, 255, 255), stop:0.373979 rgba(255, 255, 255, 255), stop:0.373991 rgba(33, 30, 255, 255), stop:0.624018 rgba(33, 30, 255, 255), stop:0.624043 rgba(255, 0, 0, 255), stop:1 rgba(255, 0, 0, 255));"));
        MainApp->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainApp);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainApp->setStatusBar(statusbar);
        toolBar_2 = new QToolBar(MainApp);
        toolBar_2->setObjectName(QString::fromUtf8("toolBar_2"));
        MainApp->addToolBar(Qt::BottomToolBarArea, toolBar_2);
        toolBar_3 = new QToolBar(MainApp);
        toolBar_3->setObjectName(QString::fromUtf8("toolBar_3"));
        MainApp->addToolBar(Qt::TopToolBarArea, toolBar_3);
        toolBar = new QToolBar(MainApp);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainApp->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionProducts);
        toolBar->addAction(actionMessages);
        toolBar->addAction(actionPersonnel);

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
        actionMessages->setText(QCoreApplication::translate("MainApp", "Messages", nullptr));
#if QT_CONFIG(tooltip)
        actionMessages->setToolTip(QCoreApplication::translate("MainApp", "Messages", nullptr));
#endif // QT_CONFIG(tooltip)
        actionPersonnel->setText(QCoreApplication::translate("MainApp", "Personnel", nullptr));
#if QT_CONFIG(tooltip)
        actionPersonnel->setToolTip(QCoreApplication::translate("MainApp", "Personnel", nullptr));
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
        label->setText(QString());
        toolBar_2->setWindowTitle(QCoreApplication::translate("MainApp", "toolBar_2", nullptr));
        toolBar_3->setWindowTitle(QCoreApplication::translate("MainApp", "toolBar_3", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainApp", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainApp: public Ui_MainApp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINAPP_H
