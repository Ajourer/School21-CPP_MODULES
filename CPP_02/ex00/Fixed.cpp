#include <iostream>
#include "Fixed.hpp"

const int Fixed::bits = 8;

Fixed::Fixed() : value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& fixed) : value(fixed.value) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator= (const Fixed& fixed) {
	std::cout << "Assignation operator called" << std::endl;
	if (this == &fixed) //проверка на самоприсваивание
		return (*this);
	value = fixed.value;
	return (*this);
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void Fixed::setRawBits(const int raw)
{
	this->value = raw;
}
