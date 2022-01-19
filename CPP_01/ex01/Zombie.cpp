#include "Zombie.hpp"

void Zombie::announce() {
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(){};

Zombie::~Zombie() {
	std::cout << this->name << " died (ДА НЕ УМЕР ОН В КОНЦЕ ДРАЙВА!)" << std::endl;
}

void Zombie::setName(std::string name) {
	this->name = name;
}
