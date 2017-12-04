#include <iostream>
#include "custom_signal.h"

QtCourse::MyClass::MyClass(const std::string &ClassID):myValue{0},
    class_id(ClassID)
{

}

void QtCourse::MyClass::mySlot(int value)
{
    if(value!=myValue)
    {
        std::cout<<"Managing Signals on Class: "<<class_id<<"\n";
        std::cout<<"Old Value: "<<myValue<<"\n";
        myValue=value;
        std::cout<<"New Value: "<<myValue<<"\n";
        emit valueChanged(value);
    }

}

