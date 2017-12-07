/*
Qthread
*example to work with qwidget and qobject tree

*/

#include <QApplication>
#include <QtWidgets>



int main(int argc, char **argv)
{
	QApplication app(argc, argv);//Entry Point


	//QObject Tree
    QWidget * root_window = new QWidget();//No Parent to this QObject
    
	QLabel * label = new QLabel("Note", root_window); //Child object of root_windows
	QTextEdit * edit = new QTextEdit(root_window); //Child object of root_windows

	//Create two Push Buttons
	QPushButton * clear = new QPushButton("Clear", root_window );
	QPushButton * save = new QPushButton("Save", root_window );
	
	//Create Layout - First Horizontal
	QVBoxLayout * outer = new QVBoxLayout();
	outer->addWidget(label);
	outer->addWidget(edit);

	//Create Internal Layout
	QHBoxLayout * inner = new QHBoxLayout();
	inner->addWidget(clear);
	inner->addWidget(save);

	//assigned layout to widget
	root_window->setLayout(outer);
	outer->addLayout(inner);

	//show root widget(windows)
	root_window->show();
	
	return app.exec();


	return 0;
}
