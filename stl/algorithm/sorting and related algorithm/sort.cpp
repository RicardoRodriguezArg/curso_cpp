/*
STL
mutating algorithm
sort / stable_sort
So by default, sort() sorts an array in ascending order.
run in  O(n log n) --> both

For stable_sort() it is O(n*log^2(n)) if additional memory linearly proportional to length is not available.
If its available then O(n*log(n)).

Stable sorts preserve the physical order of semantically equivalent values.
links http://www.geeksforgeeks.org/stable_sort-c-stl/
*/

#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
#include <iterator>

struct Data
{
	std::string name;
	std::string second_name;
	std::string last_name;

};

template<typename Containner>
void print_vector(const Containner & containner)
{
	//order by last_name > name > middle
	for(auto iterator = std::begin(containner); iterator!= std::end(containner); ++iterator)
	{
		std::cout << (*iterator).name<<" \t"<<(*iterator).second_name<<" \t"<<(*iterator).last_name<<" \n";
	}	
}

int main()
{
	std::vector<Data> vector{
									{"Joe","ed", "STL"},
									{"john","sack", "STL1"},
									{"new","all", "boys"}

									};
	//order by last_name > name > middle
	print_vector(vector);
	
	
	std::sort(std::begin(vector), std::end(vector), [](const Data & a,const Data & b  )
														{
															return a.second_name < b.second_name;
														}
														);
	std::cout<<"After Sorting by second name\n";
	print_vector(vector);
	std::vector<Data> vector_two{
									{"Joe","ed", "STL"},
									{"john","sack", "STL1"},
									{"new","all", "boys"},
									{"new_two","all", "boy_two"}
								};

	std::stable_sort(std::begin(vector_two), std::end(vector_two), [](const Data & a,const Data & b)
																	{
																		return a.second_name < b.second_name;				
																	}
					);
	std::cout<<"\n Stable Sort After Sorting by second name\n";			
	print_vector(vector_two);
	
	


	
	return 0;
}