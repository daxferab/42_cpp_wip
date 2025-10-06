#include "Contact.hpp"

void	Contact::fill()
{
	if (
		!setField("First name", &firstName) ||
		!setField("Last name", &lastName) ||
		!setField("Nickname", &nickname) ||
		!setField("Phone number", &phoneNum) ||
		!setField("Darkest secret", &darkestSecret)
		)
		exit(0);
}

bool Contact::setField(std::string fieldName, std::string *field)
{
	while (true) {
		std::cout << fieldName << ": ";
		if (!std::getline(std::cin, *field))
			return (false);
		if (!field->empty())
			return(true);
		std::cout << "Field can't be empty" << std::endl;
	}
}

std::string Contact::getField(std::string field) const
{
	if (field == "first")
		return(firstName);
	else if (field == "last")
		return(lastName);
	else if (field == "nick")
		return(nickname);
	else if (field == "phone")
		return(phoneNum);
	else if (field == "secret")
		return(darkestSecret);
	return (NULL);
}

std::string Contact::getField(std::string field, size_t length) const
{
	std::string	result;

	result = getField(field);
	if (result.length() <= length)
		return (result);
	return (result.substr(0, 9) + ".");
}
