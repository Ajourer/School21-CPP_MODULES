#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	//Animal animal;
	//const Animal* j = new Dog();
	//std::cout << "===========================" << std::endl;
	//const Animal* i = new Cat();
	//std::cout << "===========================" << std::endl;

	Cat basic;
	{
		Cat tmp = basic;
	}
	std::cout << "===========================" << std::endl;

	Dog basic2;
	{
		Dog tmp2 = basic2;
	}
	std::cout << "===========================" << std::endl;

	//delete j;//should not create a leak
	//delete i;
	//std::cout << "===========================" << std::endl;
	//std::cout << "===========================" << std::endl;
	//std::cout << "===========================" << std::endl;
	//std::cout << "==========================" << std::endl;

	//Animal *arr[2];

	//for(int i = 0; i < 2; i++)
	//{
		//if (i % 2 == 0)
		//{
			//arr[i] = new Dog();
			//arr[i]->makeSound();
		//}
		//else
		//{
			//arr[i] = new Cat();
			//arr[i]->makeSound();
		//}
	//}
	//for(int i = 0; i < 2; i++)
		//delete arr[i];
	//std::cout << "===========================" << std::endl;
	//while(1);
	return 0;
}
