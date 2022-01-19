#include "Zombie.hpp"

int main() {
	int	N;

	std::cout << "Enter the size of the horde" << std::endl;
	std::cin >> N;
    Zombie *zombies = zombieHorde(N, "Ryan Gosling");
    for (int i = 0; i < N; i++)
        zombies[i].announce();
    delete [] zombies;
    return (0);
}
