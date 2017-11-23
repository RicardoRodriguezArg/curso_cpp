/**
STL Overview
array
*/

#include <iterator>
#include <iostream>
#include <array>
int main()
{
	
	
	//default Constructor
	std::array<int,4> array ={1,2,3,4};
	//initialized list
	

	//common method used
	std::vector<int> vector{1,2,3,4};
	//find an element
	auto foward_iterator = list.before_begin();

	for (auto iterator = std::begin(vector);iterator != std::end(vector);++iterator)
	{
		foward_iterator = list.insert_after(foward_iterator, *iterator);
	}

	return 0;
}