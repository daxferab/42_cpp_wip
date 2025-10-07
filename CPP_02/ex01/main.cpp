#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	*Berta = new ScavTrap("name");
	std::string	target = "Dax";

	(*Berta).takeDamage(9);
	(*Berta).beRepaired(2);
	for (int i = 0; i < 10; i++)
		(*Berta).attack(target);
	(*Berta).takeDamage(9);
	delete Berta;
}
