/*
QEvents


*/

#include <QApplication>
#include <QtWidgets>
#include "qwidget_example.h"


int main(int argc, char **argv)
{
	QApplication app(argc, argv);//Entry Point


	//QObject Tree
    QTCourse::WidgetExample * root_window = new QTCourse::WidgetExample;//No Parent to this QObject
    
	

	//show root widget(windows)
	root_window->show();
	
	//execute event loop
	return app.exec();


	return 0;
}
