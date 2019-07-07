#include "PhoneBook.hpp"
#include <iostream>
#include <string>

using namespace std;

PhoneBook::PhoneBook(void)
{
	this->filled = 0;
	return;
}

PhoneBook::PhoneBook(std::string name) : _name_of_phonebook(name)
{
	if (!name.empty())
	{
		cout														\
			<< "Phone Book: "										\
			<< this->_name_of_phonebook								\
			<< " was created"										\
			<<														\
		endl;
		this->filled = 0;
	}
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
	this->filled++;
	this->_Phone_book[index] = contact;
	return (1);
}
