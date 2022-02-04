#include "Class.hpp"
#include <iostream>

Base* generate_A() {
	std::cout << "Generate class \033[32mA\033[0m" << std::endl;
	return new A();
}

Base* generate_B() {
	std::cout << "Generate class \033[32mB\033[0m" << std::endl;
	return new B();
}

Base* generate_C() {
	std::cout << "Generate class \033[32mC\033[0m" << std::endl;
	return new C();
}

Base* generate() {
	std::srand(time(0));
	int i = rand() % 3;
	if (i == 0)
		return (generate_A());
	if (i == 1)
		return (generate_B());
	if (i == 2)
		return (generate_C());
	return 0;
}

void identify(Base* p) {
	std::cout << "============Identify by pointer============" << std::endl;
	std::cout << "It's: ";
	if (dynamic_cast<A*>(p))
		std::cout << "\033[32mA\033[0m";
	else if (dynamic_cast<B*>(p))
		std::cout << "\033[32mB\033[0m";
	else if (dynamic_cast<C*>(p))
		std::cout << "\033[32mC\033[0m";
	std::cout << " class!" << std::endl;
}

void identify(Base& p) {
	std::cout << "============Identify by reference============" << std::endl;
	std::cout << "It's: ";
	Base res;
	try {
		res = dynamic_cast<A&>(p);
		std::cout << "\033[32mA\033[0m";
	}
	catch (std::bad_cast &e){}
	try {
		res = dynamic_cast<B&>(p);
		std::cout << "\033[32mB\033[0m";
	}
	catch (std::bad_cast &e){}
	try {
		res = dynamic_cast<C&>(p);
		std::cout << "\033[32mC\033[0m";
	}
	catch (std::bad_cast &e){}
	std::cout << " class!" << std::endl;
}

int main() {
	Base *p = generate();
	Base& r = *p;
	identify(p);
	identify(r);
}
