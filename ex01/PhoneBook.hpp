#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iomanip>
# include "Contact.hpp"

class PhoneBook
{
	private:
		static const int	MAX_COUNT = 8;
		Contact 			contacts[MAX_COUNT];
		int					count;
		int					storedContacts;
	public:
		PhoneBook();
		void				add();
		void				search();
		void				display(int index);
		void				printRow(std::string field1, std::string field2, std::string field3, std::string field4);
		void				printRow(int field1, std::string field2, std::string field3, std::string field4);
};

#endif
