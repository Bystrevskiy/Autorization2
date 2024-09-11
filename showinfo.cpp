#include "showinfo.h"
#include "ui_showinfo.h"
#include <QDebug>
#include "mainapp.h"
#include <QCloseEvent>
#include <QTime>
ShowInfo::ShowInfo(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ShowInfo)
{
    ui->setupUi(this);
}

ShowInfo::~ShowInfo()
{
    delete ui;
}

void ShowInfo::slot(QPixmap a)
{
    qDebug() << "Слот slot вызывается";

    if (!a.isNull()) {
        ui->photo->setPixmap(a);
        ui->photo->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    } else {
        qDebug() << "Получен пустой QPixmap";
    }
}

void ShowInfo::slotname(QString name, QString mobilephone, QString mail, QString department, QString car, QString tablenomer, QString doljnost, QString lasttime, QString lastdate)
{
    qDebug() << "Слот slotname вызывается";
    ui->label->setText(name);
    ui->label_7->setText(mobilephone);
    ui->label_12->setText(mail);
    ui->label_9->setText(department);
    ui->label_15->setText(car);
    ui->label_6->setText(tablenomer);
    ui->label_11->setText(doljnost);
    ui->label_16->setText(lasttime);
    ui->label_18->setText(lastdate);
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
        ui->label_19->setText(workDuration);
    }
    // Установка текущего времени в timeEdit
    ui->timeEdit->setTime(currentTime);
}
void ShowInfo::closeEvent(QCloseEvent *event)
{
    this->hide();
    event->ignore();
}

