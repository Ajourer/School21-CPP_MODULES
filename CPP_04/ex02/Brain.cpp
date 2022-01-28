#include "Brain.hpp"

Brain::Brain() {
	std::cout << "\033[1;31mBrain constructor\033[0m" << std::endl;
}

Brain::~Brain() {
	std::cout << "\033[1;31mBrain destructor\033[0m" << std::endl;
}

Brain::Brain(const Brain& brain) {
	std::cout << "Copy constructor Brain" << std::endl;
	*this = brain;
}

Brain &Brain::operator=(const Brain &brain) {
	for (int i = 0; i < 100; i++)
		this->ideas[i] = brain.ideas[i];
	return (*this);
}

void Brain::fillIdeas(std::string idea) {
	for (int i = 0; i < 100; i++)
		this->ideas[i] = idea;
}

void Brain::printIdeas(int a) {
	for (int i = 0; i < a && i < 100; i++)
		std::cout << this->ideas[i] << std::endl;
}
