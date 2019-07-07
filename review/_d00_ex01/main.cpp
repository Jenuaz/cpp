#include "PhoneBook.hpp"
#include "ContactRecord.hpp"
#include "KeyFunction.hpp"
#include <iostream>
// To add contact you need to run function setNewContact(contact, his index).
// The contact must be created before inserting. Also index can't be more
// then memory allocated.
# define OPTIONS 3
using namespace std;

void	add_contact(PhoneBook *phonebook)
{
	cout																	\
		<< "Entered ADD"													\
		<<																	\
	endl;
	string			first_name;
	string			last_name;	
	string			phone_number;
	ContactRecord	tmp_contact;
	ContactRecord	*contact_list;
	
	cout << "Enter First Name: ";
	cin >> first_name;
	cout << "Enter Last Name: ";	
	cin >> last_name;
	cout << "Enter the phone number: ";
	cin >> phone_number;
	cout << endl;
	tmp_contact.setRecordName(first_name, last_name);
	tmp_contact.setRecordPhoneNumber(phone_number);
	phonebook->setNewContact(tmp_contact, phonebook->filled);
	contact_list = phonebook->getPhoneBook();
	return;
}

void	search_contact(PhoneBook *phonebook)
{
	cout							\
		<< "Entered SEARCH"			\
		<<							\
	endl;
	int				iter;
	ContactRecord	*contact_list;
	
	contact_list = phonebook->getPhoneBook();
	if (phonebook->filled > 0)
	{
			iter = 0;
			cout															 \
				<< "------------------------------------------------------\n"\
				<< "|    First Name   |    Last Name   |   Phone Number  |\n"\
				<< "------------------------------------------------------\n"\
				<<															 \
			endl;
			while (iter < phonebook->filled)
			{
				cout << contact_list[iter].getRecordFirstName_v() << endl;
				cout << contact_list[iter].getRecordFirstName_v() << endl;
				cout << contact_list[iter++].getRecordFirstName_v() << endl;
			}
	}
	return;
}

void	exit(PhoneBook *phonebook)
{
	(void)phonebook;
	cout							\
		<< "Exit"					\
		<<							\
	endl;
	return;
}

int		main(void)
{
	int			iter;
	string		input;
	PhoneBook 	*myPhoneBook = new PhoneBook("My Phone Book");
	keyFunc		option[] = 												\
	{
		{"ADD", add_contact},
		{"SEARCH", search_contact},
		{"EXIT", exit}
	};
	while (1)
	{
		iter = -1;
		getline(cin, input);
		transform(input.begin(), input.end(), input.begin(), ::toupper);
		while (++iter < OPTIONS)
			if (!input.compare(option[iter].action))
				option[iter].func(myPhoneBook);
		if (std::cin.eof())
			return (0);		
	}
	delete myPhoneBook;
	return 0;
}
