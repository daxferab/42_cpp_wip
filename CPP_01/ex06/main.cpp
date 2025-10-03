#include "Harl.hpp"

bool	checkArgs(std::string arg)
{
	if (arg == "DEBUG" || arg == "INFO" || arg == "WARNING" || arg == "ERROR")
		return (true);
	return (false);
}

int	main(int argc, char	*argv[])
{
	Harl	harl;

	if (argc != 2 || !checkArgs((std::string)argv[1]))
	{
		std::cout << "[Probably complaining about insignificant problems]" << std::endl;
		return (0);
	}
	harl.complain("WARNING");
}
