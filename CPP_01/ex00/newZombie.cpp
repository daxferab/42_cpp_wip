// This function creates a zombie, names it, and returns it so you can use it outside
// of the function scope.

#include "Zombie.hpp"

Zombie*	newZombie(std::string name)
{
	Zombie	*zombie = new Zombie(name);

	return (zombie);
}
