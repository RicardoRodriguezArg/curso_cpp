Clases of Stl algorithm
1.-STL Algorithm
A prediffened set of solutions to specifics problems
	1.-Provided for free (comes with the compiler)
	2.-Operates on sequences or sequeced containner 
	3.-Declarative Sintax (no raw loop they are wrappers)
	4.-Operates on all elements of the sequence and performe operation on 
		every items of it
	5.-Design by expert

2.-Why Use Algorithm ?
	1.-Often more efficient than handwritten algotrithm
	2.-Cleaner and with more abstraction than a "raw loop"
	3.-Prevent side effect or leak code
	4.- less likely to fail under non-obvious situations
	5.-integrate better with sourrinding code

3.-What do we have in STL ?
	1.- Non modifying sequence operations (25.2)
		1.-Do not modified input secuence
		2.-Do not emit a result sequence
		3.-algorithm will not cause a side effect on input sequence
		4.-Function Object (Functors) may cause side effect by modifying itself, the input sequence (e.g for_each) or the sourrended code

		List of non-modifying sequence

		                                LIST OF FUNCTIONS

			1.-all_of                      8.- adjacent_find
			2.-any_of                      9.- count
			3.-none_of                          count_if
			4.-for_each                    10.-mismathc
			5.-find                        11.-equal
				find_if, find_if_not       12.-is_permutation
			6.-find_end                    13.-search
			7.-find_first_off                  search_n


	2.- mutating sequences operations (25.3)
		1.-Do not modify input sequence except when output overlap input sequence (e.g transform)

	3.- Sorting and related operations (25.4)
		1.-Mix of non-modifying operations and mutating operations
		2.-mutating operation modify sequences in place (std::make_heap, std::sort)
			or emit an output to output sequence( std::merge, std::partial_sort_copy)
		3.-Default compare operation
		4.-Order of equivalent items are implement definned
		5.-sort in place

		                                LIST OF FUNCTIONS

			1.-SORT                                 6.-HEAP OPERATION
				1.- stable_sort                         1.-push_heap
				2.- partial_sort                       2.-pop_heap
				3.- partial_sort_copy                  3.-make_heap
				4.- sort
			2.-NTH_ELEMENT                             4.-sort_heap
			3.-BYNARY_SEARCH                        7.-MINIMUN AND MAXIMUM
				1.-lowe_bound                          1.-min
				2.-upper_bound                         2.-max
				3.-equal_range                         3.-mim_element
				4.-binary_seach                        4.-minmax_element
			4.-MERGE                                8.-LEXICOGRAPHICAL COMPARASITIONS
				1.- merge                              1.- lexicographical_compare
				2.- inplace_merge                   9.-PERMUTATION GENERATOR
			5.-SET OPERATION ON SORTED STRUCTURE       1.- next_permutation
				1.- include                            2.- previous_permutation
				2.- set_union
				3.- set_intersection
				4.- set_difference
				5.- set_symetric_difference
		
	4.- General C algorithm (25.5)
	5.- General numeric operations (25.6)

-Mostly loops
implementing std::algorithm make your code less buggy , more efficient and more clean

Note 1:
algorithm alway process elements in containner in half open way
--> ( ]
Note 2:
std::copy for vector, destination_vector need at least space for n elements
/ n = size(source_vector)
UB is the result is this condition is not reached
Note 3:
Tradeoff safe vs efficient
safe (std::back_inserter)
safe and efficient (std::vector<T>::insert())
Note 4:
algorithm work also with native array
