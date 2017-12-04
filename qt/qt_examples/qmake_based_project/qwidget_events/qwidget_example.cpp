#include "qwidget_example.h"
#include <QLabel>
#include <QVBoxLayout>
#include <QMessageBox>

QtCourse::WidgetExample::WidgetExample(QWidget * parent = 0):QWidget(parent)
{
	//Create custom layout
	QLabel * label = new QLabel("try to close windows", this);
	QVBoxLayout layout = * new QVBoxLayout(this);
	layout->addWidget(label, 0, Qt::AlignCenter);
	setWindowsModified(true);
	setWindowTitle("Close Event");

}

void QtCourse::WidgetExample::closeEvent(QCloseEvent * event)
{
	if (shouldBeClosed())
	{
		event->accept();
	}
	else
	{
		event->ignore();
	}
}


bool QtCourse::WidgetExample::shouldBeClosed()
{

	if (!isWindowModified())
	{
		return true;
	}
	QMessageBox::StandarButton answer = QMessageBox::question(this, "Close Windows Example", "Really?", QMessageBox::Yes | QMessageBox::No);
	return (answer == QMessageBox::Yes);
}