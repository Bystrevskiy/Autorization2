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
#include <server.h>
#include "showinfo.h"
#include <QMainWindow>
#include <QTcpSocket>
#include <QSettings>
MainApp::MainApp(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainApp)
    , showinfo(nullptr)
{
    socket = new QTcpSocket(this);
    if (socket->state() == QAbstractSocket::ConnectedState) {
        qDebug() << "Socket is connected!";
    } else {
        qDebug() << "Socket is not connected!";
    }

    connect(socket, &QTcpSocket::readyRead, this, &MainApp::slotReadyRead);
    connect(socket, &QTcpSocket::disconnected, this, &MainApp::deleteLater);
    connect(socket, &QTcpSocket::errorOccurred, this, [](QAbstractSocket::SocketError socketError) {
        qDebug() << "Socket error:" << socketError;
    });

    ui->setupUi(this);
    connect(ui->tableWidget->horizontalHeader(), &QHeaderView::sectionClicked, this, &MainApp::sortTableByColumn);
    ui->tableWidget->setEditTriggers(QTableWidget::NoEditTriggers);

    // hideUnused();
    QString dep = "ALL";
    departmentSort(dep);

    // ui->scrollArea->show();
    // ui->tableWidget->show();
    // ui->label_3->show();
    // ui->lineEdit->show();
    ui->tableWidget->setStyleSheet("background-color: rgb(255, 255, 255); color: rgb(0, 0, 0); font: 11pt Segoe UI");
    applySavedStyleSheet();

}

MainApp::~MainApp()
{
    delete ui;
    if (showinfo) {
        showinfo->close();
    }
}
void MainApp::sortTableByColumn(int column)
{
    static Qt::SortOrder sortOrder = Qt::AscendingOrder;
    ui->tableWidget->sortItems(column, sortOrder);
    sortOrder = (sortOrder == Qt::AscendingOrder) ? Qt::DescendingOrder : Qt::AscendingOrder;
}

void MainApp::departmentSort(QString department)
{
    QSqlDatabase db = QSqlDatabase::database();

    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setHorizontalHeaderLabels({"ФИО", "Отдел", "Мобильный", "Email", "Дата начала работы", "НИО", "Автомобиль"});

    // Подготавливаем SQL-запрос
    QSqlQuery querySort;
    if (department == "ALL") {
        querySort.prepare("SELECT FIO, DEPARTMENT, MOBILE, MAIL, START_D, NIO, AUTO, LASTDATE, LASTTIME FROM PERSONNEL");
    } else {
        querySort.prepare("SELECT FIO, DEPARTMENT, MOBILE, MAIL, START_D, NIO, AUTO, LASTDATE, LASTTIME FROM PERSONNEL WHERE DEPARTMENT = :department");
        querySort.bindValue(":department", department);
    }

    if (!querySort.exec()) {
        qDebug() << "Ошибка выполнения запроса: " << querySort.lastError().text();
        return;
    }

    QTime currentTime = QTime::currentTime();
    QDate currentDate = QDate::currentDate();

    int row = 0;
    while (querySort.next()) {
        ui->tableWidget->insertRow(row);

        // Извлекаем нужные значения для текущей строки один раз
        QStringList rowData = {
            querySort.value("FIO").toString(),
            querySort.value("DEPARTMENT").toString(),
            querySort.value("MOBILE").toString(),
            querySort.value("MAIL").toString(),
            querySort.value("START_D").toString(),
            querySort.value("NIO").toString(),
            querySort.value("AUTO").toString()
        };

        QString lastTimeStr = querySort.value("LASTTIME").toString();
        QString lastDateStr = querySort.value("LASTDATE").toString();

        // Подготавливаем время и дату для раскраски ячеек
        QTime lastTime = QTime::fromString(lastTimeStr, "hh:mm:ss");
        QDate lastDate = QDate::fromString(lastDateStr, "yyyy.MM.dd");
        bool shouldHighlight = (currentDate == lastDate && currentTime > lastTime);

        // Заполняем строку данными
        for (int col = 0; col < rowData.size(); ++col) {
            QTableWidgetItem *item = new QTableWidgetItem(rowData[col]);
            if (shouldHighlight) {
                item->setBackground(Qt::green);
                ui->tableWidget->setItem(row, col, item);
            }
            else{
                ui->tableWidget->setItem(row, col, item);
            }

        }
        ++row;
    }
    db.close();
}

// void MainApp::departmentSort(QString department)
// {
//     // Проверяем текущее подключение к базе данных
//     QSqlDatabase db = QSqlDatabase::database();

//     // Очищаем таблицу перед заполнением
//     ui->tableWidget->clearContents();  // Очищаем содержимое, но сохраняем заголовки
//     ui->tableWidget->setRowCount(0);   // Устанавливаем количество строк в 0

//     // Устанавливаем заголовки столбцов таблицы
//     ui->tableWidget->setHorizontalHeaderLabels({"ФИО", "Отдел", "Мобильный", "Email", "Дата начала работы", "НИО", "Автомобиль"});

//     // Подготавливаем SQL-запрос
//     QSqlQuery querySort;
//     if (department == "ALL") {
//         querySort.prepare("SELECT FIO, DEPARTMENT, MOBILE, MAIL, START_D, NIO, AUTO,LASTDATE, LASTTIME FROM PERSONNEL");

//     } else {
//         querySort.prepare("SELECT FIO, DEPARTMENT, MOBILE, MAIL, START_D, NIO, AUTO, LASTDATE, LASTTIME FROM PERSONNEL WHERE DEPARTMENT = :department");
//         querySort.bindValue(":department", department);
//     }

//     // Выполняем запрос и проверяем ошибки
//     if (!querySort.exec()) {
//         qDebug() << "Ошибка выполнения запроса: " << querySort.lastError().text();
//         return;
//     }
//     QTime currentTime = QTime::currentTime();
//     QDate currentDate = QDate::currentDate();
//     // Заполняем таблицу результатами
//     int row = 0;
//     while (querySort.next()) {
//         // Вставляем новую строку
//         ui->tableWidget->insertRow(row);

//         // Проходим по всем столбцам и заполняем значения
//         for (int col = 0; col < querySort.record().count(); ++col) {
//             QString cellValue = querySort.value(col).toString();
//             QTableWidgetItem *item = new QTableWidgetItem(cellValue);

//             // Преобразование строки lasttime в объект QTime с форматом hh:mm:ss
//             QString lastTimeStr = querySort.value("LASTTIME").toString();
//             QString lastDateStr = querySort.value("LASTDATE").toString();

//             // Преобразуем строку в объект QTime с указанием формата (например, "hh:mm:ss" для времени)
//             QTime lastTime = QTime::fromString(lastTimeStr, "hh:mm:ss");
//             QDate lastDate = QDate::fromString(lastDateStr, "yyyy.MM.dd");
//             if(currentDate==lastDate && currentTime > lastTime){
//                     item->setBackground(Qt::green);
//             }

//             ui->tableWidget->setItem(row, col, item);
//         }
//         ++row;
//     }
//     db.close();
// }


void MainApp::on_tableWidget_cellDoubleClicked(int row, int /*column*/)
{
    if (showinfo) {
        showinfo->close();
        showinfo = nullptr;
    }

    if (!showinfo) {
        showinfo = new ShowInfo(this);
        connect(this, &MainApp::signal, showinfo, &ShowInfo::slot);
        connect(this, &MainApp::signalname, showinfo, &ShowInfo::slotname);
    }

    QString fio = ui->tableWidget->item(row, 0)->text();

    // Подключение к базе данных
    QSqlDatabase db = QSqlDatabase::database();
    if (!db.isOpen()) {
        qDebug() << "База данных не открыта. Пытаемся открыть...";
        if (!db.open()) {
            QMessageBox::critical(this, "Ошибка соединения", "Не удалось подключиться к базе данных.");
            return;
        }
    }

    QSqlQuery query;
    query.prepare("SELECT FIO, DEPARTMENT, MOBILE, MAIL, AUTO, TABELNOMER, DOLJNOST, LASTTIME, LASTDATE, FOTO "
                  "FROM PERSONNEL WHERE FIO = :fio");
    query.bindValue(":fio", fio);

    if (query.exec() && query.next()) {
        QString department = query.value("DEPARTMENT").toString();
        QString mobile = query.value("MOBILE").toString();
        QString mail = query.value("MAIL").toString();
        QString automobile = query.value("AUTO").toString();
        if (automobile.isEmpty()) {
            automobile = "нет автомобиля";
        }
        QString tabelnomer = query.value("TABELNOMER").toString();
        QString doljnost = query.value("DOLJNOST").toString();
        QString lasttime = query.value("LASTTIME").toString();
        QString lastdate = query.value("LASTDATE").toString();

        // Изображение
        QByteArray imageData = query.value("FOTO").toByteArray();
        QPixmap pixmap;
        if (!pixmap.loadFromData(imageData)) {
            qDebug() << "Ошибка загрузки изображения из данных";
        }

        showinfo->show();
        emit signal(pixmap);
        emit signalname(fio, mobile, department, mail, automobile, tabelnomer, doljnost, lasttime, lastdate);  // Передаем информацию в слот
    } else {
        qDebug() << "Ошибка выполнения запроса или данных нет: " << query.lastError().text();
    }

    db.close();  // Закрываем базу данных
}


void MainApp::setColorTheme(QString styleSheet)
{
    ui->label_3->setStyleSheet(styleSheet);
    ui->lineEdit->setStyleSheet(styleSheet);
    ui->department->setStyleSheet(styleSheet);
    ui->car->setStyleSheet(styleSheet);
    ui->email->setStyleSheet(styleSheet);
    ui->dolzhnost->setStyleSheet(styleSheet);
    ui->fio->setStyleSheet(styleSheet);
    ui->photo->setStyleSheet(styleSheet);
    ui->mobile->setStyleSheet(styleSheet);
    ui->departmentInfo->setStyleSheet(styleSheet);
    ui->carInfo->setStyleSheet(styleSheet);
    ui->dolzhnostInfo->setStyleSheet(styleSheet);
    ui->welcome->setStyleSheet(styleSheet);
    ui->emailImfo->setStyleSheet(styleSheet);
    ui->date->setStyleSheet(styleSheet);
    ui->time->setStyleSheet(styleSheet);
    ui->mobileInfo->setStyleSheet(styleSheet);
    ui->time_to_home->setStyleSheet(styleSheet);
    ui->date_2->setStyleSheet(styleSheet);
    ui->tabelnomer->setStyleSheet(styleSheet);
    ui->pushButton->setStyleSheet(styleSheet);
    ui->pushButton_2->setStyleSheet(styleSheet);
    ui->pushButton_3->setStyleSheet(styleSheet);
    ui->label_2->setStyleSheet(styleSheet);
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
// _________________________________________
void MainApp::hideUnused(){
    ui->label_3->hide();
    ui->lineEdit->hide();
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
    ui->label_2->hide();
    ui->tableWidget->hide();
    ui->department->hide();
    ui->car->hide();
    ui->email->hide();
    ui->dolzhnost->hide();
    ui->fio->hide();
    ui->photo->hide();
    ui->mobile->hide();
    //ui->label->hide();
    ui->pushButton->hide();
    ui->pushButton_2->hide();
    ui->pushButton_3->hide();
    // ui->outMessage->hide();
    // ui->connect->hide();
    // ui->textBrowser->hide();
    // ui->sendMessage->hide();
    ui->scrollArea->hide();
}
// _________________________________________

void MainApp::on_connect_clicked() {
    qDebug() << "Trying to connect...";
    if (socket->state() == QAbstractSocket::UnconnectedState) {
        socket->connectToHost("192.168.56.1", 0000 );
        qDebug() << "Connecting...";
    } else {
        qDebug() << "Socket is already connected or connecting.";
    }
}


void MainApp::SendToServer(QString str)
{
    Data.clear();
    QDataStream out(&Data, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_5_15);
    out<<str;
    socket->write(Data);
    qDebug() << "Sending: " << str;
}
void MainApp::slotReadyRead()
{
    QDataStream in(socket);
    in.setVersion(QDataStream::Qt_5_15);
    if(in.status()==QDataStream::Ok)
    {
        QString str;
        in >> str;
        qDebug() << "Received on server: " << str;
        // ui->textBrowser->append(str);
    }
    else{
        // ui->textBrowser->append("read error");
    }

}


void MainApp::on_sendMessage_clicked()
{
    // SendToServer(ui->outMessage->text());
    // ui->outMessage->clear();
}


void MainApp::on_outMessage_returnPressed()
{
    // SendToServer(ui->outMessage->text());
    // ui->outMessage->clear();
}

void MainApp::saveStyleSheet(const QString &styleSheet)
{
    QSettings settings("MyCompany", "MyApp");
    settings.setValue("StyleSheet", styleSheet);
}

void MainApp::saveSetFont(const QString &setFont)
{
    QSettings settings("MyCompany", "MyApp");
    settings.setValue("SetFont", setFont);
}

// Функция для загрузки стиля
QString MainApp::loadStyleSheet()
{
    QSettings settings("MyCompany", "MyApp");
    QString loadedStyle = settings.value("StyleSheet", "").toString();
    qDebug() << "StyleSheet loaded:" << loadedStyle;
    return loadedStyle;
}

QString MainApp::loadSetFont()
{
    QSettings settings("MyCompany", "MyApp");
    QString setFont = settings.value("SetFont", "").toString();
    return setFont;
}

void MainApp::applySavedStyleSheet()
{
    QString savedStyleSheet = loadStyleSheet();
    QString setFont = loadSetFont();
    if (!savedStyleSheet.isEmpty()) {
        this->setStyleSheet(savedStyleSheet+setFont);
        // applyStyleSheet(savedStyleSheet,setFont);
        setColorTheme(setFont);

        // ui->scrollArea->setStyleSheet("");
        // ui->scrollAreaWidgetContents->setStyleSheet("");
        ui->scrollArea->setStyleSheet(savedStyleSheet+setFont);
        ui->scrollAreaWidgetContents->setStyleSheet(savedStyleSheet+setFont);
        ui->label_3->setStyleSheet(savedStyleSheet+setFont);
        ui->lineEdit->setStyleSheet(savedStyleSheet+setFont);
        ui->tab->setStyleSheet(savedStyleSheet+setFont);
        ui->tab_2->setStyleSheet(savedStyleSheet+setFont);
        ui->tableWidget->setStyleSheet("");
        ui->tableWidget->setStyleSheet("background-color: rgb(255, 255, 255); color: rgb(0, 0, 0); font: 11pt Segoe UI");
    }
}

void MainApp::applyStyleSheet(const QString &styleSheet, const QString &setFont) {
    // Применяем стиль ко всем компонентам через главное окно
    this->setStyleSheet(styleSheet+setFont);
    ui->scrollArea->setStyleSheet(styleSheet+setFont);
    ui->scrollAreaWidgetContents->setStyleSheet(styleSheet+setFont);
    ui->tab->setStyleSheet(styleSheet+setFont);
    ui->tab_2->setStyleSheet(styleSheet+setFont);
    emit colorSchemeChanged(styleSheet);
    qDebug() << "Emit colorSchemeChanged with: " << styleSheet;
}

void MainApp::on_pushButton_clicked()
{
    QString setFont = "font: 14pt Segoe UI; color: rgb(255,255,255)";
    setColorTheme(setFont);
    QString s = "background-color: rgb(13, 76, 128);";
    applyStyleSheet(s, setFont);
    saveStyleSheet(s);
    saveSetFont(setFont);
    emit colorSchemeChanged(s);
}



void MainApp::on_pushButton_2_clicked()
{
    QString setFont = "font: 14pt Segoe UI; color: rgb(32, 107, 88);";
    setColorTheme(setFont);
    QString s = "background-color: rgb(254, 190, 152);";
    applyStyleSheet(s,setFont);
    saveStyleSheet(s);
    saveSetFont(setFont);
    emit colorSchemeChanged(s);
}

void MainApp::on_pushButton_3_clicked()
{
    QString setFont = "font: 14pt Segoe UI; color: rgb(255,255,255)";
    setColorTheme(setFont);
    QString s = "background-color: rgb(187, 39, 73);";
    applyStyleSheet(s,setFont);
    saveStyleSheet(s);
    saveSetFont(setFont);
    emit colorSchemeChanged(s);
}



void MainApp::on_d01_clicked()
{
    QString dep = "ОТДЕЛ 01";
    departmentSort(dep);
}
void MainApp::on_d09_clicked()
{
    QString dep = "ОТДЕЛ 09";
    departmentSort(dep);
}
void MainApp::on_d13_clicked()
{
    QString dep = "ОТДЕЛ 13";
    departmentSort(dep);
}
void MainApp::on_d14_clicked()
{
    QString dep = "ОТДЕЛ 14";
    departmentSort(dep);
}
void MainApp::on_d20_clicked()
{
    QString dep = "ОТДЕЛ 20";
    departmentSort(dep);
}
void MainApp::on_d21_clicked()
{
    QString dep = "ОТДЕЛ 21";
    departmentSort(dep);
}
void MainApp::on_d22_clicked()
{
    QString dep = "ОТДЕЛ 22";
    departmentSort(dep);
}
void MainApp::on_d23_clicked()
{
    QString dep = "ОТДЕЛ 23";
    departmentSort(dep);
}
void MainApp::on_d24_clicked()
{
    QString dep = "ОТДЕЛ 24";
    departmentSort(dep);
}
void MainApp::on_d25_clicked()
{
    QString dep = "ОТДЕЛ 25";
    departmentSort(dep);
}
void MainApp::on_d29_clicked()
{
    QString dep = "ОТДЕЛ 29";
    departmentSort(dep);
}
void MainApp::on_d31_clicked()
{
    QString dep = "ОТДЕЛ 31";
    departmentSort(dep);
}
void MainApp::on_d34_clicked()
{
    QString dep = "ОТДЕЛ 34";
    departmentSort(dep);
}
void MainApp::on_d63_clicked()
{
    QString dep = "ОТДЕЛ 63";
    departmentSort(dep);
}
void MainApp::on_d65_clicked()
{
    QString dep = "ОТДЕЛ 65";
    departmentSort(dep);
}
void MainApp::on_d73_clicked()
{
    QString dep = "ОТДЕЛ 73";
    departmentSort(dep);
}
void MainApp::on_d75_clicked()
{
    QString dep = "ОТДЕЛ 75";
    departmentSort(dep);
}
void MainApp::on_d81_clicked()
{
    QString dep = "ОТДЕЛ 81";
    departmentSort(dep);
}
void MainApp::on_d82_clicked()
{
    QString dep = "ОТДЕЛ 82";
    departmentSort(dep);
}
void MainApp::on_d89_clicked()
{
    QString dep = "ОТДЕЛ 89";
    departmentSort(dep);
}
void MainApp::on_d91_clicked()
{
    QString dep = "ОТДЕЛ 91";
    departmentSort(dep);
}
void MainApp::on_d92_clicked()
{
    QString dep = "ОТДЕЛ 92";
    departmentSort(dep);
}
void MainApp::on_d95_clicked()
{
    QString dep = "ОТДЕЛ 95";
    departmentSort(dep);
}
void MainApp::on_depAll_clicked()
{
    QString dep = "ALL";
    departmentSort(dep);
}

void MainApp::on_lineEdit_cursorPositionChanged()
{
    QString depNum = ui->lineEdit->text();
    if(depNum.size()==0){
        QString dep = "ALL";
        departmentSort(dep);
    }
    else if(depNum.size() < 2 && depNum.size()!=0){
        departmentSort("ОТДЕЛ 0"+depNum);
    }
    else{
        departmentSort("ОТДЕЛ "+depNum);
    }
}

