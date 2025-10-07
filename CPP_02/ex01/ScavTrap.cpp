#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Created " << name << " ScavTrap." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << name << " was destroyed." << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (energyPoints > 0)
	{
		energyPoints--;
		std::cout << "ScavTrap " << name << " attacks " << target << " causing " << attackDamage << " points of damage." << std::endl;
	}
	else
		std::cout << "ScavTrap " << name << " ran out of energy points." << std::endl;
}

void	ScavTrap::guardGate() const
{
	std::cout << "Scavtrap " << name << " is now in Gate keeper mode." << std::endl;
}
