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
    void setColorTheme(QString s);
    void sortTableByColumn(int column);
    void hideUnused();
    void on_connect_clicked();

    void on_sendMessage_clicked();

    void on_outMessage_returnPressed();
    void applyStyleSheet(const QString &a, const QString &font);
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void saveStyleSheet(const QString &styleSheet);
    void saveSetFont(const QString &setFont);
    QString loadStyleSheet();
    QString loadSetFont();
    void applySavedStyleSheet();
    void on_pushButton_3_clicked();
    void departmentSort(QString strDepart);
    void on_d01_clicked();

    void on_d95_clicked();

    void on_d09_clicked();

    void on_d13_clicked();

    void on_d14_clicked();

    void on_d20_clicked();

    void on_d21_clicked();

    void on_d22_clicked();

    void on_d23_clicked();

    void on_d24_clicked();

    void on_d25_clicked();

    void on_d29_clicked();

    void on_d31_clicked();

    void on_d34_clicked();

    void on_d63_clicked();

    void on_d65_clicked();

    void on_d73_clicked();

    void on_d75_clicked();

    void on_d81_clicked();

    void on_d82_clicked();

    void on_d89_clicked();

    void on_d91_clicked();

    void on_d92_clicked();

    void on_depAll_clicked();

    void on_lineEdit_cursorPositionChanged();

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
