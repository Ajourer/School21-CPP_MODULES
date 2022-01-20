#include "HumanA.hpp"

void HumanA::attack() {
	std::cout << m_name << " attacks with his " << m_weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapon) : m_name(name), m_weapon(weapon) {}
