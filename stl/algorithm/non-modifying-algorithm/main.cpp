/*
STL
Non mutating algorithm
For_each
*/

#include <algorithm>
#include <vector>
#include <cinttypes>
#include <iostream>
#include <string>
/*
*/
void print_string(const std::string & string)
{
	std::cout<<string<<"\n";
}

template<typename Type>
void print_containner_element(const Type & element)
{
	std::cout<<element<<" ";
}

template<class Containner>
void generic_string_printer(const Containner & containner)
{
	std::for_each(std::begin(containner), std::end(containner),print_containner_element<typename Containner::value_type>);
}

int main()
{
	std::vector<std::string> vector{"I","LIKE","STL"};
	//First example
	std::for_each(std::begin(vector), std::end(vector),print_string);
	//Call from generic containner type
	std::vector<std::string> vector_generic{"I","LIKE","STL"};
	generic_string_printer(vector_generic);
	std::cout<<"\n";
	return 0;
}