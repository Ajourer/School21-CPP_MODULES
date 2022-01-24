#include "Fixed.hpp"

const int Fixed::bits = 8;

Fixed::Fixed() : value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value) {
	std::cout << "Int constructor called" << std::endl;
	this->value = value * (1 << Fixed::bits);
}

Fixed::Fixed(const float value) {
	std::cout << "Float constructor called" << std::endl;
	this->value = (int)roundf(value * (1 << Fixed::bits));
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& fixed) : value(fixed.value) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator= (const Fixed& fixed) {
	std::cout << "Assignation operator called" << std::endl;
	value = fixed.value;
	return (*this);
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return (value);
}

void Fixed::setRawBits(const int raw) {
	value = raw;
}

int Fixed::toInt() const {
	return (value >> Fixed::bits);
}

float Fixed::toFloat( void ) const {
	return ((float)this->value / (float)(1 << Fixed::bits));	
}

std::ostream& operator<< (std::ostream& cout, const Fixed& fixed) {
	cout << fixed.toFloat();
	return (cout);
}
