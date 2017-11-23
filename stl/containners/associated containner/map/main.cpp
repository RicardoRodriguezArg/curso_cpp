/**
STL Overview
map
*/

#include <map>
#include <iterator>
#include <iostream>
int main()
{
	//Tipos de inicializacion de std::list
	using containnerType = std::map<char,int>;
	
	//default Constructor
	containnerType map;
	//initialized list
	containnerType map_two={
							std::make_pair('a',19),
							std::make_pair('b',	129),
							std::make_pair('c',3),
							std::make_pair('d',	4),
							
						};

	//insertion method
	map.insert(std::make_pair('f',10));
	//iterator hint
	containnerType::const_iterator 	iterator = std::begin(map);
	map.insert(iterator, std::pair<char,int>('g',123));
	for (;iterator!=std::end(map);++iterator)
	{
		std::cout<<"Map content: "<<(*iterator).second<<std::endl;
	}
	return 0;
}
