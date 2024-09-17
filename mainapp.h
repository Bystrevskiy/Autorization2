#ifndef MAINAPP_H
#define MAINAPP_H

#include <QMainWindow>
#include <QMenuBar>
#include <QToolBar>
#include "showinfo.h"

namespace Ui {

class MainApp;
}

class MainApp : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainApp(QWidget *parent = nullptr);
    ~MainApp();


private slots:
    void on_tableWidget_cellDoubleClicked(int row, int column);

    void on_actionProducts_triggered();

    void on_actionMessages_triggered();

    void on_actionPersonnel_triggered();

    void on_actionAccount_triggered();
    void hideUnused();
private:
    Ui::MainApp *ui;
    ShowInfo *showinfo = nullptr;

public slots:
    void slotAccount(QPixmap &a, QString &name, QString &mobilephone, QString &mail, QString &department, QString &car, QString &tablenomer, QString &doljnost, QString &lasttime, QString &lastdate);
signals:

    void signal(QPixmap a);
    void signalname(QString name, QString mobilephone, QString mail, QString department, QString car, QString &tablenomer, QString &doljnost, QString &lasttime, QString &lastdate);
};

#endif // MAINAPP_H
