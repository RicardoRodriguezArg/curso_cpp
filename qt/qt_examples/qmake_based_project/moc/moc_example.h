#ifndef MOC_EXAMPLES_H
#define MOC_EXAMPLES_H
#include <QObject>
namespace QtCourse
{
	//QTObject is the heart of Qt object model
	class Example : public QObject
	{
		//moc MACRO0
		Q_OBJECT
		//From Qt 4.2
		Q_PROPERTY()
	public:
		//define an enum as property
		 enum Priority { High, Low, VeryHigh, VeryLow };
		 //MOC MACRO for defined an enum in MOC system
    	 Q_ENUM(Priority)

		Example(QObject * parent = 0);
		~Example();

		//getter and setter for property
		void setPriority(Priority priority);
    	Priority priority() const;

	signals:
	void mySignal();
	public slots:
	void mySlot();

	};
}
#endif