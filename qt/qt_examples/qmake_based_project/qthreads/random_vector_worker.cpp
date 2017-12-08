#include "random_vector_worker.h"
#include <QThread>
#include <QVector>
#include <QDateTime>
#include <QtDebug>

random_vector_worker::random_vector_worker(QObject *parent):QObject(parent)
{

}

void random_vector_worker::inputHandler(const QString & input)
{
    qDebug() << "Random Number Generator (Thread ID)"<<QThread::currentThreadId();
    const int size = input.toInt();
    QVector<int> vector;
    vector.resize(size);
    qsrand(QDateTime::currentMSecsSinceEpoch());
    for(int & value : vector)
    {
        value = qrand();
    }
    qDebug()<< "Process Finish";

}
