#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(): Animal() {
	std::cout << "Cat constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain;
	this->brain->fillIdeas("\x1b[35mCats's idea\x1b[0m");
	this->brain->printIdeas(1);
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
	delete this->brain;
}

Cat::Cat(const Cat& cat) {
	std::cout << "Copy constructor Cat called" << std::endl;
	this->type = cat.type;
	this->brain = new Brain(*cat.brain);
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
	std::cout << "\x1b[4;32mMeow!\x1b[0m" << std::endl;
}
