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
	2.- mutating sequences operations (25.3)
	3.- Sorting and related operations (25.4)
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
