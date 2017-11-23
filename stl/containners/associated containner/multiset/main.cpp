/**
STL Overview
MultiSet
*/

#include <set>
#include <iterator>
#include <iostream>
int main()
{
	//Tipos de inicializacion de std::list
	using containnerType = std::multiset<int>;
	
	//default Constructor
	containnerType set;
	//initialized list
	containnerType set_two{1,2,3,4};

	set.insert(1); //o(log(n))
	set.insert(2); //o(log(n))
	set.insert(3); //o(log(n))
	//method find return analisys
	std::pair<containnerType::iterator, bool> return_value = set_two.insert(4);
	//True if operation success
	//iterator to value
	if (return_value.second == false)
	{
		std::cout<<"No new value was inserted"<<std::endl;

	}
	auto iterator = set_two.find(4);
	//
	// Here insert use "iterator" as a hint to insertion operation, so 
	//the operation will take constant time o(1)
	//Because the use does not define the position to insert , but is definned by it value
	//
	set_two.insert(iterator, 22); //insertion operation take o(log(n))
	//erasing operations
	set_two.erase(iterator);
	
	return 0;
}
