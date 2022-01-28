#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {
	public:
		WrongCat();
		~WrongCat();
		WrongCat(const WrongCat& cat);
		WrongCat& operator= (const WrongCat& cat);
		void makeSound() const;
};

#endif
