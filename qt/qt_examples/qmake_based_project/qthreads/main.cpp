/*
Qthread
*example to work with qwidget and qobject tree

*/

#include <QApplication>

#include "input_worker.h"
#include "random_vector_worker.h"


int main(int argc, char **argv)
{
	QApplication app(argc, argv);//Entry Point
    QThread thread_one;
    QThread thread_two;
    thread_one.start();
    thread_two.start();
	//QObject Tree

    QtCourse::InputWorker input_worker;
    input_worker.moveToThread(&thread_one);

    random_vector_worker randonVectorWorker;
    randonVectorWorker.moveToThread(&thread_two);
    //create connection
    QObject::connect(&input_worker, &QtCourse::InputWorker::inputAvailable,
                     &randonVectorWorker,&random_vector_worker::inputHandler);
    //run worker
    input_worker.startWork();

	return app.exec();



}
