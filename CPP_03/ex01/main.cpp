#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	std::cout << "=============" << std::endl;
	ScavTrap empty;
	empty = ScavTrap("JACKIE");
	empty.attack("BAD GUY");
	std::cout << "=============" << std::endl;
	ScavTrap copy(empty);
	copy.attack("ANOTHER BAD GUY");
	std::cout << "=============" << std::endl;
	ScavTrap scott("Scott");
	scott.attack("Gideon");
	scott.guardGate();
	std::cout << "=============" << std::endl;
	scott.takeDamage(1);
	scott.beRepaired(1);
	scott.takeDamage(100);
	scott.beRepaired(100);
	return 0;
}
