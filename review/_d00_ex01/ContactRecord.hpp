#ifndef CONTACTRECORD_HPP
# define CONTACTRECORD_HPP
# include <string>

class ContactRecord
{	
	public:
		ContactRecord(void);
		ContactRecord(std::string first_name, std::string last_name, std::string phone_number);
		~ContactRecord(void);
		ContactRecord &operator=(ContactRecord const &contact);
		//GET OUTPUT
		void		getRecordDetails(void);
		void		getRecordPhoneNumber(std::string fist_name, std::string last_name);
		void		getRecordName(std::string phone_number);
		//GET VALUE
		std::string	getRecordFirstName_v(void) const;
		std::string	getRecordLastName_v(void) const;
		std::string	getRecordPhoneNumber_v(void) const; 
		//SET
		int			setRecordPhoneNumber(std::string phone_number);
		int			setRecordName(std::string first_name, std::string last_name);	
	private:
		std::string _phone_number;
		std::string _first_name;
		std::string _last_name;
};

#endif
