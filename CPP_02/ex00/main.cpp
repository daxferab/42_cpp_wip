#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	Berta("Berta");
	std::string	target = "Dax";

	Berta.takeDamage(9);
	Berta.beRepaired(2);
	for (int i = 0; i < 10; i++)
		Berta.attack(target);
	Berta.takeDamage(9);
}
