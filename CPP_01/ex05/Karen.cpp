#include "Karen.hpp"

void Karen::debug() {
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." <<
		" I just love it!" << std::endl;
}

void Karen::info() {
	std::cout << "I cannot believe adding extra bacon cost more money." <<
		" You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}
void Karen::warning() {
	std::cout << "I think I deserve to have some extra bacon for free." <<
		" I’ve been coming here for years and you just started working here last month." << std::endl;
}
void Karen::error() {
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string level) {
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int index = 0;				// индекс уровня
	while (levels[index] != level && index < 4)
		index++;

	void (Karen::*fcnPtr)();	// неконстантный указатель на функцию без аргументов, возвращающую void
	switch (index) {
		case 0:
			fcnPtr = &Karen::debug;
			break ;
		case 1:
			fcnPtr = &Karen::info;
			break ;
		case 2:
			fcnPtr = &Karen::warning;
			break ;
		case 3:
			fcnPtr = &Karen::error;
			break ;
		default:
			std::cout << "Hmmm...I don't know this level" << std::endl;
			return ;
	}
	(this->*fcnPtr)();
}
