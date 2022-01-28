#include "Cat.hpp"

Cat::Cat(): Animal() {
	std::cout << "Cat constructor called" << std::endl;
	this->type = "Cat";
}

Cat::~Cat(){
	std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat& cat) {
	*this = cat;
	std::cout << "Copy constructor Cat called" << std::endl;
}

Cat &Cat::operator=(const Cat &cat) {
	this->type = cat.type;
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "Meow!" << std::endl;
}
