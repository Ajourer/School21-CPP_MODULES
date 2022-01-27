#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	std::cout << "Default FragTrap constructor is called" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "Destructor FragTrap is called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->hp = 100;
	this->energy = 100;
	this->damage = 30;
	std::cout << "Default constructor FragTrap is called with name: " << this->m_name << std::endl;
}

FragTrap::FragTrap(const FragTrap& fragtrap) {
	std::cout << "Copy constructor FragTrap is called" << std::endl;
	*this = fragtrap;
}

FragTrap &FragTrap::operator= (const FragTrap &fragtrap) {
	std::cout << "Assignation operator is called" << std::endl;
	this->m_name = fragtrap.m_name;
	this->hp = fragtrap.hp;
	this->energy = fragtrap.energy;
	this->damage = fragtrap.damage;
	return (*this);
}

void FragTrap::attack(const std::string target) {
	if (hp <= 0) {
		std::cout << "\033[31m" << m_name << " is Dead and can't attack " << "\033[0m" << std::endl;
		return ;
	}
	if (energy <= 0) {
		std::cout << m_name << " has no energy to attack" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->m_name << " attacks " << target <<
		", causing " << this->damage << " points of damage! " << std::endl;
	this->energy--;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << this->m_name << " approved the high-five request ✋" << std::endl;
}
