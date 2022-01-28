#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal() {
	std::cout << "WrongCat constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& cat) {
	*this = cat;
	std::cout << "Copy constructor WrongCat called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &cat) {
	this->type = cat.type;
	return (*this);
}

void WrongCat::makeSound() const {
	std::cout << "Wrong Meow!" << std::endl;
}
