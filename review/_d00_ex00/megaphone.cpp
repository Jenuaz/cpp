#include <iostream>
#include <string>
#include <algorithm>
// asd
int		main(int ac, char **av)
{
	if (ac < 2 && std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n")
		return (0);
	for (int iter = 1; iter < ac; iter++)
	{
		std::string tmp = (std::string)av[iter];
		std::transform(tmp.begin(), tmp.end(), tmp.begin(), ::toupper); 
		std::cout << tmp ;
	}
	std::cout << std::endl;
	return (0);
}
