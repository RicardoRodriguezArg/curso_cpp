/*
STL
Non mutating algorithm
any_off
*/

#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
#include <regex>
/*
std::find_if and std::find

std::find_if indicates that the search use a predicator

*/

//1.- Functor to search
template<typename Type>
struct Functor
{
	Functor(int age):age_(age)
	{}

	bool operator()(const Type & item) const
	{
		return item.get_age() == age_;
	}

private:
	int age_;
};

//2.- Class and defined operator==()
class Employee
{
public:
	Employee(const int age, std::string && name):age_(age),
												name_(name)
	{}

	bool operator==(const Employee & employ) const
	{
		bool are_age_same = employ.get_age() == this->get_age();
		bool are_name_same = employ.get_name() == this->get_name();
		return are_age_same & are_name_same;

	}

	int get_age() const
	{
		return age_;
	}

	std::string get_name() const
	{
		return name_;
	}
private:
	const int age_;
	const std::string name_;
};



int main()
{

	std::vector<Employee> employee_vector = {Employee(23,"tom"),
	Employee(24,"adam")
	};
	//Search by class std::find
	auto iterator= std::find(std::begin(employee_vector),std::end(employee_vector), Employee(23,"tom") );
	//search using a Predicator
	auto iterator_two= std::find_if(std::begin(employee_vector),std::end(employee_vector), Functor<Employee>(23) );
	//search by lambda
	auto iterator_three= std::find_if(std::begin(employee_vector),std::end(employee_vector), [](const Employee & item) -> bool
																							{
																								return item.get_age() == 23;
																							}
																							 );


	return 0;
}