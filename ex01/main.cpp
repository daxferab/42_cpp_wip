#include <iostream>
#include <cstdlib>
#include "PhoneBook.hpp"

int	main()
{
	PhoneBook	phoneBook;
	std::string	command;
	
	std::cout << "Welcome to the crappy awesome phonebook!" << std::endl;
	while (true)
	{
		std::cout << "What do you want to do? (ADD, SEARCH or EXIT)" << std::endl << ">> ";
		if (!std::getline(std::cin, command) or command == "EXIT")
		{
			std::cout << "Exiting..." << std::endl;
			break;
		}
		if (command == "ADD")
			phoneBook.add();
		else if (command == "SEARCH")
			phoneBook.search();
		else
			std::cout << "Invalid command" << std::endl << std::endl;
	}
	return (0);
}
