/**
STL Overview
unorderer set
*/
#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>

int main()
{
	//Tipos de inicializacion de std::list
	using containnerType = std::unordered_set<std::string>;
	
	//default Constructor
	std::unordered_set<std::string> myset;
	//initializer list
	std::unordered_set<std::string> myset_two={"office", "house", "gym", "parking", "highway"};

	//find operation o(1)
	containnerType::const_iterator iterator = myset_two.find("office");
	//important check avoid UB 
	if(iterator != std::end(myset_two))
	{
		std::cout<<*iterator<<std::endl;
	}
	//this method recreate the hash table, so elements change it position on the table
  	myset.rehash(12);
	//insert operation take o(1)
	myset.insert("Globant");
	myset.insert("office");
  	myset.insert("house");
  	myset.insert("gym");
  	myset.insert("parking");
  	myset.insert("highway");

  	//Hash specific API
  	std::cout << "current bucket_count: " << myset.bucket_count() << std::endl;
  	//Total number of element and total number of bucket
	std::cout << "load Factor: " << myset.load_factor() << std::endl;
	const std::string value_to_search("gym");
	std::cout << "Value: " << value_to_search << "" <<myset.bucket(value_to_search) << std::endl;
	std::cout << "Total Bucket: " << myset.bucket_count() << std::endl;
	//Interaction with other sequencial containners
	std::vector<std::string> vector(myset.begin(), myset.end());


	return 0;
}