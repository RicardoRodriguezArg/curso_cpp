/**
STL Overview
random access iterator
*/

#include <iterator>
#include <iostream>
#include <vector>
int main()
{
	
	
	//default Constructor
	//vector/array and deque provides random iterator
	std::vector<int> vector = {1,2,3,4,1,2,3,4};

	std::vector<int>::iterator iterator= std::begin(vector);
	//advance iterator by 2
	iterator = iterator + 2; //point to "3"
	std::cout<<"Value of iterator : "<<*iterator<<std::endl;
	iterator = iterator + 2; //point to "1"
	std::cout<<"Value of iterator : "<<*iterator<<std::endl;
	--iterator;//point to "4"
	std::cout<<"Value of iterator : "<<*iterator<<std::endl;
	

	return 0;
}