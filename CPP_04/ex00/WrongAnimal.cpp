#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("WrongAnimal") {
	std::cout << "Default WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& animal) : type(animal.type) {
	std::cout << "Copy constructor WrongAnimal called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &animal) {
	if (this == &animal)
		return (*this);
	this->type = animal.type;
	return (*this);
}

std::string WrongAnimal::getType() const {
	return this->type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Wrong zZzZzZzZz" << std::endl;
}
