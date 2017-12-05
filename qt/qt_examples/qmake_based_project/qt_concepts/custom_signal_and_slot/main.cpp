/*
Signal and slots
*example to work with qwidget and qobject tree

*/

#include <QApplication>
#include <QtWidgets>
#include <iostream>
#include "custom_signal.cpp"

int main(int argc, char **argv)
{
	QApplication app(argc, argv);//Entry Point
	//Declares an instance
    QtCourse::MyClass a("class a(Sender or Emitter)");
	//Another instance
    QtCourse::MyClass b("class b(Reciever)");
	//Connect two classes using Qt
    QObject::connect( &a, SIGNAL(valueChanged(int)),
                       &b, SLOT(mySlot(int))
                     );
    std::cout<<"emitting signal"<<std::endl;
    a.valueChanged(33);
    std::cout<<"emitting signal 2"<<std::endl;
    a.valueChanged(32);
    std::cout<<"emitting signal 3"<<std::endl;
	return app.exec();



}
