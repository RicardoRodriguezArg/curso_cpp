#ifndef WIDGET_EXAMPLE_H
#define WIDGET_EXAMPLE_H
#include <QWidget>

namespace QTCourse
{
	class WidgetExample : public QWidget
	{
		Q_OBJECT

		public:
		WidgetExample(QWidget * parent = 0);
		protected:
			void closeEvent(QCloseEvent * event);

		private:
			bool shouldBeClosed();

	};
}
#endif