#ifndef SIGNAL_IN_CUSTOM_CLASS
#define SIGNAL_IN_CUSTOM_CLASS

#include <QObject>
namespace QtCourse
{
	class MyClass : public QObject
	{
		Q_OBJECT
	public:
        MyClass(const std::string & ClassID);
    public slots:
		void mySlot(int);
    signals:
        void valueChanged(int);
	private:
        int myValue;
        const std::string class_id;
	};
}
#endif
