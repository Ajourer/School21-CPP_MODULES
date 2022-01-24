#ifndef FIXED_H
#define FIXED_H

class Fixed {
private:
	int					value;
	static const int	bits; //number of fractional bits
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed& fixed);
	Fixed &operator= (const Fixed& fixed);
	int getRawBits() const;
	void setRawBits(int const raw);

};

#endif
