//#include <QDialog>
#include "dialog.h"
#include <QDebug>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->actionshow_PopUp, &QAction::triggered, this, &MainWindow::onShowPopUp);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onShowPopUp()
{
    QDialog * dialog = new QDialog(this);
    //custom dialog
    //Dialog * dialog = new Dialog(this);
    //created in modal mode
    dialog->exec();
    //non bloquing mode
//    /dialog->show();
    qDebug() << "QDialog destroy";
}
