#include <iostream>
using namespace std;

//throw -> handle or run
//try -> chance to try
//catch -> take 

int		main(void)
{
	setlocale(LC_ALL, "rus");
	
	int	n_one;
	int	n_two;
	int	var = 2;	//How much inputs waiting from cin

	while (var--)
	{
		cout << "Enter the value for n_one: ";
		cin >> n_one;
		cout << "Enter the value for n_two: ";
		cin >> n_two;
		//Program receive takes an order from programmer 
		//if value of specific variable in defined space
		//of code in try block will equal to zero in this 
		//case it need to generate exeption  throw; This 
		//exeption automatically will redirected to catch 
		//block in parameter from.
		cout << "n1 + n2 = " << n_one + n_two << endl;
		cout << "n1 / n2 = ";
		try
		{
			if (n_two == 0)
			{
				throw 123;
			}
			cout << n_one / n_two << endl;
		}	
		catch (int i)
		{
			cout << "Error # " << i << "you can't devide by zero" << endl;
		}
		cout << "n1 - n2 = " << n_one - n_two << endl;
	}
	cout << "End"; 
	return (0);
}
