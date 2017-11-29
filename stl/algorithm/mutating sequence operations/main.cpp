/*
STL
mutating algorithm
transform/copy
*/

#include <algorithm>
#include <vector>
#include <cinttypes>
#include <iostream>
#include <string>
#include <iterator>
int main()
{
	std::vector<std::string> vector{"I","LIKE","STL"};
	//First example
	//create a vector of hash values of the input sequence containner
	//1.-Need output containner
	std::vector<int> output_containner;
	//transform take a containner with a type different that the output containner
	std::transform(std::begin(vector),std::end(vector),std::back_inserter(output_containner),std::hash<std::string>());
	std::copy(output_containner.begin(), output_containner.end(), std::ostream_iterator<int>(std::cout, " "));


	std::cout<<"\n";
	return 0;
}