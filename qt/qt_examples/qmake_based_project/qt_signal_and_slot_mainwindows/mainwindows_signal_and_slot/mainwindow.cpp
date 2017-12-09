#include <QDebug>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //because this class inherits from QObject
    //just call connect
    //using new sintax in Qt5
    connect(this, &MainWindow::init, this, &MainWindow::onInit);
    emit init();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onInit()
{
    qDebug() << "Slot method associated";
}
