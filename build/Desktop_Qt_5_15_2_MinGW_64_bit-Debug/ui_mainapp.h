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
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
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
    QHBoxLayout *horizontalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QFormLayout *formLayout;
    QVBoxLayout *verticalLayout_3;
    QCalendarWidget *calendarWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QPushButton *depAll;
    QPushButton *d01;
    QPushButton *d09;
    QPushButton *d13;
    QPushButton *d14;
    QPushButton *d20;
    QPushButton *d21;
    QPushButton *d22;
    QPushButton *d23;
    QPushButton *d24;
    QPushButton *d25;
    QPushButton *d29;
    QPushButton *d31;
    QPushButton *d34;
    QPushButton *d63;
    QPushButton *d65;
    QPushButton *d73;
    QPushButton *d75;
    QPushButton *d81;
    QPushButton *d82;
    QPushButton *d89;
    QPushButton *d91;
    QPushButton *d92;
    QPushButton *d95;
    QTableWidget *tableWidget;
    QWidget *tab_2;
    QLabel *fio;
    QLabel *departmentInfo;
    QLabel *date;
    QLabel *mobile;
    QPushButton *pushButton_3;
    QLabel *dolzhnostInfo;
    QLabel *label_2;
    QLabel *department;
    QLabel *emailImfo;
    QLabel *tabelnomer;
    QLabel *date_2;
    QLabel *dolzhnost;
    QLabel *email;
    QPushButton *pushButton_2;
    QLabel *car;
    QLabel *carInfo;
    QLabel *photo;
    QLabel *time;
    QLabel *welcome;
    QPushButton *pushButton;
    QLabel *mobileInfo;
    QLabel *time_to_home;
    QWidget *tab_3;
    QPushButton *sendMessage;
    QLineEdit *outMessage;
    QTextBrowser *textBrowser;
    QPushButton *connect;
    QPushButton *pushButton_5;

    void setupUi(QMainWindow *MainApp)
    {
        if (MainApp->objectName().isEmpty())
            MainApp->setObjectName(QString::fromUtf8("MainApp"));
        MainApp->resize(1384, 849);
        MainApp->setMinimumSize(QSize(1232, 541));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/icons8-brawl-stars-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainApp->setWindowIcon(icon);
        MainApp->setStyleSheet(QString::fromUtf8("background-color: rgb(13, 76, 128);"));
        actionProducts = new QAction(MainApp);
        actionProducts->setObjectName(QString::fromUtf8("actionProducts"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/icons8-\320\277\320\260\320\277\320\272\320\260-\321\200\320\260\321\201\321\210\320\270\321\200\320\265\320\275\320\270\320\271-50.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionProducts->setIcon(icon1);
        actionProducts->setMenuRole(QAction::NoRole);
        actionMessages = new QAction(MainApp);
        actionMessages->setObjectName(QString::fromUtf8("actionMessages"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/icons8-\320\272\320\276\320\275\320\262\320\265\321\200\321\202-50.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMessages->setIcon(icon2);
        actionMessages->setMenuRole(QAction::NoRole);
        actionPersonnel = new QAction(MainApp);
        actionPersonnel->setObjectName(QString::fromUtf8("actionPersonnel"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/icons8-\320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\320\270-50.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPersonnel->setIcon(icon3);
        actionPersonnel->setMenuRole(QAction::NoRole);
        actionAccount = new QAction(MainApp);
        actionAccount->setObjectName(QString::fromUtf8("actionAccount"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/personal_account.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAccount->setIcon(icon4);
        actionAccount->setMenuRole(QAction::NoRole);
        centralwidget = new QWidget(MainApp);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setStyleSheet(QString::fromUtf8("QTabWidget::pane { border: 0; }"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        formLayout = new QFormLayout(tab);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        calendarWidget = new QCalendarWidget(tab);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(calendarWidget->sizePolicy().hasHeightForWidth());
        calendarWidget->setSizePolicy(sizePolicy);
        calendarWidget->setMinimumSize(QSize(300, 250));
        calendarWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255); \n"
"color: rgb(0, 0, 0);\n"
"font: 9pt \"Segoe UI\";"));

        verticalLayout_3->addWidget(calendarWidget);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(label_3);

        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);
        lineEdit->setMinimumSize(QSize(159, 35));
        lineEdit->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(lineEdit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        scrollArea = new QScrollArea(tab);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy2);
        scrollArea->setMinimumSize(QSize(300, 40));
        scrollArea->setAutoFillBackground(true);
        scrollArea->setStyleSheet(QString::fromUtf8(""));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -409, 281, 879));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        depAll = new QPushButton(scrollAreaWidgetContents);
        depAll->setObjectName(QString::fromUtf8("depAll"));

        verticalLayout_2->addWidget(depAll);

        d01 = new QPushButton(scrollAreaWidgetContents);
        d01->setObjectName(QString::fromUtf8("d01"));

        verticalLayout_2->addWidget(d01);

        d09 = new QPushButton(scrollAreaWidgetContents);
        d09->setObjectName(QString::fromUtf8("d09"));

        verticalLayout_2->addWidget(d09);

        d13 = new QPushButton(scrollAreaWidgetContents);
        d13->setObjectName(QString::fromUtf8("d13"));

        verticalLayout_2->addWidget(d13);

        d14 = new QPushButton(scrollAreaWidgetContents);
        d14->setObjectName(QString::fromUtf8("d14"));

        verticalLayout_2->addWidget(d14);

        d20 = new QPushButton(scrollAreaWidgetContents);
        d20->setObjectName(QString::fromUtf8("d20"));

        verticalLayout_2->addWidget(d20);

        d21 = new QPushButton(scrollAreaWidgetContents);
        d21->setObjectName(QString::fromUtf8("d21"));

        verticalLayout_2->addWidget(d21);

        d22 = new QPushButton(scrollAreaWidgetContents);
        d22->setObjectName(QString::fromUtf8("d22"));

        verticalLayout_2->addWidget(d22);

        d23 = new QPushButton(scrollAreaWidgetContents);
        d23->setObjectName(QString::fromUtf8("d23"));

        verticalLayout_2->addWidget(d23);

        d24 = new QPushButton(scrollAreaWidgetContents);
        d24->setObjectName(QString::fromUtf8("d24"));
        d24->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(d24);

        d25 = new QPushButton(scrollAreaWidgetContents);
        d25->setObjectName(QString::fromUtf8("d25"));

        verticalLayout_2->addWidget(d25);

        d29 = new QPushButton(scrollAreaWidgetContents);
        d29->setObjectName(QString::fromUtf8("d29"));

        verticalLayout_2->addWidget(d29);

        d31 = new QPushButton(scrollAreaWidgetContents);
        d31->setObjectName(QString::fromUtf8("d31"));

        verticalLayout_2->addWidget(d31);

        d34 = new QPushButton(scrollAreaWidgetContents);
        d34->setObjectName(QString::fromUtf8("d34"));

        verticalLayout_2->addWidget(d34);

        d63 = new QPushButton(scrollAreaWidgetContents);
        d63->setObjectName(QString::fromUtf8("d63"));

        verticalLayout_2->addWidget(d63);

        d65 = new QPushButton(scrollAreaWidgetContents);
        d65->setObjectName(QString::fromUtf8("d65"));

        verticalLayout_2->addWidget(d65);

        d73 = new QPushButton(scrollAreaWidgetContents);
        d73->setObjectName(QString::fromUtf8("d73"));

        verticalLayout_2->addWidget(d73);

        d75 = new QPushButton(scrollAreaWidgetContents);
        d75->setObjectName(QString::fromUtf8("d75"));

        verticalLayout_2->addWidget(d75);

        d81 = new QPushButton(scrollAreaWidgetContents);
        d81->setObjectName(QString::fromUtf8("d81"));

        verticalLayout_2->addWidget(d81);

        d82 = new QPushButton(scrollAreaWidgetContents);
        d82->setObjectName(QString::fromUtf8("d82"));

        verticalLayout_2->addWidget(d82);

        d89 = new QPushButton(scrollAreaWidgetContents);
        d89->setObjectName(QString::fromUtf8("d89"));

        verticalLayout_2->addWidget(d89);

        d91 = new QPushButton(scrollAreaWidgetContents);
        d91->setObjectName(QString::fromUtf8("d91"));

        verticalLayout_2->addWidget(d91);

        d92 = new QPushButton(scrollAreaWidgetContents);
        d92->setObjectName(QString::fromUtf8("d92"));

        verticalLayout_2->addWidget(d92);

        d95 = new QPushButton(scrollAreaWidgetContents);
        d95->setObjectName(QString::fromUtf8("d95"));

        verticalLayout_2->addWidget(d95);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        verticalLayout_3->addLayout(verticalLayout);


        formLayout->setLayout(0, QFormLayout::LabelRole, verticalLayout_3);

        tableWidget = new QTableWidget(tab);
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
        tableWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 11pt \"Segoe UI\";"));
        tableWidget->horizontalHeader()->setStretchLastSection(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, tableWidget);

        tabWidget->addTab(tab, icon3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        fio = new QLabel(tab_2);
        fio->setObjectName(QString::fromUtf8("fio"));
        fio->setGeometry(QRect(360, 20, 601, 44));
        fio->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        departmentInfo = new QLabel(tab_2);
        departmentInfo->setObjectName(QString::fromUtf8("departmentInfo"));
        departmentInfo->setGeometry(QRect(360, 84, 63, 31));
        departmentInfo->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        date = new QLabel(tab_2);
        date->setObjectName(QString::fromUtf8("date"));
        date->setGeometry(QRect(360, 360, 249, 44));
        date->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        mobile = new QLabel(tab_2);
        mobile->setObjectName(QString::fromUtf8("mobile"));
        mobile->setGeometry(QRect(620, 305, 511, 31));
        mobile->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        pushButton_3 = new QPushButton(tab_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(579, 480, 91, 151));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(187, 39, 73);"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/img/2023.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon5);
        pushButton_3->setIconSize(QSize(150, 150));
        dolzhnostInfo = new QLabel(tab_2);
        dolzhnostInfo->setObjectName(QString::fromUtf8("dolzhnostInfo"));
        dolzhnostInfo->setGeometry(QRect(360, 139, 116, 31));
        dolzhnostInfo->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(19, 490, 271, 41));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 14pt \"Segoe UI\";"));
        department = new QLabel(tab_2);
        department->setObjectName(QString::fromUtf8("department"));
        department->setGeometry(QRect(620, 84, 511, 31));
        department->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        emailImfo = new QLabel(tab_2);
        emailImfo->setObjectName(QString::fromUtf8("emailImfo"));
        emailImfo->setGeometry(QRect(360, 250, 70, 31));
        emailImfo->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        tabelnomer = new QLabel(tab_2);
        tabelnomer->setObjectName(QString::fromUtf8("tabelnomer"));
        tabelnomer->setGeometry(QRect(19, 410, 249, 44));
        tabelnomer->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        date_2 = new QLabel(tab_2);
        date_2->setObjectName(QString::fromUtf8("date_2"));
        date_2->setGeometry(QRect(360, 410, 249, 44));
        date_2->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        dolzhnost = new QLabel(tab_2);
        dolzhnost->setObjectName(QString::fromUtf8("dolzhnost"));
        dolzhnost->setGeometry(QRect(620, 139, 511, 31));
        dolzhnost->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        email = new QLabel(tab_2);
        email->setObjectName(QString::fromUtf8("email"));
        email->setGeometry(QRect(620, 250, 511, 31));
        email->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        pushButton_2 = new QPushButton(tab_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(469, 480, 91, 151));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(254, 190, 152);"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/img/2024.webp"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon6);
        pushButton_2->setIconSize(QSize(150, 150));
        car = new QLabel(tab_2);
        car->setObjectName(QString::fromUtf8("car"));
        car->setGeometry(QRect(620, 194, 511, 31));
        car->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        carInfo = new QLabel(tab_2);
        carInfo->setObjectName(QString::fromUtf8("carInfo"));
        carInfo->setGeometry(QRect(360, 194, 112, 31));
        carInfo->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        photo = new QLabel(tab_2);
        photo->setObjectName(QString::fromUtf8("photo"));
        photo->setGeometry(QRect(19, 80, 331, 311));
        photo->setStyleSheet(QString::fromUtf8(""));
        time = new QLabel(tab_2);
        time->setObjectName(QString::fromUtf8("time"));
        time->setGeometry(QRect(620, 360, 249, 44));
        time->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        welcome = new QLabel(tab_2);
        welcome->setObjectName(QString::fromUtf8("welcome"));
        welcome->setGeometry(QRect(19, 20, 331, 44));
        welcome->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        pushButton = new QPushButton(tab_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(359, 480, 91, 151));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(13, 76, 128);"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/img/2020.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon7);
        pushButton->setIconSize(QSize(141, 150));
        mobileInfo = new QLabel(tab_2);
        mobileInfo->setObjectName(QString::fromUtf8("mobileInfo"));
        mobileInfo->setGeometry(QRect(360, 305, 219, 31));
        mobileInfo->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        time_to_home = new QLabel(tab_2);
        time_to_home->setObjectName(QString::fromUtf8("time_to_home"));
        time_to_home->setGeometry(QRect(620, 410, 249, 44));
        time_to_home->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        tabWidget->addTab(tab_2, icon4, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        sendMessage = new QPushButton(tab_3);
        sendMessage->setObjectName(QString::fromUtf8("sendMessage"));
        sendMessage->setGeometry(QRect(350, 320, 151, 41));
        sendMessage->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        outMessage = new QLineEdit(tab_3);
        outMessage->setObjectName(QString::fromUtf8("outMessage"));
        outMessage->setGeometry(QRect(40, 320, 291, 41));
        outMessage->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        textBrowser = new QTextBrowser(tab_3);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(40, 120, 461, 192));
        textBrowser->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);"));
        connect = new QPushButton(tab_3);
        connect->setObjectName(QString::fromUtf8("connect"));
        connect->setGeometry(QRect(40, 70, 461, 41));
        connect->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
""));
        pushButton_5 = new QPushButton(tab_3);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(690, 250, 83, 29));
        tabWidget->addTab(tab_3, QString());

        horizontalLayout_2->addWidget(tabWidget);

        MainApp->setCentralWidget(centralwidget);

        retranslateUi(MainApp);

        tabWidget->setCurrentIndex(0);


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
        label_3->setText(QCoreApplication::translate("MainApp", "\320\236\321\202\320\264\320\265\320\273:", nullptr));
        depAll->setText(QCoreApplication::translate("MainApp", "\320\222\321\201\320\265 \320\276\321\202\320\264\320\265\320\273\321\213", nullptr));
        d01->setText(QCoreApplication::translate("MainApp", "\320\236\321\202\320\264\320\265\320\273 01", nullptr));
        d09->setText(QCoreApplication::translate("MainApp", "\320\236\321\202\320\264\320\265\320\273 09", nullptr));
        d13->setText(QCoreApplication::translate("MainApp", "\320\236\321\202\320\264\320\265\320\273 13", nullptr));
        d14->setText(QCoreApplication::translate("MainApp", "\320\236\321\202\320\264\320\265\320\273 14", nullptr));
        d20->setText(QCoreApplication::translate("MainApp", "\320\236\321\202\320\264\320\265\320\273 20", nullptr));
        d21->setText(QCoreApplication::translate("MainApp", "\320\236\321\202\320\264\320\265\320\273 21", nullptr));
        d22->setText(QCoreApplication::translate("MainApp", "\320\236\321\202\320\264\320\265\320\273 22", nullptr));
        d23->setText(QCoreApplication::translate("MainApp", "\320\236\321\202\320\264\320\265\320\273 23", nullptr));
        d24->setText(QCoreApplication::translate("MainApp", "\320\236\321\202\320\264\320\265\320\273 24", nullptr));
        d25->setText(QCoreApplication::translate("MainApp", "\320\236\321\202\320\264\320\265\320\273 25", nullptr));
        d29->setText(QCoreApplication::translate("MainApp", "\320\236\321\202\320\264\320\265\320\273 29", nullptr));
        d31->setText(QCoreApplication::translate("MainApp", "\320\236\321\202\320\264\320\265\320\273 31", nullptr));
        d34->setText(QCoreApplication::translate("MainApp", "\320\236\321\202\320\264\320\265\320\273 34", nullptr));
        d63->setText(QCoreApplication::translate("MainApp", "\320\236\321\202\320\264\320\265\320\273 63", nullptr));
        d65->setText(QCoreApplication::translate("MainApp", "\320\236\321\202\320\264\320\265\320\273 65", nullptr));
        d73->setText(QCoreApplication::translate("MainApp", "\320\236\321\202\320\264\320\265\320\273 73", nullptr));
        d75->setText(QCoreApplication::translate("MainApp", "\320\236\321\202\320\264\320\265\320\273 75", nullptr));
        d81->setText(QCoreApplication::translate("MainApp", "\320\236\321\202\320\264\320\265\320\273 81", nullptr));
        d82->setText(QCoreApplication::translate("MainApp", "\320\236\321\202\320\264\320\265\320\273 82", nullptr));
        d89->setText(QCoreApplication::translate("MainApp", "\320\236\321\202\320\264\320\265\320\273 89", nullptr));
        d91->setText(QCoreApplication::translate("MainApp", "\320\236\321\202\320\264\320\265\320\273 91", nullptr));
        d92->setText(QCoreApplication::translate("MainApp", "\320\236\321\202\320\264\320\265\320\273 92", nullptr));
        d95->setText(QCoreApplication::translate("MainApp", "\320\236\321\202\320\264\320\265\320\273 95", nullptr));
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
        tabWidget->setTabText(tabWidget->indexOf(tab), QString());
        fio->setText(QCoreApplication::translate("MainApp", "fio", nullptr));
        departmentInfo->setText(QCoreApplication::translate("MainApp", "\320\236\321\202\320\264\320\265\320\273", nullptr));
        date->setText(QCoreApplication::translate("MainApp", "Date", nullptr));
        mobile->setText(QCoreApplication::translate("MainApp", "label_7", nullptr));
        pushButton_3->setText(QString());
        dolzhnostInfo->setText(QCoreApplication::translate("MainApp", "\320\224\320\276\320\273\320\266\320\275\320\276\321\201\321\202\321\214", nullptr));
        label_2->setText(QCoreApplication::translate("MainApp", "\320\237\320\276\320\277\321\200\320\276\320\261\321\203\320\271\321\202\320\265 \320\275\320\276\320\262\321\213\320\271 \321\201\321\202\320\270\320\273\321\214", nullptr));
        department->setText(QCoreApplication::translate("MainApp", "label_12", nullptr));
        emailImfo->setText(QCoreApplication::translate("MainApp", "\320\230\320\274\320\265\320\271\320\273", nullptr));
        tabelnomer->setText(QCoreApplication::translate("MainApp", "tabelNomer", nullptr));
        date_2->setText(QCoreApplication::translate("MainApp", "\320\236\321\202\321\200\320\260\320\261\320\276\321\202\320\260\320\275\320\276 \321\201\320\265\320\263\320\276\320\264\320\275\321\217:", nullptr));
        dolzhnost->setText(QCoreApplication::translate("MainApp", "label_11", nullptr));
        email->setText(QCoreApplication::translate("MainApp", "label_9", nullptr));
        pushButton_2->setText(QString());
        car->setText(QCoreApplication::translate("MainApp", "label_15", nullptr));
        carInfo->setText(QCoreApplication::translate("MainApp", "\320\242\321\200\320\260\320\275\321\201\320\277\320\276\321\200\321\202", nullptr));
        photo->setText(QString());
        time->setText(QCoreApplication::translate("MainApp", "time", nullptr));
        welcome->setText(QCoreApplication::translate("MainApp", "\320\233\320\270\321\207\320\275\321\213\320\271 \320\272\320\260\320\261\320\270\320\275\320\265\321\202", nullptr));
        mobileInfo->setText(QCoreApplication::translate("MainApp", "\320\234\320\276\320\261\320\270\320\273\321\214\320\275\321\213\320\271 \321\202\320\265\320\273\320\265\321\204\320\276\320\275", nullptr));
        time_to_home->setText(QCoreApplication::translate("MainApp", "time_to_home", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QString());
        sendMessage->setText(QCoreApplication::translate("MainApp", ">>", nullptr));
        connect->setText(QCoreApplication::translate("MainApp", "Connect", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainApp", "PushButton", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainApp", "\320\241\321\202\321\200\320\260\320\275\320\270\321\206\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainApp: public Ui_MainApp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINAPP_H
