#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <string>
#include <iomanip>
#include <iostream>

class HumanA {
private:
	std::string	name;
	Weapon		&weapon;
public:
	HumanA(const std::string name, Weapon &weapon);
	void attack(void);
};

#endif
