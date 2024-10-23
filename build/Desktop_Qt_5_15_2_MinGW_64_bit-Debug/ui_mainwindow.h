/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_1;
    QLabel *label_2;
    QLabel *image;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QCheckBox *checkBox;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(776, 490);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(280, 310, 221, 61));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(4, 83, 125);\n"
"border-radius: 27px;\n"
"appearance: none;\n"
"border: 0;\n"
"color: #fff;\n"
"    padding: 8px 16px;\n"
"    font-size: 16px;\n"
"    box-shadow: 0 0 0 4px #cbd6ee;"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(192, 184, 392, 32));
        lineEdit->setStyleSheet(QString::fromUtf8(" border: 0;\n"
""));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(192, 230, 392, 32));
        lineEdit_2->setStyleSheet(QString::fromUtf8(" border: 0;\n"
""));
        label_1 = new QLabel(centralwidget);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        label_1->setGeometry(QRect(192, 246, 401, 20));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(192, 200, 401, 20));
        image = new QLabel(centralwidget);
        image->setObjectName(QString::fromUtf8("image"));
        image->setGeometry(QRect(330, 50, 128, 128));
        image->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        image->setPixmap(QPixmap(QString::fromUtf8("img/user.png")));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(118, 40, 540, 371));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(-10, -30, 792, 321));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(4, 83, 125);"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 250, 781, 281));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(121, 119, 143);"));
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(192, 270, 141, 31));
        checkBox->setStyleSheet(QString::fromUtf8(""));
        MainWindow->setCentralWidget(centralwidget);
        label_4->raise();
        label_3->raise();
        label->raise();
        pushButton->raise();
        lineEdit->raise();
        lineEdit_2->raise();
        label_1->raise();
        label_2->raise();
        image->raise();
        checkBox->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217", nullptr));
        lineEdit->setText(QString());
        lineEdit_2->setText(QString());
        label_1->setText(QCoreApplication::translate("MainWindow", "_________________________________________________________________", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "_________________________________________________________________", nullptr));
        image->setText(QString());
        label->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        checkBox->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\320\276\320\274\320\275\320\270\321\202\321\214 \320\274\320\265\320\275\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
