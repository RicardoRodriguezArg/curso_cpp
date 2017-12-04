/*
Signal and slots
*example to work with qwidget and qobject tree

*/

#include <QApplication>
#include <QtWidgets>


int main(int argc, char **argv)
{
	QApplication app(argc, argv);//Entry Point


	//QObject Tree
    QWidget * root_window = new QWidget();//No Parent to this QObject
    
    QSlider * slider = new QSlider(Qt::Horizontal, root_window);
    slider->setRange(0,100);

    QSpinBox * spinBox = new QSpinBox(root_window);
    //create signal/slot connections
    QObject::connect(slider, SIGNAL(valueChanged(int)),
    				spinBox, SLOT( setValue(int))
    	);
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
