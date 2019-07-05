#include <iostream>
using namespace std;
//Pointers to members allow to refer to nonstatic members of class objects.
//You can not use a pointer to member to point to a static class member 
//because the address of a static member is not associated with any particular
//object. To point to a static class member, you must use a normal pointer.
class		X
{
	public:
		int a;

		void f(int b);
};

void	X::f(int b)
{
	cout << "The balue of b is " << b << endl;
}

//To redice vomplex syntax, you can declare a typedef to be a pointer
//to member.

typedef int	X::*var_ptr;
typedef void (X::*func_ptr)(int);


int			main(void)
{
	int *ptr;
	//deckate pointer to data member
	int X::*ptiptr = &X::a;
	//declare a pointer to member function
	void (X::*ptiptf) (int) = &X::f;
	//create an object of class type X
	X xobject;
	xobject.*ptiptr = 10;
	(xobject.*ptiptf)(20);
	cout << "The value of " << xobject.a << endl; 

	//Declaration
	

	var_ptr var = &X::a;
	func_ptr func = &X::f;

	X xt_object;

	xt_object.a = 10;
	xt_object.*var = 5;

	cout << xt_object.a << endl;
	// The pointer to member operators .* and ->* 
	// are used to bind a pointer to a member of
	// a specific class object. Because the precedence
	// of () (function call operator) is higher than
	// .* and ->*, you must use parentheses to call
	// the function pointed to by ptf.
	return (0);
}
