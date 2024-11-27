#include "mainwindow.h"
#include <server.h>
#include <QApplication>
#include "mainapp.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainApp *mainAppInstance = new MainApp();
    // Передаем объект MainApp в MainWindow
    MainWindow w(mainAppInstance);
    // MainApp *appInstance = nullptr;
    mainAppInstance = new MainApp();
    Server s;
    w.show();
    return a.exec();
}
