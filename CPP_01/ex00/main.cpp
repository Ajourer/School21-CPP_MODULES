#include "Zombie.hpp"

int main() {
	Zombie *ryan = newZombie("Ryan Dynamic");
	ryan->announce();
	delete ryan;
	Zombie jake("Jake Static");
	jake.announce();
	randomChump("Rachel.R Static");
	return (0);
}
