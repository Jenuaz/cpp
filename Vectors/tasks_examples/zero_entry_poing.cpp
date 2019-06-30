#include <vector>
#include <string>
#include <iostream>

void		outPutVector(std::vector<int> &vector)
{
	int 	iter;

	iter = 0;
	while (iter < vector.size())
		std::cout << vector[iter++] <<  std::endl;	
}

int			main(void)
{
	int		iter;
	
	iter = 0;
	std::vector<int> array_int;
	std::vector<int> array_int_one(10);

	//empty() - return true/false 1/0 if an 
	//array is empty or not.
	array_int_one.push_back(1);
	std::cout					\
	   	<< array_int_one.empty()	\
		<<						\
	std::endl;
	//push_back() - add new element to the
	//end of the array.
	array_int.push_back(8);
	array_int.push_back(10);
	//pop_back() - delete an last element from
	//array[vector called].
	array_int.pop_back();
	outPutVector(array_int);
	array_int.clear();
	std::cout << std::endl;
	outPutVector(array_int);
	std::cout << std::endl;
	outPutVector(array_int_one);
	return (0);
}
