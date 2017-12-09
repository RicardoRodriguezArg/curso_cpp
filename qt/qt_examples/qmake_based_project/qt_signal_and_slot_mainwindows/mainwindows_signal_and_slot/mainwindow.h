#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
signals:
    //just definned signal signature, not implement
    void init();
private slots:
    void onInit();
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
