#ifndef INPUT_WORKER_H
#define INPUT_WORKER_H
#include <QObject>
#include <QTextStream>

namespace QtCourse{

class InputWorker : public QObject
{
    public:
        explicit InputWorker(QObject parent = 0);

    //add signal to manage
    signals:
        void inputAvailable(const QString & );

    public slots:
        void startWork();

    private:
        QTextStream input_stream;


};
}
#endif // INPUT_WORKER_H
