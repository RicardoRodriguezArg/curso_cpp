/*
STL
mutating algorithm
merge/partition
merge sort two containers into a single container.
It is defined in header “algorithm“. It is implemented in two ways.

*/

#include <algorithm>
#include <vector>
#include <cinttypes>
#include <iostream>
#include <string>
#include <iterator>

template<typename Containner>
void print_vector(const Containner & containner)
{
	//order by last_name > name > middle
	for(auto iterator = std::begin(containner); iterator!= std::end(containner); ++iterator)
	{
		std::cout << (*iterator)<<"\n";
	}	
}


int main()
{

	 // initializing 1st container
    std::vector<int> arr1 = { 1, 4, 6, 3, 2 };
 
    // initializing 2nd container
    std::vector<int> arr2 = { 6, 2, 5, 7, 1 };
 
    // declaring resultant container
    //WARNING if the size of the resulting vector is not equal size array
    //if using default iterator!!!
    std::vector<int> result_vector;
 
    // sorting initial containers
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
 
    // using merge() to merge the initial containers
    //std::merge(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), std::begin(result_vector));
    std::merge(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), std::back_inserter(result_vector));
 
    // printing the resultant merged container
    std::cout << "The container after merging initial containers is : ";

	print_vector(result_vector);
	std::cout<<"\n";

	//====================================
    // Initializing vector
    std::cout<<"Partition"<<std::endl;
    std::vector<int> partition_vector = { 2, 1, 5, 6, 8, 7 };
     
    // Checking if vector is partitioned 
    // using is_partitioned()
    std::is_partitioned(partition_vector.begin(), partition_vector.end(), [](int x)
    {
        return x%2==0;
         
    })?
     
    std::cout << "Vector is partitioned":
    std::cout << "Vector is not partitioned";
    std::cout << std::endl;
     
    // partitioning vector using partition()
    std::partition(partition_vector.begin(), partition_vector.end(), [](int x)
    {
        return x%2==0;
         
    });
     
    // Checking if vector is partitioned 
    // using is_partitioned()
    std::is_partitioned(partition_vector.begin(), partition_vector.end(), [](int x)
    {
        return x%2==0;
         
    })?
     
    std::cout << "Now, vector is partitioned after partition operation":
    std::cout << "Vector is still not partitioned after partition operation";
    std::cout << std::endl;
     
    // Displaying partitioned Vector
    std::cout << "The partitioned vector is : ";
    print_vector(partition_vector);
 
	return 0;
}