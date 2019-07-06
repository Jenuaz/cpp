// 	== <--- comparison allow address comparisons
// same value but different addresess will return 
// false.

#include <iostream>

class Sample 
{
	public:
		Sample(int v);
		~Sample(void);

		int	getFoo(void) const;
		int compare(Sample *other) const;
	private:
		int _foo;
};

Sample::Sample(int v)
{
	this->_foo = v;
	return;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

int	Sample::getFoo(void) const
{
	return (this->_foo);
}

int	Sample::compare(Sample *other) const
{
	if (this->_foo < other->getFoo())
		return (-1);
	else if (this->_foo > other->getFoo())
		return 1;
	return 0;
}

int		main(void)
{
	Sample	a(42);
	Sample	b(42);

	if (a.compare(&b) > 0)
		std::cout << "A more then B" << std::endl;
	else if (a.compare(&b) < 0)
		std::cout << "B more then A" << std::endl;
	else 
		std::cout << "They are equal" << std:: endl;
	
	if (&a == &b)
		std::cout << "Phisical a equal b" << std::endl;
	else
		std::cout << "Phisical a NOT equal b" << std::endl;

	if (&a == &a)
		std::cout << "Phisical a equal a" << std::endl;
	else
		std::cout << "Phisical a NOT equal a" << std::endl;

	if (a.compare(&a) == 0)
		std::cout << "a equal a structurally" << std::endl;
	else
		std::cout << "a NOT equal a structurally" << std::endl;

	if (a.compare(&b) == 0)
		std::cout << "a equal b structurally" << std::endl;
	else
		std::cout << "a NOT equal b structurally" << std::endl;


	return 0;
}
