#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include "ContactRecord.hpp"
# include <string>

class PhoneBook
{
	public:
		int			  filled;

		PhoneBook(void);
		PhoneBook(std::string name);
		~PhoneBook(void);

		std::string		getPhoneBookName(void) const;
		ContactRecord	*getPhoneBook(void);

		int				setNewContact(ContactRecord &contact, int index);
	private:
		std::string	  _name_of_phonebook;
		ContactRecord _Phone_book[10];
};

#endif
