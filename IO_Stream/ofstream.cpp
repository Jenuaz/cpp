#include <iostream>
#include <fstream>
int		main(void)
{
	std::ofstream	test_file;
	
	test_file.open ("example.txt");
	test_file << "Test input.\n";
	test_file.close();
	return (0);
}
