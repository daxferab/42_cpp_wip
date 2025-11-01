#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iomanip>
#include <cstdlib>
#include <iostream>

class Zombie
{
	private:
		std::string name;

	public:
		Zombie(std::string name);
		void announce(void) const;
		~Zombie(void);
};

Zombie*	newZombie(std::string name);
void	randomChump( std::string name);

#endif
