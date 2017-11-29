/*
STL
mutating algorithm
remove
It is defined in <algorithm> library.
It removes value from range.
Transforms the range [first,last) into a range with all the elements that compare equal to val removed,
and returns an iterator to the new end of that range.
1.- The function cannot alter the properties of the object containing the range of elements
 (i.e., it cannot alter the size of an array or a container).
2.-The relative order of the elements not removed is preserved, 
while the elements between the returned iterator and last are left in a valid but unspecified state.
3.-The function uses operator== to compare the individual elements to val.

remove_if
Transforms the range [first,last) 
into a range with all the elements for which pred returns true removed,
and returns an iterator to the new end of that range.


*/

#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
#include <iterator>

int main()
{
	std :: vector <int> output_containner { 10, 20, 30, 30, 20, 10, 10, 20};
	std::copy(output_containner.begin(), output_containner.end(), std::ostream_iterator<int>(std::cout, " "));

	std::vector<int>::iterator iterator = std::remove(output_containner.begin(), output_containner.end(), 20);
	std::copy(output_containner.begin(), output_containner.end(), std::ostream_iterator<int>(std::cout, " "));

	//remove_if
    std :: vector <int> vec2 { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	//First example
	


	std::cout<<"\n";
	return 0;
}