// In C++ you want to allocate objects based on object
// because it doesn't call the constructor of your object.
// In reality we use new and delete.

#include <iostream>
#include <string>

class Student
{
	public:
		Student(void);
		Student(std::string login);
		~Student(void);

		std::string getLogin(void) const;
	private:
		std::string _login;
};

Student::Student(void)
{
	this->_login = "New one";
	return ;
}

Student::Student(std::string login) : _login(login)
{
	std::cout 						\
		<< this->_login				\
	    <<	" was born."			\
		<<							\
	std::endl;	
	return ;
}

Student::~Student(void)
{
	std::cout						\
		<< "Destructor was called" 	\
		<<							\
	std::endl;
}

std::string Student::getLogin(void) const
{
	return this->_login;
}

int	main(void)
{
	int			el;
	int			iter;
	Student		bob = Student("bober"); 		// Is a temporary object. Allocated on a Stack - as statick varialbe
	Student		*jimmy = new Student("jimmy");	// Allocation in dynamic way. Allocated on a Heap.
	Student		*arrayStudent = new Student[42];// New array doesn't take any parameters.
	
	el = (int) (sizeof(arrayStudent) / sizeof(Student));
	iter = 0;


	std::cout << sizeof(arrayStudent) << std::endl;
	std::cout << sizeof(arrayStudent[0]) << std::endl;
	std::cout << sizeof(Student) << std::endl;
	std::cout << el << std::endl;
	while (iter < el)
		std::cout << arrayStudent[iter++].getLogin() << std::endl;
	delete	jimmy; 								// jimmy pointer destroys the allocated objcet.
	delete [] arrayStudent;						// Deallocation.
	return (0); 								// bob is destroed by finishing the programm
}
