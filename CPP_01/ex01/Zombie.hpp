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
		void announce(void);
		~Zombie(void);
};

Zombie* zombieHorde(int N, std::string name);

#endif
