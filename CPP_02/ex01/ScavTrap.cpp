#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Created " << name << " ScavTrap." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " was destroyed." << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (_energyPoints > 0)
	{
		_energyPoints--;
		std::cout << "ScavTrap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage." << std::endl;
	}
	else
		std::cout << "ScavTrap " << _name << " ran out of energy points." << std::endl;
}

void	ScavTrap::guardGate() const
{
	std::cout << "Scavtrap " << _name << " is now in Gate keeper mode." << std::endl;
}
