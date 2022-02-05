#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

int main() {
	std::vector<int> vec;
	vec.push_back(11);
	vec.push_back(12);
	vec.push_back(13);
	vec.push_back(9);

	try {
		std::vector<int>::const_iterator res = easyfind(vec, 12);
		std::cout <<  *res << std::endl;
		std::vector<int>::const_iterator wrong_res = easyfind(vec, 100);
		std::cout <<  *wrong_res << std::endl;
	}
	catch (std::exception& ex) {
		std::cout << "\033[31mError Find!\033[0m" << std::endl;
	}

	std::list<int> lis;
	lis.push_back(11);
	lis.push_back(12);
	lis.push_back(13);
	lis.push_back(9);
	try
	{
		std::list<int>::const_iterator res = easyfind(lis, 9);
		std::cout <<  *res << std::endl;
		std::list<int>::const_iterator wrong_res = easyfind(lis, 00);
		std::cout <<  *wrong_res << std::endl;
	}
	catch (std::exception& ex)
	{
		std::cout << "\033[31mError Find!\033[0m" << std::endl;
	}
}
