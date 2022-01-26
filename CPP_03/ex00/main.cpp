#include <iostream>
#include "ClapTrap.hpp"

int main() {
	std::cout << "=============" << std::endl;
	ClapTrap empty;
	ClapTrap jojo("Joseph");
	std::cout << "=============" << std::endl;
	empty = jojo;
	ClapTrap copy_jojo(jojo);
	empty.attack("DIO");
	std::cout << "=============" << std::endl;
	std::cout << '\n';
	ClapTrap jerry("JERRY");
	std::cout << "=============" << std::endl;
	jerry.takeDamage(9);
	for (int i = 0; i < 9; ++i) {
		jerry.beRepaired(1);
	}
	jerry.attack("TOM");
	jerry.attack("TOM"); //again
	jerry.beRepaired(500);
	std::cout << "=============" << std::endl;
	jerry.takeDamage(10);
	jerry.beRepaired(10);
	jerry.attack("TOM");
	jerry.takeDamage(100);
	return 0;
}
