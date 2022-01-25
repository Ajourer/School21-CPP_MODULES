#include <iostream>
#include <cmath>
#include "Fixed.hpp"

const int Fixed::bits = 8;

Fixed::Fixed() : value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value) {
	std::cout << "Int constructor called" << std::endl;
	this->value = value * (1 << bits);
}

Fixed::Fixed(const float value) {
	std::cout << "Float constructor called" << std::endl;
	this->value = (int)roundf(value * (1 << bits));
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
	return ((float)value / (float)(1 << Fixed::bits));	
}

std::ostream& operator<< (std::ostream& cout, const Fixed& fixed) {
	cout << fixed.toFloat();
	return (cout);
}

bool Fixed::operator> (const Fixed& fixed) const {
	return (value > fixed.getRawBits());
}

bool Fixed::operator< (const Fixed& fixed) const {
	return (value < fixed.getRawBits());
}

bool Fixed::operator>= (const Fixed& fixed) {
	return (value >= fixed.getRawBits());
}

bool Fixed::operator<= (const Fixed& fixed) {
	return (value <= fixed.getRawBits());
}

bool Fixed::operator== (const Fixed& fixed) {
	return (value == fixed.getRawBits());
}

bool Fixed::operator!= (const Fixed& fixed) {
	return (value != fixed.getRawBits());
}

Fixed Fixed::operator+ (const Fixed& fixed) {
	Fixed res;
	
	res.setRawBits(value + fixed.getRawBits());
	return (res);
}

Fixed Fixed::operator- (const Fixed& fixed) {
	Fixed res;
	
	res.setRawBits(value - fixed.getRawBits());
	return (res);
}

Fixed Fixed::operator* (const Fixed& fixed) {
	Fixed res;
	
	res.setRawBits((fixed.getRawBits() >> Fixed::bits) * this->value);
	return (res);
}

Fixed Fixed::operator/ (const Fixed& fixed) {
	Fixed res;
	
	res.setRawBits((this->value << Fixed::bits) / fixed.getRawBits());
	return (res);
}

Fixed &	Fixed::operator++() {  //префикс
	setRawBits(++value);
	return (*this);
}

Fixed &	Fixed::operator--() {  //префикс
	setRawBits(--value);
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed for_return(*this);
	setRawBits(++value);
	return (for_return);
}

Fixed Fixed::operator--(int) {
	Fixed for_return(*this);
	setRawBits(--value);
	return (for_return);
}

Fixed &	Fixed::min(Fixed& a, Fixed& b) {
	if (a < b)
		return a;
	return b;
}

Fixed &	Fixed::max(Fixed& a, Fixed& b) {
	if (a > b)
		return a;
	return b;
}

const Fixed &	Fixed::min(const Fixed& a, const Fixed& b) {
	if (a < b)
		return a;
	return b;
}

const Fixed &	Fixed::max(const Fixed& a, const Fixed& b) {
	if (a > b)
		return a;
	return b;
}
