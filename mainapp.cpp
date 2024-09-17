#include "mainapp.h"
#include "ui_mainapp.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QSqlRecord>
#include <QDebug>
#include <QVector>
#include <QTime>
#include <QDate>
MainApp::MainApp(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainApp)
    , showinfo(nullptr)
{
    ui->setupUi(this);
    ui->tableWidget->setEditTriggers(QTableWidget::NoEditTriggers);
    QSqlDatabase db = QSqlDatabase::addDatabase("QIBASE");
    db.setHostName("172.18.110.56");
    db.setDatabaseName("C:/ACS/Base/ACS.FDB");
    db.setUserName("ADM");
    db.setPassword("700");
    db.setPort(3050);
    // db.setDatabaseName("C:/ibexpert/ACS.FDB");
    // db.setUserName("SYSDBA");
    // db.setPassword("masterkey");
    hideUnused();

    if (!db.open()) {
        QMessageBox::critical(this, "Ошибка соединения", "Не удалось подключиться к базе данных.");
        return;
    }

    QSqlQuery query1;
    if (!query1.exec("SELECT FIO, DEPARTMENT, MOBILE, MAIL, START_D, NIO, AUTO FROM PERSONNEL")) {
        QMessageBox::critical(this, "Ошибка запроса", "Не удалось выполнить запрос к базе данных: " + query1.lastError().text());
        db.close();
        return;
    }

    ui->tableWidget->clear();
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setHorizontalHeaderLabels({"ФИО", "Отдел", "Мобильный", "Email", "Дата начала работы", "НИО", "Автомобиль"});

    int row = 0;
    while (query1.next()) {
        ui->tableWidget->insertRow(row);
        QSqlRecord record = query1.record();
        for (int col = 0; col < record.count(); ++col) {
            QTableWidgetItem *item = new QTableWidgetItem(record.value(col).toString());
            ui->tableWidget->setItem(row, col, item);
        }
        ++row;
    }

    db.close();
}

MainApp::~MainApp()
{
    delete ui;
    if (showinfo) {
        showinfo->close();
    }
}

void MainApp::on_tableWidget_cellDoubleClicked(int row, int /*column*/)
{
    if (showinfo) {
        showinfo->close();
        // delete showinfo;
        showinfo = nullptr;
    }
    if (!showinfo) {
        showinfo = new ShowInfo;
        connect(this, &MainApp::signal, showinfo, &ShowInfo::slot);
        connect(this, &MainApp::signalname, showinfo, &ShowInfo::slotname);
    }

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

    QString fio = ui->tableWidget->item(row, 0)->text();
    QString department = ui->tableWidget->item(row, 1)->text();
    QString mobile = ui->tableWidget->item(row, 2)->text();
    QString mail = ui->tableWidget->item(row, 3)->text();
    QString automobile = ui->tableWidget->item(row, 6)->text();
    // QString NewMobile[][];
    // for(int i = 0; i<sizeof(mobile)/8; i++)
    // {
    //     if(mobile[i] == ";"){
    //     myVector.push_back(massive[i]);
    //     }
    //     }
    //     myVector.push_back(massive[i]);
    //     qDebug() << "Value " << i << ": " << myVector.value(i);
    // }
    // for(int i {0}; i<sizeof(mobile)/8, i++){
    //     if(mobile[i] == ";"){
    //         mobile[i] = ;
    //     }
    // }
    if(automobile == "")
    {
        automobile = "нет автомобиля";
    }
    QString tabelnomer, doljnost, lasttime, lastdate;
    QSqlQuery query;
    query.prepare("SELECT FOTO, TABELNOMER, DOLJNOST, LASTTIME, LASTDATE FROM PERSONNEL WHERE FIO = :fio");
    query.bindValue(":fio", fio);

    if (query.exec() && query.next()) {
        QByteArray imageData = query.value(0).toByteArray();
        tabelnomer = query.value(1).toString();

        // for(int i {4}; i<7;i++){
        //     phone[i-4]=tabelnomer[i];
        // }
        // for(int i {14}; i<18;i++){
        //     cabinet[i-14]=tabelnomer[i];
        // }

        doljnost = query.value(2).toString();
        lasttime = query.value(3).toString();
        lastdate = query.value(4).toString();
        QPixmap pixmap;
        if (!pixmap.loadFromData(imageData)) {
            qDebug() << "Ошибка загрузки изображения из данных";
            return;
        }

        showinfo->show();
        emit signal(pixmap);
        emit signalname(fio, mobile, department, mail, automobile, tabelnomer, doljnost, lasttime, lastdate);
    } else {
        qDebug() << "Ошибка выполнения запроса:" << query.lastError().text();
    }

    db.close();
}

void MainApp::on_actionProducts_triggered()
{
    hideUnused();
    ui-> label->setText("Работает");
}


void MainApp::on_actionMessages_triggered()
{
    hideUnused();
    ui-> label->setText("Почта");
}


void MainApp::on_actionPersonnel_triggered()
{
    hideUnused();
    // ui->departmentInfo->hide();
    // ui->carInfo->hide();
    // ui->dolzhnostInfo->hide();
    // ui->welcome->hide();
    // ui->emailImfo->hide();
    // ui->date->hide();
    // ui->time->hide();
    // ui->mobileInfo->hide();
    // ui->time_to_home->hide();
    // ui->date->hide();
    // ui->date_2->hide();
    // ui->tabelnomer->hide();


    // ui->department->hide();
    // ui->car->hide();
    // ui->email->hide();
    // ui->dolzhnost->hide();
    // ui->fio->hide();
    // ui->photo->hide();
    // ui->mobile->hide();
    // ui->label->setText("");

    ui->tableWidget->show();
}



void MainApp::on_actionAccount_triggered()
{
    //emit signalAccount(pixmap, fio, mobile, department, mail, automobile, tabelnomer, doljnost, lasttime, lastdate);
    ui->department->show();
    ui->car->show();
    ui->email->show();
    ui->dolzhnost->show();
    ui->fio->show();
    ui->photo->show();
    ui->mobile->show();
    ui->departmentInfo->show();
    ui->carInfo->show();
    ui->dolzhnostInfo->show();
    ui->welcome->show();
    ui->emailImfo->show();
    ui->date->show();
    ui->time->show();
    ui->mobileInfo->show();
    ui->time_to_home->show();
    ui->date->show();
    ui->date_2->show();
    ui->tabelnomer->show();
    ui->tableWidget->hide();
}

void MainApp::slotAccount(QPixmap &a, QString &name, QString &mobilephone, QString &department, QString &mail, QString &car, QString &tablenomer, QString &doljnost, QString &lasttime, QString &lastdate)
{
    ui->department->setText(department);
    if (car==""){
        car = "Нет автомобиля";
    }
    ui->car->setText(car);
    ui->email->setText(mail);
    ui->dolzhnost->setText(doljnost);
    ui->fio->setText(name);
    ui->photo->setPixmap(a);
    ui->mobile->setText(mobilephone);
    ui->time->setText(lasttime);
    ui->date->setText(lastdate);
    ui->tabelnomer->setText(tablenomer);
    QTime currentTime = QTime::currentTime();
    QDate currentDate = QDate::currentDate();
    // Преобразование строки lasttime в объект QTime с форматом hh:mm:ss
    QTime lastTime = QTime::fromString(lasttime, "hh:mm:ss");
    QDate lastDate = QDate::fromString(lastdate, "yyyy.MM.dd");
    // Вычисление разницы между текущим временем и lasttime в секундах
    if (currentDate == lastDate) {
        // Вычисление разницы между текущим временем и lasttime в секундах
        int secondsDifference = lastTime.secsTo(currentTime);

        // Преобразование секунд в часы, минуты и секунды
        int hours = secondsDifference / 3600;
        int minutes = (secondsDifference % 3600) / 60;
        int seconds = secondsDifference % 60;

        // Форматирование результата
        QString workDuration = QString("%1:%2:%3")
                                   .arg(hours, 2, 10, QChar('0'))
                                   .arg(minutes, 2, 10, QChar('0'))
                                   .arg(seconds, 2, 10, QChar('0'));

        // Отображение workDuration в label_19
        ui->time_to_home->setText(workDuration);
    }
}

void MainApp::hideUnused(){
    ui->departmentInfo->hide();
    ui->carInfo->hide();
    ui->dolzhnostInfo->hide();
    ui->welcome->hide();
    ui->emailImfo->hide();
    ui->date->hide();
    ui->time->hide();
    ui->mobileInfo->hide();
    ui->time_to_home->hide();
    ui->date->hide();
    ui->date_2->hide();
    ui->tabelnomer->hide();


    ui->department->hide();
    ui->car->hide();
    ui->email->hide();
    ui->dolzhnost->hide();
    ui->fio->hide();
    ui->photo->hide();
    ui->mobile->hide();
    ui->label->hide();
}

