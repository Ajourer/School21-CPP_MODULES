#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	 //Animal dog;
	 //dog.makeSound();

	Cat* a = new Cat();
	Dog* b = new Dog();	

	a->makeSound();
	b->makeSound();
	delete a;	
	delete b;
	//Animal animal;
	//const Animal* j = new Dog();
	//std::cout << "===========================" << std::endl;
	//const Animal* i = new Cat();
	//std::cout << "===========================" << std::endl;

	//Cat basic;
	//{
		//Cat tmp = basic;
	//}
	//std::cout << "===========================" << std::endl;

	//Dog basic2;
	//{
		//Dog tmp2 = basic2;
	//}
	//std::cout << "===========================" << std::endl;

	//delete j;//should not create a leak
	//delete i;
	//std::cout << "===========================" << std::endl;
	//std::cout << "===========================" << std::endl;
	//std::cout << "===========================" << std::endl;
	//std::cout << "==========================" << std::endl;
	
	//Animal *animals[6];
    //for (int i = 0; i < 6; i++)
    //{
		//if (i % 2) {
            //animals[i] = new Cat;
			//animals[i]->makeSound();
		//}
        //else {
            //animals[i] = new Dog;
			//animals[i]->makeSound();
		//}
    //}
    //for (int i = 0; i < 6; i++)
        //delete animals[i];
	//std::cout << "===========================" << std::endl;
	return 0;
}
