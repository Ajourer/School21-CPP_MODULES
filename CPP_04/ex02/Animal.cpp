#include "Animal.hpp"

Animal::Animal(): type("Animal") {
	std::cout << "Default Animal constructor called" << std::endl;
}

Animal::~Animal(){
	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal& animal) : type(animal.type) {
	std::cout << "Copy constructor Animal called" << std::endl;
}

Animal &Animal::operator=(const Animal &animal) {
	if (this == &animal)
		return (*this);
	this->type = animal.type;
	return (*this);
}

std::string Animal::getType() const {
	return this->type;
}
