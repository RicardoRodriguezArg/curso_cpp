#include <QDebug>
#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //signal and slot new sintax for c++11
    //using lambdas
    QObject::connect(&w,&MainWindow::destroyed, [](){
        qDebug()<<"calling lamdbas from windows destroyer";
    });
    w.show();

    return a.exec();
}
