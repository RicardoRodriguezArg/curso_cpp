#include "qwidget_example.h"
#include <QLabel>
#include <QCloseEvent>
#include <QVBoxLayout>
#include <QMessageBox>

QTCourse::WidgetExample::WidgetExample(QWidget * parent):QWidget(parent)
{
	//Create custom layout
	QLabel * label = new QLabel("try to close windows", this);
    QVBoxLayout * layout = new QVBoxLayout(this);
	layout->addWidget(label, 0, Qt::AlignCenter);
    setWindowModified(true);
	setWindowTitle("Close Event");

}
/*
 * Difference Between Events and Signals
 * Events have always an specific emitter an specific reciever
 * Every event is always processed by an specific object
 * Signal/Slot have a relation of many to many
*/
//overloading close event method(definned in QWidget base class)
void QTCourse::WidgetExample::closeEvent(QCloseEvent * event)
{
    //install a hook to ask the user if we allow to close the windows
    if (shouldBeClosed())
    {
        //the event is accepted
		event->accept();
	}
	else
	{
        //if the event is ignore the event will be propagete to the entire qwidget tree
		event->ignore();
	}
}


bool QTCourse::WidgetExample::shouldBeClosed()
{

	if (!isWindowModified())
	{
		return true;
	}
    QMessageBox::StandardButton answer = QMessageBox::question(this, "Close Windows Example", "Really?", QMessageBox::Yes | QMessageBox::No);
    return (answer == QMessageBox::Yes);

}
