#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed {
private:
	int value;
	static const int bits; //number of fractional bits
public:
	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed& fixed);
	~Fixed();

	Fixed &operator = (const Fixed& fixed);

	bool operator> (const Fixed& fixed) const;
	bool operator< (const Fixed& fixed) const;
	bool operator>= (const Fixed& fixed);
	bool operator<= (const Fixed& fixed);
	bool operator== (const Fixed& fixed);
	bool operator!= (const Fixed& fixed);

	Fixed operator+ (const Fixed& fixed);
	Fixed operator- (const Fixed& fixed);
	Fixed operator* (const Fixed& fixed);
	Fixed operator/ (const Fixed& fixed);

	Fixed& operator++(); // версия префикс
	Fixed& operator--(); // версия префикc
	Fixed operator++(int); // версия постфикс. Подаем фиктивную переменную int.
	Fixed operator--(int); // версия постфикс. Подаем фиктивную переменную int.

	static Fixed& min(Fixed& a, Fixed& b);
	static Fixed& max(Fixed& a, Fixed& b);
	static const Fixed& min(const Fixed& a, const Fixed& b);
	static const Fixed&	max(const Fixed& a, const Fixed& b);

	int getRawBits() const;
	void setRawBits(int const raw);
	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream& operator << (std::ostream& cout, const Fixed& fixed);

#endif
