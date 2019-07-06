#include "PhoneBook.hpp"
#include "ContactRecord.hpp"

int		main(void)
{
	PhoneBook *myPhoneBook = new PhoneBook("My Phone Book");

	delete myPhoneBook;
	return 0;
}
