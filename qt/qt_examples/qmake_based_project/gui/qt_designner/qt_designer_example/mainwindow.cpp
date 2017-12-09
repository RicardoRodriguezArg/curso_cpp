#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //Modify widget in code
    //ui->label->setText("Helllo Word (From Code)");
}

MainWindow::~MainWindow()
{
    delete ui;
}
