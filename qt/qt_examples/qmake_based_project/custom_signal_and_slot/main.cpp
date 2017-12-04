/*
Signal and slots
*example to work with qwidget and qobject tree

*/

#include <QApplication>
#include <QtWidgets>
#include "custom_signal.cpp"

int main(int argc, char **argv)
{
	QApplication app(argc, argv);//Entry Point
	//Declares an instance
	QtCourse::MyClass a;
	//Another instance
	QtCourse::MyClass b;
	//Connect two classes using Qt
    QObject::connect( &a, SIGNAL(valueChanged(int)),
                       &b, SLOT(mySlot(int))
                     );
    a.mySlot(33);
    b.mySlot(32);
	return app.exec();



}
