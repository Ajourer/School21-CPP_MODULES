#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(): Animal() {
	std::cout << "Cat constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain;
	this->brain->fillIdeas("Cats's idea");
	this->brain->printIdeas(5);
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
	delete this->brain;
}

Cat::Cat(const Cat& cat) {
	std::cout << "Copy constructor Cat called" << std::endl;
	*this = cat;
}

Cat &Cat::operator=(const Cat &cat) {
	if (this == &cat)
		return *this;
	delete (this->brain);
	this->type = cat.type;
	if (cat.brain) {
		this->brain = new Brain;
		*this->brain = *cat.brain;
	}
	else 
		this->brain = 0;
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "Meow!" << std::endl;
}
