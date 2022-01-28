#include "Dog.hpp"

Dog::Dog(): Animal() {
	std::cout << "Dog constructor called" << std::endl;
	this->type = "Dog";
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog& dog) {
	*this = dog;
	std::cout << "Copy constructor Dog called" << std::endl;
}

Dog &Dog::operator=(const Dog &dog) {
	this->type = dog.type;
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "Woof!" << std::endl;
}
