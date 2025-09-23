#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <cstdlib>

class Contact
{
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		std::string	phoneNum;
		std::string	darkestSecret;

		bool		setField(std::string fieldName, std::string *field);
	public:
		void		fill();
		std::string	getField(std::string field);
		std::string getField(std::string field, size_t length);
};

#endif
