1.-Definicion
	There are five categories of iterators, 
	Every Containner have a iterator and a const_iterator
	(c++11) cbegin() and cend() are const iterator . these are read only iterator

2.-Tipos de iteradores
	1.-Randon Access Iterator
		Vector-Deque-Array

	2.- Bidireccional iterators
		Biderecciontal iterator is an FowardIterator that can moved in both directions
		list -set/multiset- map/multimap

	3.- Foward Iterators
		foward_list
		Only go foward

	3.1 -Unorderer_containner, at least "Foward iterator", but it can provide a bidirectional iterator
	4.-Input iterator
		Read (cannot write)and process values while iterating foward
		int x = *iterator;
		Only can move foward

	5.-Ouput iterator

		Writting value while iterating foward
		You can write but cannot read
		Only can move foward
		*iterator = 100;

3.-Utilities:

	1.-std::advance(iterator, 5);//equivalent to iterator + 5 
		these method is convinient for all other iterator
	2.-std::distance(iterator, iterator_two); //get the distance between two iterator (convinience to RAI)

4.- Iterator Adaptor (Predefinned Iterator)
	- An special Power Iterator
	1.- Stream Iterator
	2.- Insert Iterator
	3.- Reverse Iterator
	4.- move iterator (c++11)

4.-Commom errors
4.-definir tu propio iterador


links:
http://www.geeksforgeeks.org/bidirectional-iterators-in-cpp/
https://www.cs.northwestern.edu/~riesbeck/programming/c++/stl-iterator-define.html