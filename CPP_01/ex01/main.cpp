#include "Zombie.hpp"

int main() {
	int	amount = 5;
	Zombie *horde = zombieHorde(amount, "Pakito");

	std::cout << "--------------------------------------------" << std::endl;

	std::cout << "Creating horde of Zombies..." << std::endl << std::endl;
	for (int i = 0; i < amount; i++)
		horde[i].announce();
	delete[] horde;
	std::cout << "--------------------------------------------" << std::endl;
	return (0);
}
