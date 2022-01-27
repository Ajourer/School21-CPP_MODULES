#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "Default ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "Destructor ScavTrap is called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	this->hp = 100;
	this->energy = 50;
	this->damage = 20;
	std::cout << "Default constructor ScavTrap is called with name: " << this->m_name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& scavtrap) {
	*this = scavtrap;
	std::cout << "Copy constructor ScavTrap is called" << std::endl;
}

ScavTrap &ScavTrap::operator= (const ScavTrap &scavtrap) {
	this->m_name = scavtrap.m_name;
	this->hp = scavtrap.hp;
	this->energy = scavtrap.energy;
	this->damage = scavtrap.damage;
	return (*this);
}

void ScavTrap::attack(const std::string target) {
	if (hp <= 0) {
		std::cout << "\033[31m" << this->m_name << " is Dead and can't attack "
			<< "\033[0m" << std::endl;
		return ;
	}
	if (energy <= 0) {
		std::cout << this->m_name << " has no energy to attack" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->m_name << " attacks " << target <<
		", causing " << this->damage << " points of damage! " << std::endl;
    --this->energy;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->m_name << " have enterred in Gate keeper mode" << std::endl;
}
