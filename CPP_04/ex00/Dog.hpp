#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal {
	public:
		Dog();
		virtual ~Dog();
		Dog(const Dog& dog);
		Dog& operator= (const Dog& dog);
		virtual void makeSound() const;
};

#endif
