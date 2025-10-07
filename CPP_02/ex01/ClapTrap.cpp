#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : 
	name(name),
	hitPoints(100),
	energyPoints(50),
	attackDamage(20)
{
	std::cout << "Created " << this->name << " ClapTrap with the stats:" << std::endl;
	std::cout << "	[HP] -> " << hitPoints << std::endl;
	std::cout << "	[EP] -> " << energyPoints << std::endl;
	std::cout << "	[AD] -> " << attackDamage << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " was destroyed.";
}

void	ClapTrap::attack(const std::string& target)
{
	if (energyPoints > 0)
	{
		energyPoints--;
		std::cout << "ClapTrap " << name << " attacks " << target << " causing " << attackDamage << " points of damage." << std::endl;
	}
	else
		std::cout << "ClapTrap " << name << " ran out of energy points." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	hitPoints -= amount;
	if (hitPoints <= 0)
		std::cout << "ClapTrap " << name << " lost " << amount << " energy points and died." << std::endl;
	else
		std::cout << "ClapTrap " << name << " lost " << amount << " hit points and now has " << this->hitPoints << "." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (energyPoints > 0)
	{
		energyPoints--;
		hitPoints += amount;
		std::cout << "ClapTrap " << name << " gained " << amount << " hit points." << std::endl;
	}
	else
		std::cout << "ClapTrap " << name << " ran out of energy points." << std::endl;
}
