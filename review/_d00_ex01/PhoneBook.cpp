#include "PhoneBook.hpp"
#include <iostream>

using namespace std;

PhoneBook::PhoneBook(void)
{
	return;
}

PhoneBook::PhoneBook(std::string name) : _name_of_phonebook(name)
{
	if (!name.empty())
		cout														\
			<< "Phone Book: "										\
			<< this->_name_of_phonebook								\
			<< " was created"										\
			<<														\
		endl;
	else
		this->_name_of_phonebook = "Default";
	return;
}

PhoneBook::~PhoneBook(void)
{
	cout															\
		<< this->_name_of_phonebook									\
		<< " was deleted."											\
		<<															\
	endl;
	return;
}

std::string		PhoneBook::getPhoneBookName(void)	const			\
{
	return this->_name_of_phonebook;
}

ContactRecord	*PhoneBook::getPhoneBook(void)						\
{
	return this->_Phone_book;
}

int				PhoneBook::setNewContact(							\
							ContactRecord &contact,					\
						   	int index)
{
	this->_Phone_book[index] = contact;
	return (1);
}
