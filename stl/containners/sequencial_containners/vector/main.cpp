/**
STL Overview
Vector
*/
#include <vector>
#include <iterator>
#include <iostream>
int main()
{
	//Tipos de inicializacion de std::vector
	//Initialization list
	//std::vector<int> vector{2,3,4,5,6};

	//default Constructor
	std::vector<int> vector; //vector.size() == 0
	vector.push_back(2);	 //vector.size() == 1
	//vecor.emplace_back(3)
	vector.push_back(3);	//vector.size() == 2
	vector.push_back(4);	//vector.size() == 3
	vector.push_back(5);	//vector.size() == 4
	vector.push_back(6);	//vector.size() == 5

	//tipo de declaraciones de iterados e equivalencias
	std::vector<int>::iterator it_begin = vector.begin();
	std::vector<int>::iterator it_end = vector.end();
	std::vector<int>::const_iterator const_it_end = vector.end();
	std::vector<int>::const_iterator const_it_begin = vector.cbegin();
	const auto auto_iterator_begin = vector.begin();
	const auto auto_iterator_end = std::end(vector);

	// Operaciones especificas
	std::cout<<"Danger!!!! vector[0]" << vector[14] <<"\n"; //DANGER !! no range check
	std::cout<<"vector[0]" << vector.at(4) <<"\n"; //Save, emit exception (range_exception)

	//Tranversing vector
	//iterators (Forma Generica)
	for (auto iterator = vector.begin();iterator != std::end(vector);++iterator)
	{
		std::cout<<"value: "<<*const_it_begin<<std::endl;	
	}

	//randon access
	for (int index = 0; index < vector.size() ;++index)
	{
		std::cout<<"(Randon Access) Value: "<<vector[index]<<std::endl;	
	}

	//For Range Loop (c++11)
	//for (const auto value: vector)
	for (const int value: vector)
	{
		std::cout<<"(For Range) Value: "<< value <<std::endl;	
	}
	//===========================================================
	//			Common
	//===========================================================
	//Check if empty
	vector.empty();
	//get vector size
	vector.size();
	//Copy Constructor
	std::vector<int> vector2(vector);
	//Remove all elements in vector, size = 0
	vector.clear();
	//swap - vector2 became empty and vector now have 5 values 
        vector.swap(vector2);
	std::cout<<"Vector size: "<<vector.size()<<"\n";
	std::cout<<"Vector2 size: "<<vector2.size()<<"\n";
	 
	
	return 0;
}
