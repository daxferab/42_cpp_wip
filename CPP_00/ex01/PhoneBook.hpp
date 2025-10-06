#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iomanip>
# include <iostream>
# include <string>
# include "Contact.hpp"

class PhoneBook
{
	private:
		static const int	MAX_COUNT = 8;
		Contact 			contacts[MAX_COUNT];
		int					storedContacts;
	public:
		PhoneBook();
		void				add();
		void				search() const;
		void				display(int index) const;
		void				printRow(std::string field1, std::string field2, std::string field3, std::string field4) const;
		void				printRow(int field1, std::string field2, std::string field3, std::string field4) const;
};

#endif
