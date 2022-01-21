#include "Karen.hpp"

int main(int ac, char **av)
{
	Karen(karen);
	switch (ac) {
		case 2:
			karen.complain(av[1]);
			return (0);
		default:
			std::cout << "\033[31mError: wrong parameter\033[0m" << std::endl;
			return (0);
	}
}
