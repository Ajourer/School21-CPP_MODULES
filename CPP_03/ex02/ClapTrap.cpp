#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : m_name("noname"), hp(10), energy(10), damage(0) {
	std::cout << "Default constructor ClapTrap is called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
	: m_name(name), hp(10), energy(10), damage(0) {
	std::cout << "Default constructor ClapTrap is called with name: " << m_name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& clapTrap) {
	*this = clapTrap;
	std::cout << "Copy constructor ClapTrap is called" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor ClapTrap is called" << std::endl;
}

ClapTrap &ClapTrap::operator= (const ClapTrap& clapTrap) {
	std::cout << "Assignation operator is called" << std::endl;
	if (this == &clapTrap)
		return (*this);
	m_name = clapTrap.m_name;
	hp = clapTrap.hp;
	energy = clapTrap.energy;
	damage = clapTrap.damage;
	return (*this);
}

void ClapTrap::attack(const std::string& target) {
	if (hp <= 0) {
		std::cout << "\033[31m" << m_name << " is Dead and can't attack " << "\033[0m" << std::endl;
		return ;
	}
	if (energy <= 0) {
		std::cout << m_name << " has no energy to attack" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << m_name << " attacks " << target <<
		", causing " << damage << " points of damage! " << std::endl;
    --energy;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (hp <= 0) {
		std::cout << "\033[31m" << m_name << " is already Dead! STOP!" << "\033[0m" << std::endl;
		return ;
	}
	hp -= amount;
	std::cout << m_name << " take " << amount << " damage and he has " <<
		hp << " hit points" << std::endl;

}
void ClapTrap::beRepaired(unsigned int amount) {
	if (hp <= 0) {
		std::cout << "\033[31m" << m_name << " is Dead and can't repair " << "\033[0m" << std::endl;
		return ;
	}
	if (energy <= 0) {
		std::cout << m_name << " has no energy to repair " << std::endl;
		return ;
	}
	std::cout << m_name << " restored " << amount << " Hit Points ";
	hp += amount;
	std::cout << "and now he has " << hp << " Hit Points" << std::endl;
	--energy;
}
