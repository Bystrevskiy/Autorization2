#include "mainwindow.h"
#include <server.h>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainApp *mainAppInstance = new MainApp();
    // Передаем объект MainApp в MainWindow
    MainWindow w(mainAppInstance);

    mainAppInstance = new MainApp();
    Server s;
    w.show();
    return a.exec();
}
