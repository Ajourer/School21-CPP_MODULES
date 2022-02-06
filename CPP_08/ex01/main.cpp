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
	sp.addNumber(2);
	sp.addNumber(2);
	sp.addNumber(21);
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

	std::multiset<int> AAAAAAAAA;

	for (int i = 0; i < 100; i++)
		AAAAAAAAA.insert(i);

	Span b(110);
	Span b2(20);


	b.addManyNumbers(AAAAAAAAA.begin(), AAAAAAAAA.end());
	try {
		b2.addManyNumbers(AAAAAAAAA.begin(), AAAAAAAAA.end());
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << b.shortestSpan() << std::endl;
	std::cout << b.longestSpan() << std::endl;
	return 0;
}
