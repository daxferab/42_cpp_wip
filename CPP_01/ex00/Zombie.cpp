#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name){}

Zombie::~Zombie(void)
{
	std::cout << "Destroying " << name << std::endl;
}

void Zombie::announce(void) const
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
