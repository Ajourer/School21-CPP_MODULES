#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(): Animal() {
	std::cout << "Dog constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
	this->brain->fillIdeas("Dog's idea");
	this->brain->printIdeas(3);
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
	delete this->brain;
}

Dog::Dog(const Dog& dog) {
	std::cout << "Copy constructor Dog called" << std::endl;
	*this = dog;
}

Dog &Dog::operator=(const Dog &dog) {
	if (this == &dog)
		return *this;
	delete this->brain;
	this->type = dog.type;
	if (dog.brain) {
		this->brain = new Brain;
		*this->brain = *dog.brain;
	}
	else
		this->brain = 0;
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "Woof!" << std::endl;
}
