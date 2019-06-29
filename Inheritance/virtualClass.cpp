#include <iostream>


//Class A has function named display.
//Class A is base for two other classes.
class	A
{
	public:
			std::string _name;
			void		display(void);
			void		setName(std::string name);
			std::string getName(void);
			void		setPinCode(std::string code);
			std::string getPinCode(void);
	private:
			std::string _pinCode;
};


//By adding keyword virtual the compiler
//will decide class authomaticaly 
class	B : virtual public A
{
	
};

class	C :  virtual public A
{

};

class	D : public B, public C
{
	
};

void	A::display(void)
{
	std::cout << this->_name << std::endl;
}

void		A::setName(std::string name)
{
	this->_name = name;
	return ;
}

void	A::setPinCode(std::string code)
{
	this->_pinCode = code;
	return ;
}

std::string A::getPinCode(void)
{
	return (this->_pinCode);
}

std::string	A::getName(void)
{
	return (this->_name);
}

int main(void)
{
	A	objA;
	D	objD;
	
	objD.setName("Class A");
	std::cout << objD.getName() << std::endl;
	objD.display();
	objA.setPinCode("a1b2v3g4d5");
	std::cout << objA.getPinCode() << std::endl;
	return (0);
}
