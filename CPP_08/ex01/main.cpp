#include "Span.hpp"

int main() {
	try {
		Span er = Span(0);
		er.shortestSpan();
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	Span sp = Span(5);
	sp.addNumber(-5);
	sp.addNumber(13);
	sp.addNumber(11);
	sp.addNumber(15);
	sp.addNumber(-4);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	try {
		sp.addNumber(177);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}
