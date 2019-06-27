#include <iostream>
#include <string>
#include <algorithm>

//Here we got an issue when we have two print functions
//so they could conflict with each other. But the not if
//we will put them in separates namestaces. Also it's 
//a goot to notice that file is also a root namespace
//so we can identify the global const variable like 
//int gloabalNamespaceVariable shown below.

int			globalNamespaceVariable = 8;

//In same space can't be same names of functions/classes/e.t.c. 

namespace spaceOne
{
	void	print(const std::string &text)
	{
		std::cout << text << std::endl;
	}
	namespace subSpaceOne
	{
		void print(const std::string &text)
		{
			std::cout << text << std::endl;
		}
	}
}

namespace spaceTwo
{
	void	print(const char* text)
	{
		std::string tmp = text;
		std::reverse(tmp.begin(), tmp.end());
		std::cout << tmp << std::endl;
	}
}

//namespace A::B::C {...} equivalent to
//namespace A { namespace B { namespace C { } } }

int		main(void)
{
	spaceOne::print("Hello");
	spaceTwo::print("Reverse");
	spaceOne::subSpaceOne::print("Bye");
	return (0);
}

//Read: https://en.cppreference.com/w/cpp/language/namespace
