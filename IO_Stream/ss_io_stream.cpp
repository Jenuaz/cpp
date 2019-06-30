#include <sstream>
#include <iostream>
#include <stdexcept>
using namespace std;

//stringstream - allow to assign IO with string in memory.
//everything what added to that stream adds to and of the 
//string.

int	main(void)
{
	int			 id = 10;
	stringstream ss;
	std::string data1 = "Info";
	std::string data2 = "Stored";
	//example of converting type from stirng to int
	ss 										\
		<< "Operation with id = "			\
	   	<< id								\
	   	<< " failed, because data1 (" 		\
	   	<< data1							\
	   	<< ") is incompatible with data2 (" \
		<< data2							\
	   	<< ")";
	//cerr - output to indicate that error was meet;
	//cerr have no buffer it used to immediatly show 
	//an error messege.
    std::cerr << ss.str();
	//log - output with buffer. Error messege at the
	//beginning puts in to buffer and saves there 
	//until buffer won't filled fully.
	std::cout << endl;
	std::clog << ss.str();
	std::cout << std::endl;
	ss 										\
		<< "Operation with id = "			\
	   	<< id								\
	   	<< " failed, because data1 (" 		\
	   	<< data1							\
	   	<< ") is incompatible with data2 (" \
		<< data2							\
	   	<< ")";
    throw std::runtime_error(ss.str());
	return (0);	
}
