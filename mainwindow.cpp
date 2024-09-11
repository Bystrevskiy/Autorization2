#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QMessageBox>
#include <QSettings>
#include <QCoreApplication>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QSql>
#include <QSqlError>
#include <QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    loadSettings();
    ui->centralwidget->setAttribute(Qt::WA_TranslucentBackground);
    ui->centralwidget->setStyleSheet("backgroung-color: rgba(0,0,0,0);");
    QPixmap pix(":img/user.png");
    ui->image->setPixmap(pix.scaled(128,128, Qt::KeepAspectRatio, Qt::SmoothTransformation));
    ui->image->setStyleSheet("background-color: transparent;");

    ui->lineEdit->setPlaceholderText(QApplication::translate("Form", "employer@gmail.com", 0));
    ui->lineEdit_2->setPlaceholderText(QApplication::translate("Form", "password", 0));
    ui->pushButton->setShortcut(QKeySequence(Qt::Key_Return));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QIBASE");
    db.setHostName("172.18.110.56");
    db.setDatabaseName("C:/ACS/Base/ACS.FDB");
    db.setUserName("ADM");
    db.setPassword("700");
    db.setPort(3050);
    // db.setDatabaseName("C:/ibexpert/ACS.FDB");
    // db.setUserName("SYSDBA");
    // db.setPassword("masterkey");

    if (!db.open()) {
        QMessageBox::critical(this, "Ошибка соединения", "Не удалось подключиться к базе данных.");
        return;
    }
    QString enteredLogin = ui->lineEdit->text();
    QString enteredPassword = ui->lineEdit_2->text();

    QSqlQuery query;
    query.exec("SELECT GPWP from PERSONNEL where PERSID = ?");
    query.addBindValue(enteredLogin);

    if (!query.exec()) {
        // Выводим полную информацию об ошибке
        QMessageBox::critical(this, "Ошибка запроса", "Не удалось выполнить запрос к базе данных: " + query.lastError().text());
        return;
    }

    if (!query.next()) {
        QMessageBox::critical(this, "Ошибка", "Пользователь не найден.");
        return;
    }

    QString birthDateStr = query.value(0).toString();

    // Проверка пароля
    if (enteredPassword == birthDateStr) {
        QMessageBox::information(this, "Успех", "Авторизация успешна.");
        QSettings settings("MyCompany", "MyApp");

        settings.setValue("RememberMe", ui->checkBox->isChecked());
            if (ui->checkBox->isChecked()) {
                settings.setValue("Login", enteredLogin);
                settings.setValue("Password", enteredPassword);
            } else {
                // Если чекбокс не выбран, удаляем сохраненные данные
                settings.remove("Login");
        settings.remove("Password");}
        this->hide();
        mainapp = new MainApp(this);
        mainapp->show();

    } else {
        QMessageBox::critical(this, "Ошибка", "Неверный PERSID или пароль.");
    }
}






    // // Получаем текст из lineEdit (логин)
    // QString login = ui->lineEdit->text();

    // // Получаем текст из lineEdit_2 (пароль)
    // QString password = ui->lineEdit_2->text();

    // // Предположим, у вас есть ожидаемые значения логина и пароля
    // QString expectedLoginAleksey = "AAB";
    // QString expectedPasswordAleksey = "300504";

    // // Проверяем введенные логин и пароль
    // if (login == expectedLoginAleksey && password == expectedPasswordAleksey)
    // {
    //     QSettings settings("MyCompany", "MyApp");
    //     settings.setValue("RememberMe", ui->checkBox->isChecked());
    //     if (ui->checkBox->isChecked()) {
    //         settings.setValue("Login", login);
    //         settings.setValue("Password", password);
    //     } else {
    //         // Если чекбокс не выбран, удаляем сохраненные данные
    //         settings.remove("Login");
    //         settings.remove("Password");}
    //     // Логин и пароль верные, открываем новое окно PanelWindow
    //     this->hide();
    //     mainapp = new MainApp(this);
    //     mainapp->show();
    //     // panel panelWindow;
    //     // panelWindow.setModal(true);

    //     //panelWindow.exec();
    // }
    // else
    // {
    //     this->hide();

    //     QMessageBox::warning(this, "Ошибка", "Неверный логин или пароль!");
    // }
// }


void MainWindow::loadSettings()
{
    // Загружаем сохраненное состояние чекбокса "Запомнить меня"
    QSettings settings("MyCompany", "MyApp");
    bool rememberMe = settings.value("RememberMe", false).toBool();

    // Устанавливаем состояние чекбокса из сохраненных настроек
    ui->checkBox->setChecked(rememberMe);

    // Если чекбокс был выбран, загружаем также сохраненные логин и пароль
    if (rememberMe) {
        QString savedLogin = settings.value("Login").toString();
        QString savedPassword = settings.value("Password").toString();

        // Устанавливаем сохраненные логин и пароль в соответствующие lineEdit
        ui->lineEdit->setText(savedLogin);
        ui->lineEdit_2->setText(savedPassword);
    }
}


