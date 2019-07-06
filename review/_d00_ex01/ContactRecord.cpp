#include "ContactRecord.hpp"
#include <iostream>

using namespace std;

ContactRecord::ContactRecord(void)
{
	return ;
}

ContactRecord::ContactRecord(								\
				  std::string first_name,					\
	   			  std::string last_name,  					\
				  std::string phone_number					\
							): _phone_number(phone_number),	\
							   _first_name(first_name),		\
							   _last_name(last_name)		\
{
	cout													\
		<< "First Name: "									\
		<< this->_first_name								\
		<<													\
	endl;
	cout													\
		<< "Last Name: "									\
		<< this->_last_name									\
		<<													\
	endl;
	cout													\
		<< "Phone Number: "									\
		<< this->_phone_number								\
		<<	
	endl;
}

ContactRecord::~ContactRecord(void)
{
	cout 													\
		<< this->_phone_number								\
		<< " was deleted from phonebook"					\
		<<													\
	endl;
	return ;
}

/***********************************************************
 * 		         	GETTTERS SECTION	            	   *
 * 									                       *
 * *********************************************************/

//
// GET OUTPUT
//

void	ContactRecord::getRecordDetails(void)
{
	cout													\
		<< "First name: "									\
		<<	this->_first_name								\
		<< "Last name: "									\
		<< 	this->_last_name								\
		<<	"Phone number: "								\
		<<	this->_phone_number								\
		<<													\
	endl;
	return ;
}

void	ContactRecord::getRecordPhoneNumber(				\
								 std::string first_name,	\
								 std::string last_name		\
											)
{
	if (!first_name.compare(last_name)) 
		cout												\
			<<	"The number is: "							\
		    <<	this->_phone_number							\
			<<												\
		endl;
	else
		cout												\
			<< "There is no phone number for this contact"	\
			<<												\
		endl;
}

void	ContactRecord::getRecordName(						\
						  std::string phone_number			\
									)						\
{
	cout													\
		<< "Contact Name: "									\
		<< this->_first_name								\
		<< " " 												\
		<< this->_last_name									\
		<<													\
	endl;
}

//
// GET VALUE
//

std::string	ContactRecord::getRecordFirstName_v(void) const
{
	return this->_first_name;
}

std::string ContactRecord::getRecordLastName_v(void) const
{
	return this->_last_name;
}

std::string ContactRecord::getRecordPhoneNumber_v(void) const
{
	return this->_phone_number;
}

/***********************************************************
 *                                                         *
 *                 SETTERS SECTION                         *
 *                                                         *
 * *********************************************************/

int		ContactRecord::setRecordPhoneNumber(
								 std::string phone_number	\
								 )							\
{
	if (!phone_number.empty()) 
	{
		this->_phone_number = phone_number;
		return (1);
	}
	else
		cout											\
			<< "No phone number inserted."				\
			<<											\
		endl;
	return (0);
}

int		ContactRecord::setRecordName(						\
						  std::string first_name,			\
						  std::string last_name				\
						  			)
{
	if (!first_name.empty() && !last_name.empty())
	{
		this->_first_name = first_name;
		this->_last_name = last_name;
		cout												\
			<< "Fisrt Name: "								\
			<< this->_first_name							\
			<< "Last Name: "								\
			<< this->_last_name								\
			<<												\
		endl;
		return (1);
	}
	cout													\
		<< "First and Last names are required."				\
		<<													\
	endl;
	return (0);
}

ContactRecord &ContactRecord::operator=(ContactRecord const \
										&contact)
{
	if (this != &contact)
	{
		this->_phone_number = contact.getRecordPhoneNumber_v();
		this->_first_name = contact.getRecordFirstName_v();
		this->_last_name = contact.getRecordLastName_v();
	}
	else
		cout												\
			<< "This record exist already."					\
			<<												\
		endl;
	return (*this);
}
