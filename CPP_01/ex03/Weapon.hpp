#ifndef WEAPON_H
#define WEAPON_H
#include <string>

class Weapon
{
	private:
		std::string	type;
	public:
		Weapon(void);
		Weapon(std::string type);
		const std::string&	getType();
		void				setType(std::string type);
		~Weapon(void);
};

#endif
