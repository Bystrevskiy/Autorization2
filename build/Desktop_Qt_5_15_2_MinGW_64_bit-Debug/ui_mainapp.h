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
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainApp
{
public:
    QAction *actionProducts;
    QAction *actionMessages;
    QAction *actionPersonnel;
    QAction *actionAccount;
    QWidget *centralwidget;
    QTableWidget *tableWidget;
    QLabel *photo;
    QLabel *welcome;
    QLabel *fio;
    QLabel *label;
    QLabel *time;
    QLabel *date;
    QLabel *time_to_home;
    QLabel *date_2;
    QLabel *tabelnomer;
    QLabel *mobileInfo;
    QLabel *departmentInfo;
    QLabel *carInfo;
    QLabel *dolzhnostInfo;
    QLabel *emailImfo;
    QLabel *dolzhnost;
    QLabel *car;
    QLabel *email;
    QLabel *department;
    QLabel *mobile;
    QPushButton *sendMessage;
    QTextBrowser *textBrowser;
    QPushButton *connect;
    QLineEdit *outMessage;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label_2;
    QStatusBar *statusbar;
    QToolBar *toolBar_2;
    QToolBar *toolBar_3;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainApp)
    {
        if (MainApp->objectName().isEmpty())
            MainApp->setObjectName(QString::fromUtf8("MainApp"));
        MainApp->resize(1920, 1080);
        MainApp->setStyleSheet(QString::fromUtf8("background-color: rgb(4, 83, 125);"));
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
        actionAccount = new QAction(MainApp);
        actionAccount->setObjectName(QString::fromUtf8("actionAccount"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/personal_account.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAccount->setIcon(icon3);
        actionAccount->setMenuRole(QAction::NoRole);
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
        tableWidget->setGeometry(QRect(0, 0, 1920, 1000));
        tableWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        photo = new QLabel(centralwidget);
        photo->setObjectName(QString::fromUtf8("photo"));
        photo->setGeometry(QRect(20, 90, 331, 311));
        photo->setStyleSheet(QString::fromUtf8(""));
        welcome = new QLabel(centralwidget);
        welcome->setObjectName(QString::fromUtf8("welcome"));
        welcome->setGeometry(QRect(20, 30, 331, 44));
        welcome->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        fio = new QLabel(centralwidget);
        fio->setObjectName(QString::fromUtf8("fio"));
        fio->setGeometry(QRect(361, 30, 601, 44));
        fio->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(910, 370, 241, 31));
        time = new QLabel(centralwidget);
        time->setObjectName(QString::fromUtf8("time"));
        time->setGeometry(QRect(621, 370, 249, 44));
        time->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        date = new QLabel(centralwidget);
        date->setObjectName(QString::fromUtf8("date"));
        date->setGeometry(QRect(361, 370, 249, 44));
        date->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        time_to_home = new QLabel(centralwidget);
        time_to_home->setObjectName(QString::fromUtf8("time_to_home"));
        time_to_home->setGeometry(QRect(621, 420, 249, 44));
        time_to_home->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        date_2 = new QLabel(centralwidget);
        date_2->setObjectName(QString::fromUtf8("date_2"));
        date_2->setGeometry(QRect(361, 420, 249, 44));
        date_2->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        tabelnomer = new QLabel(centralwidget);
        tabelnomer->setObjectName(QString::fromUtf8("tabelnomer"));
        tabelnomer->setGeometry(QRect(20, 420, 249, 44));
        tabelnomer->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        mobileInfo = new QLabel(centralwidget);
        mobileInfo->setObjectName(QString::fromUtf8("mobileInfo"));
        mobileInfo->setGeometry(QRect(361, 315, 219, 31));
        mobileInfo->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        departmentInfo = new QLabel(centralwidget);
        departmentInfo->setObjectName(QString::fromUtf8("departmentInfo"));
        departmentInfo->setGeometry(QRect(361, 94, 63, 31));
        departmentInfo->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        carInfo = new QLabel(centralwidget);
        carInfo->setObjectName(QString::fromUtf8("carInfo"));
        carInfo->setGeometry(QRect(361, 204, 112, 31));
        carInfo->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        dolzhnostInfo = new QLabel(centralwidget);
        dolzhnostInfo->setObjectName(QString::fromUtf8("dolzhnostInfo"));
        dolzhnostInfo->setGeometry(QRect(361, 149, 116, 31));
        dolzhnostInfo->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        emailImfo = new QLabel(centralwidget);
        emailImfo->setObjectName(QString::fromUtf8("emailImfo"));
        emailImfo->setGeometry(QRect(361, 260, 70, 31));
        emailImfo->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        dolzhnost = new QLabel(centralwidget);
        dolzhnost->setObjectName(QString::fromUtf8("dolzhnost"));
        dolzhnost->setGeometry(QRect(621, 149, 511, 31));
        dolzhnost->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        car = new QLabel(centralwidget);
        car->setObjectName(QString::fromUtf8("car"));
        car->setGeometry(QRect(621, 204, 511, 31));
        car->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        email = new QLabel(centralwidget);
        email->setObjectName(QString::fromUtf8("email"));
        email->setGeometry(QRect(621, 260, 511, 31));
        email->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        department = new QLabel(centralwidget);
        department->setObjectName(QString::fromUtf8("department"));
        department->setGeometry(QRect(621, 94, 511, 31));
        department->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        mobile = new QLabel(centralwidget);
        mobile->setObjectName(QString::fromUtf8("mobile"));
        mobile->setGeometry(QRect(621, 315, 511, 31));
        mobile->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        sendMessage = new QPushButton(centralwidget);
        sendMessage->setObjectName(QString::fromUtf8("sendMessage"));
        sendMessage->setGeometry(QRect(1580, 280, 151, 41));
        sendMessage->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(1270, 80, 461, 192));
        textBrowser->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);"));
        connect = new QPushButton(centralwidget);
        connect->setObjectName(QString::fromUtf8("connect"));
        connect->setGeometry(QRect(1270, 30, 461, 41));
        connect->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
""));
        outMessage = new QLineEdit(centralwidget);
        outMessage->setObjectName(QString::fromUtf8("outMessage"));
        outMessage->setGeometry(QRect(1270, 280, 291, 41));
        outMessage->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(360, 490, 91, 151));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(13, 76, 128);"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/2020.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon4);
        pushButton->setIconSize(QSize(141, 150));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(470, 490, 91, 151));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(254, 190, 152);"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/img/2024.webp"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon5);
        pushButton_2->setIconSize(QSize(150, 150));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(580, 490, 91, 151));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(187, 39, 73);"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/img/2023.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon6);
        pushButton_3->setIconSize(QSize(150, 150));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 500, 271, 41));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 14pt \"Segoe UI\";"));
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
        toolBar->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        MainApp->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionProducts);
        toolBar->addAction(actionMessages);
        toolBar->addAction(actionPersonnel);
        toolBar->addAction(actionAccount);
        toolBar->addSeparator();

        retranslateUi(MainApp);

        QMetaObject::connectSlotsByName(MainApp);
    } // setupUi

    void retranslateUi(QMainWindow *MainApp)
    {
        MainApp->setWindowTitle(QCoreApplication::translate("MainApp", "DBSP Project Commander", nullptr));
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
        actionAccount->setText(QCoreApplication::translate("MainApp", "Account", nullptr));
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
        welcome->setText(QCoreApplication::translate("MainApp", "\320\233\320\270\321\207\320\275\321\213\320\271 \320\272\320\260\320\261\320\270\320\275\320\265\321\202", nullptr));
        fio->setText(QCoreApplication::translate("MainApp", "fio", nullptr));
        label->setText(QCoreApplication::translate("MainApp", "Test_info", nullptr));
        time->setText(QCoreApplication::translate("MainApp", "time", nullptr));
        date->setText(QCoreApplication::translate("MainApp", "Date", nullptr));
        time_to_home->setText(QCoreApplication::translate("MainApp", "time_to_home", nullptr));
        date_2->setText(QCoreApplication::translate("MainApp", "\320\236\321\202\321\200\320\260\320\261\320\276\321\202\320\260\320\275\320\276 \321\201\320\265\320\263\320\276\320\264\320\275\321\217:", nullptr));
        tabelnomer->setText(QCoreApplication::translate("MainApp", "tabelNomer", nullptr));
        mobileInfo->setText(QCoreApplication::translate("MainApp", "\320\234\320\276\320\261\320\270\320\273\321\214\320\275\321\213\320\271 \321\202\320\265\320\273\320\265\321\204\320\276\320\275", nullptr));
        departmentInfo->setText(QCoreApplication::translate("MainApp", "\320\236\321\202\320\264\320\265\320\273", nullptr));
        carInfo->setText(QCoreApplication::translate("MainApp", "\320\242\321\200\320\260\320\275\321\201\320\277\320\276\321\200\321\202", nullptr));
        dolzhnostInfo->setText(QCoreApplication::translate("MainApp", "\320\224\320\276\320\273\320\266\320\275\320\276\321\201\321\202\321\214", nullptr));
        emailImfo->setText(QCoreApplication::translate("MainApp", "\320\230\320\274\320\265\320\271\320\273", nullptr));
        dolzhnost->setText(QCoreApplication::translate("MainApp", "label_11", nullptr));
        car->setText(QCoreApplication::translate("MainApp", "label_15", nullptr));
        email->setText(QCoreApplication::translate("MainApp", "label_9", nullptr));
        department->setText(QCoreApplication::translate("MainApp", "label_12", nullptr));
        mobile->setText(QCoreApplication::translate("MainApp", "label_7", nullptr));
        sendMessage->setText(QCoreApplication::translate("MainApp", ">>", nullptr));
        connect->setText(QCoreApplication::translate("MainApp", "Connect", nullptr));
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        label_2->setText(QCoreApplication::translate("MainApp", "\320\237\320\276\320\277\321\200\320\276\320\261\321\203\320\271\321\202\320\265 \320\275\320\276\320\262\321\213\320\271 \321\201\321\202\320\270\320\273\321\214", nullptr));
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
