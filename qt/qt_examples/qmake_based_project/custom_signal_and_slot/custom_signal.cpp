#include <iostream>
#include "custom_signal.h"

QtCourse::MyClass::MyClass():myValue(0)
{}

void QtCourse::MyClass::mySlot(int value)
{
    std::cout<<"Old Value: "<<myValue<<"\n";
    myValue=value;
    std::cout<<"New Value: "<<myValue<<"\n";
    emit valueChanged(value);
}

