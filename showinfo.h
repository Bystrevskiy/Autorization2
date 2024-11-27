#ifndef SHOWINFO_H
#define SHOWINFO_H

#include <QWidget>
#include <QPixmap>


class MainApp;
namespace Ui {
class ShowInfo;
}
class ShowInfo : public QWidget
{
    Q_OBJECT

public:
    explicit ShowInfo(MainApp *appInstance, QWidget *parent = nullptr);
    ~ShowInfo();

private:
    Ui::ShowInfo *ui;
protected:
    void closeEvent(QCloseEvent *event) override;
public slots:
    void applyColorScheme(const QString &stylesheet);
    void slot(QPixmap a);
    void loadSettings();
    void slotname(QString name, QString mobilephone, QString mail, QString department, QString car, QString tablenomer, QString doljnost, QString lasttime, QString lastdate);


};

#endif // SHOWINFO_H
