#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
	private:
		std::string ideas[100];
	public:
		Brain();
		~Brain();
		Brain(const Brain& brain);
		Brain& operator= (const Brain& brain);
		void fillIdeas(std::string idea);
		void printIdeas(int a);
};

#endif
