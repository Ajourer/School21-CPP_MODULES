#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(): Animal() {
	std::cout << "Dog constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
	this->brain->fillIdeas("\x1b[35mDog's idea\x1b[0m");
	this->brain->printIdeas(1);
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
	delete this->brain;
}

Dog::Dog(const Dog& dog) {
	std::cout << "Copy constructor Dog called" << std::endl;
	this->type = dog.type;
	this->brain = new Brain(*dog.brain);
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
	std::cout << "\x1b[4;32mWoof!\x1b[0m" << std::endl;
}
