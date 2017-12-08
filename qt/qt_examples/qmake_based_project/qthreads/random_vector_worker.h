#ifndef RANDOM_VECTOR_WORKER_H
#define RANDOM_VECTOR_WORKER_H
#include <QObject>

//class responsable to generate random number in a vector

class random_vector_worker : public QObject
{
    Q_OBJECT
public:
    random_vector_worker(QObject * parent = 0);

    public slots:
        void inputHandler(const QString & input_string);
};

#endif // RANDOM_VECTOR_WORKER_H
