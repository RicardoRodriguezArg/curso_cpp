/*
Signal and slots
*example to work with qwidget and qobject tree

*/

#include <QApplication>
#include <QtWidgets>
//headers for new sintax in Qt5
#include <functional>
#include <iostream>

//simple function to add in QT5
void simpleSlot(int value)
{
    std::cout<<"value: "<<value<<"\n";
}	

int main(int argc, char **argv)
{
	QApplication app(argc, argv);//Entry Point

	/**
	QObject::connect ( const QObject * sender, const char * signal, const QObject * receiver, const char * method);
	*/
	//QObject Tree
    QWidget * root_window = new QWidget();//No Parent to this QObject
    
    QSlider * slider = new QSlider(Qt::Horizontal, root_window);
    slider->setRange(0,100);

    QSpinBox * spinBox = new QSpinBox(root_window);
    //create signal/slot connections with object menber
    /*
    Pros
		Compile time check of the existence of the signals and slot,
		of the types, or if the Q_OBJECT is missing.
		Argument can be by typedefs or with different namespace specifier, and it works.
		Possibility to automatically cast the types if there is implicit conversion (e.g. from QString to QVariant)
		It is possible to connect to any member function of QObject, not only slots.
	*/

	QObject::connect(slider, &QSlider::valueChanged,
    				spinBox, &QSpinBox::setValue
    	);

	//connect to simple functions

    /*using namespace std::placeholders;
	QObject::connect(slider, &QSlider::valueChanged,
    				std::bind(simpleSlot,_1)
    	);
    */

    /*

    */
    //create layout
    QHBoxLayout * layout = new QHBoxLayout(root_window);
	layout->addWidget(slider);
	layout->addWidget(spinBox);
	//
	slider->setValue( 40 );
	//show root widget(windows)
	root_window->show();
	
	return app.exec();


	
}
