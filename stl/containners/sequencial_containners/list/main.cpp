/**
STL Overview
List
*/
#include <algorithm>
#include <string>
#include <list>
#include <iterator>
#include <iostream>
int main()
{
	//Tipos de inicializacion de std::list
	//Initialization list
	
	//default Constructor
	std::list<int> list;
	//initialized list
	std::list<int> list_two{1,2,3,4};

	//common method used
	list.push_front(0); //{0,1,2,3,4};
	list.push_back(5);  //{1,2,3,4,5};
	//find an element
	auto iterator = std::find(std::begin(list),std::end(list),4);
	//check find result operatiion
	if (iterator != std::end(list))
	{
		list.insert(iterator, 22); //insertion operation is o(1) faster than vector and deque
	}
	//remove recently inserted value
	//o(1)
	list.remove(*iterator);
	//list consume more memory than vector
	//search is much more slower than vector search because of cache locallyti
	//SPLICE
	std::list<int> listTwo{1,3,4,5,6,7};
	//This operation take constant tiem o(1)
	list.splice(std::end(list),listTwo,std::begin(listTwo),std::end(listTwo));


	
	return 0;
}
