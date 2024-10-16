#ifndef MAINAPP_H
#define MAINAPP_H

#include <QMainWindow>
#include <QMenuBar>
#include <QToolBar>
#include "showinfo.h"
#include <QTcpSocket>
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
    void SendToServer(QString str);
    void on_actionProducts_triggered();
    void setColorTheme(QString s);
    void on_actionMessages_triggered();

    void on_actionPersonnel_triggered();

    void on_actionAccount_triggered();
    void hideUnused();
    void on_connect_clicked();

    void on_sendMessage_clicked();

    void on_outMessage_returnPressed();
    void applyStyleSheet(const QString &a);
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MainApp *ui;
    ShowInfo *showinfo = nullptr;
    QTcpSocket *socket;
    QByteArray Data;
public slots:
    void slotReadyRead();
    void slotAccount(QPixmap &a, QString &name, QString &mobilephone, QString &mail, QString &department, QString &car, QString &tablenomer, QString &doljnost, QString &lasttime, QString &lastdate);
signals:
    void colorSchemeChanged(const QString &styleSheet);
    void signal(QPixmap a);
    void signalname(QString name, QString mobilephone, QString mail, QString department, QString car, QString &tablenomer, QString &doljnost, QString &lasttime, QString &lastdate);
};

#endif // MAINAPP_H
