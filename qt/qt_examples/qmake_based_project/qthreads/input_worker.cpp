#include "input_worker.h"
#include <QThread>
#include <QtDebug>

//init constructor
QtCourse::InputWorker::InputWorker(QObject parent): QObject(parent),
    input_stream(stdin)
{
}
//
void QtCourse::InputWorker::startWork()
{
    qDebug()<< "Init Worker From Thread ID : "<<QThread::currentThreadId();
    //main loop for thread
    do
    {
        qDebug()<<"Input the size of the vector";
        const QString input_size = input_stream.readLine();
        emit inputAvailable(input_size);
    }
    while(true);
}
