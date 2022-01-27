#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
	std::cout << "=============" << std::endl;
	FragTrap guy("RALVERTA");
	FragTrap sir;
	sir = guy;
	sir.attack("PROJECT");
	std::cout << "=============" << std::endl;
	std::cout << "=============" << std::endl;
	FragTrap ralverta(sir);
	ralverta.attack("DEADLINE");
	ralverta.highFivesGuys();
	std::cout << "=============" << std::endl;
	ralverta.takeDamage(1);
	ralverta.takeDamage(99);
	ralverta.beRepaired(100);
	std::cout << "=============" << std::endl;
	std::cout << "=============" << std::endl;
	return 0;
}
