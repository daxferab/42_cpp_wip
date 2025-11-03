#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : 
	_name(name),
	_hitPoints(10),
	_energyPoints(10),
	_attackDamage(0)
{
	std::cout << "Created " << _name << " with the stats:" << std::endl;
	std::cout << "	[HP] -> " << _hitPoints << std::endl;
	std::cout << "	[EP] -> " << _energyPoints << std::endl;
	std::cout << "	[AD] -> " << _attackDamage << std::endl;
}

ClapTrap::ClapTrap() : 
	_name("Default"),
	_hitPoints(0),
	_energyPoints(0),
	_attackDamage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) : 
	_name(other._name),
	_hitPoints(other._hitPoints),
	_energyPoints(other._energyPoints),
	_attackDamage(other._attackDamage)
{
	std::cout << "ClapTrap copy constructor called, copied from " << other._name << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other) {
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	std::cout << "ClapTrap Assignment Operator Called" << std::endl;

	return (*this); // Required for chaining
}

ClapTrap::~ClapTrap()
{
	std::cout << _name << " was destroyed.";
}

void	ClapTrap::attack(const std::string& target)
{
	if (_energyPoints > 0)
	{
		_energyPoints--;
		std::cout << "ClapTrap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage." << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << " ran out of energy points." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	_hitPoints -= amount;
	if (_hitPoints <= 0)
		std::cout << "ClapTrap " << _name << " lost " << amount << " energy points and died." << std::endl;
	else
		std::cout << "ClapTrap " << _name << " lost " << amount << " hit points and now has " << _hitPoints << "." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints > 0)
	{
		_energyPoints--;
		_hitPoints += amount;
		std::cout << "ClapTrap " << _name << " gained " << amount << " hit points." << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << " ran out of energy points." << std::endl;
}
