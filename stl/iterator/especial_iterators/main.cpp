/**
STL Overview
random access iterator
*/

#include <iterator>
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
int main()
{
	//=======================================
	//		INSERT ITERATOR
	//=======================================
	std::vector<int> vector_one {1,2,3,4,5};
	std::vector<int> vector_two {10, 11, 12, 13};
	//Select where to insert value
	std::vector<int>::iterator iterator = std::find(std::begin(vector_two), std::end(vector_two), 11);
	//Insert Iterator
	std::insert_iterator<std::vector<int>> insert_iterator(vector_two, iterator);
	std::copy( std::begin(vector_one), std::end(vector_one)//source
		, insert_iterator//target
		);
	//10 1 2 3 4 5 11 12 13
	for (auto it = std::begin(vector_two); it!= std::end(vector_two); ++it)
	{
		std::cout<<*it<<" ";
	}
	std::cout<<"\n";
	//=======================================
	//		Stream Iterator
	//=======================================
	std::vector<std::string> vector_four{"1","2","3","4","5"};
	//this line show a defaulft constructor of istream iterator and it is used to represent end iterator
	//std::istream<std::string>()
	
	//std::copy(std::istream_iterator<std::string>(std::cin), std::istream_iterator<std::string>(), std::back_inserter(vector_four));
	std::cout<<"Stream Iterator"<<std::endl;
	std::copy(vector_four.begin(), vector_four.end(), std::ostream_iterator<std::string>(std::cout, " "));
	std::cout<<"\n";
	
	std::cout<<"Reverse iterator"<<std::endl;
	std::reverse_iterator<std::vector<int>::iterator> reverse_iterator;	
	//reverse iterator offer methods
	//1.- rbegin()
	//2.- rend()

	for(reverse_iterator = vector_two.rbegin(); reverse_iterator != vector_two.rend();++reverse_iterator)
	{
		std::cout<<*reverse_iterator<<" ";
	}
			std::cout<<std::endl;
	return 0;
}