#include "Weapon.hpp"

Weapon::Weapon(void) : type("Default"){}

Weapon::Weapon(std::string type) : type(type){}

const std::string& Weapon::getType() const
{
    return (this->type);
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}

Weapon::~Weapon(void){}
