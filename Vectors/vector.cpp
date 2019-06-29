#include <vector>
#include <iostream>
#include <string>

//Vector is an replacement for standard dynamic array
//which memory allocated by operator "new".

//Developers of C++ language recommends to use vector
//instead of manual memory allocation for array.

//Main functions to use with vectors are:
//   - push_back(the element here) to add new element to end of the 
//vector;
//	 - pop_back() to delete the last element of vectors;
//	 - clear() to delete all elements of vector;
//	 - empty() to check is vector is empty;
//	 - size() to get size of the vector - count elements.

int		main(void)
{
	//Initializaion of the vector
	//Dynamic vector without setting up an size of
	//the vector;
	std::vector<std::string> students_first_names;
	//Initialization of the vector
	//with predefined size of it
	std::vector<int> v_zero(10); // ----> vector 10 elements type int;
	//Initialization of the vector 
	//wihtout predefined size
	std::vector<int> v_one; // ----> vector [] elements type int;
	//Initialization of the vector 
	//with predefined size and auto filled values
	std::vector<int> v_two(10, 0); // ----> vector 10 elements type int
	//						   ^____------> all elements have value 0;
	
}
