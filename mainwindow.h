#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "mainapp.h"
#include <mainapp.h>
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void loadSettings();

private slots:
    void on_pushButton_clicked();
signals:
    void signalAccount(QPixmap &a, QString &name, QString &mobilephone, QString &mail, QString &department, QString &car, QString &tablenomer, QString &doljnost, QString &lasttime, QString &lastdate);

private:
    Ui::MainWindow *ui;
    MainApp *mainapp;
};
#endif // MAINWINDOW_H
