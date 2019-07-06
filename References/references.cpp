#include <iostream>
#include <string>

void	byPtr(std::string *str)
{
	*str += " and ponies";
	return ;
}

void	byConstPtr(std::string const *str)
{
	std::cout					\
		<< *str					\
		<<						\
	std::endl;
}

void	byRef(std::string &str)
{
	str += " and harpy";
	return ;
}

void	byConstRef(std::string const &str)
{
	std::cout << str << std::endl;
}

int main(void)
{
	int 	n = 42;
	int		*pn = &n;	
	int&	refn = n;	// it's constant so you can't change his value.

	std::cout 			\
		<<	n			\
		<<				\
	std::endl;
	std::cout 			\
		<<	pn			\
		<<				\
	std::endl;
	n = 10;
	std::cout 			\
		<<	&refn		\
		<<				\
	std::endl;


	// Passing parameters by reference.
	std::string str = "I like butterflies";

	std::cout << str << std::endl;
	byPtr(&str);
	byConstPtr(&str);

	str = "i like otters";

	std::cout << str << std::endl;
	byRef(str);
	byConstRef(str);
	return (0);
}
