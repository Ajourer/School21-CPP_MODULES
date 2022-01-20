#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include "Weapon.hpp"

class HumanB {
private:
	std::string	m_name;
	Weapon		*m_weapon;
public:
	HumanB(std::string name);
	void setWeapon(Weapon &weapon);
	void attack();
};

#endif
