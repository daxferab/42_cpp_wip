#include "Zombie.hpp"

int main() {
	std::cout << "--------------------------------------------" << std::endl;

	std::cout << "Creating self-destruction (stack) Zombies..." << std::endl;
	randomChump("Manoli");
	randomChump("Amelio");
	std::cout << "Manoli and Amelio were automatically destroyed" << std::endl;
	
	std::cout << "--------------------------------------------" << std::endl;

	std::cout << "Creating heap allocated Zombies..." << std::endl;
	Zombie	*zombie1 = newZombie("Josefino");
	zombie1->announce();
	Zombie	*zombie2 = newZombie("Pakita");
	zombie2->announce();
	std::cout << "Manually destroying Josefino and Pakita: " << std::endl;
	delete zombie1;
	delete zombie2;

	std::cout << "--------------------------------------------" << std::endl;
	return (0);
}
