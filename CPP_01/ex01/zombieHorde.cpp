#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *horde;

	horde = NULL;
	if (N < 0)
		return (std::cout << "Invalid negative number" << std::endl, horde);

	horde = new Zombie[N];
	for (int i = 0; i < N; i++)
		horde[i].setName(name);
	return (horde);
}
