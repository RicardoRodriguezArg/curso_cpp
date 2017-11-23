1.- tipos de containner
  1.-Sequence Containner(Arrays and linked list)
    1.-vector
		1.- Definition 
			dynamically allocated contiguos array in heap
			Grow at the end of the vector
			(*) Graphics
		2.- Operations
			Code
		3.- Common Api
			(*)Slide
		4.- Properties or Caractheristics
			1.- Fast Insert/Remove at the end of vector: o(1)
			2.- Slow Insert/Remove at the beginning or the middle of the vector: o(n)
			3.- Slow Search: o(n);
			(*) Graphics
    2.-deque
		1.- Definition
			Does not provide allocated contiguos data in heap
			Grow at the end of the vector and at the beginnig
			(*) Graphics
		3.- Common Api
			1.-Push Back
			2.-Push Front
		2.- Properties or Caractheristics
			1.- Fast Insert/Remove at the beginning and the end : o(1)
			2.- Slow Insert/Remove the middle : o(n)
			3.- Slow Search: o(n);
			(*) Graphics
    3.-list
		1.- Definition
			It is a double link list 
			(*) Graphics

		2.- Common Api
			1.-Push Back
			2.-Push Front
			3.-Insert vs push_back and push_front

		3.- Properties or Caractheristics
			1.- Fast insert and remove at any place of the list
			2.- Slow search o(n)
			3.- no random access operator (operator [] not definned)
			4.-Killing Function *splice*

    4.-foward_list (added in c++11)
	    1.- Definition
				It is a singly linked list 
				It only can be tranversed from beginning to end
				Contains a single pointer, heading to the next element
				The storage allocatted for each list element have the same size

				(*) Graphics
		2.- Common Api
			1.- No .back() method defined
			2.- insert have change to ".insert_after"
			3.- have to call ".before_after("
			
		3.- Properties or Caractheristics
			1.- o(1) insert  at any position
			2.-sort o(n log2(n))
			3.-search o(n)
    5.-array
    	1.-Definition
    		Thin layer around a classic array, but it implement the basic interface
    	
    	2.- Common Api 
    		begin()
    		end()
    		size()
    		swap()
    	
    	3.- Properties or Caractheristics

  2.-Associate containner(binary tree)
  	 Associated containner are alway sorted, by some criteria.
  	 Usually implemented as Binary tree
  	 Because containner are always sorted, no need method for this methods
  	 	1.-push_back
  	 	2.-push_front

     1.-set
     	1.-Definition: 
     		Set have not duplicated items
     	3.- Properties or Caractheristics
     		1.-insertion in set are logaritm time
     		2.-Search take o(log(n))

     2.-multiset
     	1.-MultiSet: 
     		1.-Allow duplicated items
     		2.-Values cannot be modified (Read Only)
     	3.- Properties or Caractheristics
     		1-Fast Search o(log(n))
     		2.-Tranversing is slow (comparing with vector and deque) cache-locallity
     		3.-No random access operator definned (operator [])
     		4.- iterator are constant , cannot assing values to its.
     3.- map
     	1.-Definition:
     		Tree with key, value tuples
     	3.- Properties or Caractheristics
     		1-Fast Search o(log(n))

     4.-multimap
     	1.-Definition
     		It is like a map, but allows duplicated keys
     		it does not allow modified key

  3.-Unorderer Containner (hash table)
  	1.-Definition:
  		c++11 introduces unorder associative containners, the order of the elements are not definned and it may change over the time.
  		Internally an unorderer containner, is a hash table, which is an array of linked list.
  		The array is also called "array of buckets", an the linked list is called "Entries"
  		Each element is used by the Hash Function to calculate a value, an based on that value, the elements is inserted on the array of buckets. It you have a fast hash function, finding an element on the unorderer structure is very fast, take constant time. Fastest among all the containner.
  		Graphics
  		----------------------
  		Performance may degrade because of "Hash collision", it means many entry on a single bucket
  		o(1) -> o(n)
  		Properties 
  		Fastest search and insert o(1) at any place
  		Associative containner takes o(log(n)) garanty
  		vector, deque takes o(n)
  		List take o(1) to insert o(n) to search
  		unorderer_map/unorderer_multiset key cannot be changed
  		unorderer_set/unorderer_multiset element cannot be changed
  		-----------------------
  		operator [] has no range check and allow to insert a element 
  		operator "at" has range check
  		------------------------
  		insert function cannot modified a existence key
  		------------------------
  		multimap/unorderer_multimap does not provide operator []

    2.-unorderer_set
    3.-multiset
    	allows duplicated key
    4.-unordered_map
    	pair of key and values
    5.-unorderer_multimap
    	allows duplicated key

4.- Containner Adaptor
	-Provide restricted interface to meet special needs
	-Implement with fundamental containner class
	1.- Stack -- LIFO -- push , pop, top
	2.- queue -- FIFO -- push, front , front, back
	3.- priority_queue -- First item alway have the greater priority   -- Push, pop, top



//****************************************
//	Another way to categorinz containners
//****************************************
1.- Array based containner, vector , deque
	This containner invalidate Native Pointers, iterator, reference
	Example:
	""
	std::vector<int> vec={1,2,3};
	int * ptr = &vec[2]; //ptr point to "2"
	vec.insert(vec.begin(), 0);
	std::cout<< "Value of Ptr : "<<*ptr<<std::endl; //THIS IS UNDEFINNED BEHAVIOR
	""

2.- Node Based containner, list + associative containner + unorderer containner
	This containner type does not have this problems, the node wil continuosly 
	owning ptr to the data after removing