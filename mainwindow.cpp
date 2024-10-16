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
MainWindow::MainWindow(MainApp *appInstance, QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    connect(appInstance, &MainApp::colorSchemeChanged, this, &MainWindow::applyColorScheme);
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
void MainWindow::applyColorScheme(const QString &styleSheet)
{
    this->setStyleSheet(styleSheet);  // Применение стиля к окну MainWindow
    ui->label_3->setStyleSheet(styleSheet);
    qDebug() << styleSheet;
    // Сохранение цветовой схемы
    QSettings settings("MyCompany", "MyApp");
    settings.setValue("StyleSheet", styleSheet);
    qDebug() << "Saving StyleSheet: " << styleSheet;
}


void MainWindow::loadSettings()
{
    qDebug() << "Loading settings...";
    // Загружаем сохраненное состояние чекбокса "Запомнить меня"
    QSettings settings("MyCompany", "MyApp");

    // Загружаем сохраненный стиль, если он существует
    QString savedStyle = settings.value("StyleSheet", "").toString();
    if (!savedStyle.isEmpty()) {
        this->setStyleSheet(savedStyle);
    }
    qDebug() << "Наш стиль" << savedStyle;

    // Загружаем состояние чекбокса
    bool rememberMe = settings.value("RememberMe", false).toBool();
    ui->checkBox->setChecked(rememberMe);

    // Загружаем логин и пароль, если чекбокс был отмечен
    if (rememberMe) {
        QString savedLogin = settings.value("Login").toString();
        QString savedPassword = settings.value("Password").toString();
        ui->lineEdit->setText(savedLogin);
        ui->lineEdit_2->setText(savedPassword);
    }
}





void MainWindow::on_pushButton_clicked()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QIBASE");
    // db.setHostName("172.18.110.56");
    // db.setDatabaseName("C:/ACS/Base/ACS.FDB");
    // db.setUserName("ADM");
    // db.setPassword("700");
    // db.setPort(3050);
    db.setDatabaseName("C:/ibexpert/ACS.FDB");
    db.setUserName("SYSDBA");
    db.setPassword("masterkey");

    if (!db.open()) {
        QMessageBox::critical(this, "Ошибка соединения", "Не удалось подключиться к базе данных.");
        return;
    }
    QString enteredLogin = ui->lineEdit->text();
    QString enteredPassword = ui->lineEdit_2->text();

    QSqlQuery query;
    query.prepare("SELECT GPWP, FOTO, TABELNOMER, DOLJNOST, LASTTIME, LASTDATE, FIO, DEPARTMENT, MOBILE, MAIL, AUTO FROM PERSONNEL WHERE PERSID = ?");
    query.addBindValue(enteredLogin);

    if (!query.exec()) {
        QMessageBox::critical(this, "Ошибка запроса", "Не удалось выполнить запрос к базе данных: " + query.lastError().text());
        return;
    }

    // Перемещаем курсор на первую запись результата
    if (!query.next()) {
        QMessageBox::critical(this, "Ошибка", "Пользователь не найден.");
        return;
    }

    // Теперь мы можем безопасно извлекать значения
    QString birthDateStr = query.value(0).toString();
    QByteArray imageData = query.value(1).toByteArray();
    QString tabelnomer = query.value(2).toString();
    QString doljnost = query.value(3).toString();
    QString lasttime = query.value(4).toString();
    QString lastdate = query.value(5).toString();
    QString fio = query.value(6).toString();
    QString department = query.value(7).toString();
    QString mobile = query.value(8).toString();
    QString mail = query.value(9).toString();
    QString car = query.value(10).toString();

    // Проверка пароля
    if (enteredPassword == birthDateStr) {

        // Сигнал и передача данных


        QPixmap pixmap;
        if (!pixmap.loadFromData(imageData)) {
            qDebug() << "Ошибка загрузки изображения из данных";
            return;
        }



        // Запоминание данных при авторизации
        QSettings settings("MyCompany", "MyApp");

        settings.setValue("RememberMe", ui->checkBox->isChecked());
        if (ui->checkBox->isChecked()) {
            settings.setValue("Login", enteredLogin);
            settings.setValue("Password", enteredPassword);
        } else {
            settings.remove("Login");
            settings.remove("Password");
        }

        this->hide();
        mainapp = new MainApp(this);
        mainapp->show();
        connect(this, &MainWindow::signalAccount, mainapp, &MainApp::slotAccount);
        emit signalAccount(pixmap, fio, mobile, department, mail, car, tabelnomer, doljnost, lasttime, lastdate);
    } else {
        QMessageBox::critical(this, "Ошибка", "Неверный PERSID или пароль.");
    }
}








