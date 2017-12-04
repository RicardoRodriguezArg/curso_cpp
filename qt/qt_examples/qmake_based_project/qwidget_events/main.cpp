/*
QEvents


*/

#include <QApplication>
#include <QtWidgets>



int main(int argc, char **argv)
{
	QApplication app(argc, argv);//Entry Point


	//QObject Tree
    QWidget * root_window = new QWidget();//No Parent to this QObject
    
	

	//show root widget(windows)
	root_window->show();
	
	//execute event loop
	return app.exec();


	return 0;
}
