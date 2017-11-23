/**
STL Overview
Deque
*/
#include <deque>
#include <iterator>
#include <iostream>
int main()
{
	//Tipos de inicializacion de std::deque
	std::deque<int> deque{1,4,5,6,7};
	deque.push_front(2);					//2,1,4,5,6,7
	deque.push_back(8);					//2,1,4,5,6,7,8
	//deque share similar interface with vector
	std::cout<<"Danger -->"<<deque[88]<<"\n";
	return 0;
}
