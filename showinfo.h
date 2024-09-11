#ifndef SHOWINFO_H
#define SHOWINFO_H

#include <QWidget>
#include <QPixmap>

namespace Ui {
class ShowInfo;
}

class ShowInfo : public QWidget
{
    Q_OBJECT

public:
    explicit ShowInfo(QWidget *parent = nullptr);
    ~ShowInfo();

private:
    Ui::ShowInfo *ui;
protected:
    void closeEvent(QCloseEvent *event) override;
public slots:
    void slot(QPixmap a);
    void slotname(QString name, QString mobilephone, QString mail, QString department, QString car, QString tablenomer, QString doljnost, QString lasttime, QString lastdate);


};

#endif // SHOWINFO_H
