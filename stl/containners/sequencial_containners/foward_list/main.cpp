/**
STL Overview
Foward List
*/


#include <iterator>
#include <iostream>
#include <forward_list>
#include <vector>
int main()
{
	
	
	//default Constructor
	std::forward_list<int> list;
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
