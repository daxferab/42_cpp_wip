#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : count(0), storedContacts(0){}

void	PhoneBook::add()
{
	if (count >= MAX_COUNT)
		count = 0;
	std::cout << std::endl;
	contacts[count++].fill();
	if (storedContacts < MAX_COUNT) storedContacts++;
	std::cout << "Contact added." << std::endl << std::endl;
}

void	PhoneBook::search() const
{
	std::string	contactIndex;

	if (count > 0)
	{
		printRow("Index", "First Name", "Last Name", "Nickname");
		for (int i = 0; i < storedContacts; i++)
		{
			printRow(
				i + 1,
				contacts[i].getField("first", 10),
				contacts[i].getField("last", 10),
				contacts[i].getField("nick", 10)
			);
		}
		std::cout << std::endl;
		std::cout << "Insert the index of the contact you want to search" << std::endl << ">> ";
		while (true)
		{
			if (!getline(std::cin, contactIndex))
				exit(0);
			if (contactIndex.empty() || std::atoi(contactIndex.c_str()) < 1 || std::atoi(contactIndex.c_str()) > storedContacts )
			{
				std::cout << "Index must be between 1 and " << storedContacts << std::endl << ">> ";
				continue;
			}
			display(std::atoi(contactIndex.c_str()) - 1);
			break;
		}
	}
	else
		std::cout << "You don`t have any contacts stored" << std::endl;	
	std::cout << std::endl;
}

void	PhoneBook::display(int index) const
{
	std::cout << std::endl;
	std::cout << "First name: " << contacts[index].getField("first") << std::endl;
	std::cout << "Last name: " << contacts[index].getField("last") << std::endl;
	std::cout << "Nickname: " << contacts[index].getField("nick") << std::endl;
	std::cout << "Phone number: " << contacts[index].getField("phone") << std::endl;
	std::cout << "Darkest secret: " << contacts[index].getField("secret") << std::endl;
}

void	PhoneBook::printRow(std::string field1, std::string field2, std::string field3, std::string field4) const
{
	std::cout << std::setw(10) << field1 << "|";
	std::cout << std::setw(10) << field2 << "|";
	std::cout << std::setw(10) << field3 << "|";
	std::cout << std::setw(10) << field4 << "|";
	std::cout << std::endl;
}

void	PhoneBook::printRow(int field1, std::string field2, std::string field3, std::string field4) const
{
	std::cout << std::setw(10) << field1 << "|";
	std::cout << std::setw(10) << field2 << "|";
	std::cout << std::setw(10) << field3 << "|";
	std::cout << std::setw(10) << field4 << "|";
	std::cout << std::endl;
}
