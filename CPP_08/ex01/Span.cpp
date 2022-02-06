#include "Span.hpp"

Span::Span(unsigned int N) : st_len(N) {}

Span::Span(const Span& cpy) : st_len(cpy.st_len), st(cpy.st) {}

Span& Span::operator= (const Span& asgn) {
	if (this == &asgn)
		return *this;
	st_len = asgn.st_len;
	st = asgn.st;
	return *this;
}

Span::~Span() {}

void Span::addNumber(int num) {
	if (st.size() < st_len)
		st.insert(num);
	else
		throw NotEnoughSpace();
}

int Span::shortestSpan() {
	if (st_len <= 1)
		throw CantSpan();
	int shortest = INT_MAX;
	for (std::set<int>::iterator i = begin(st); i != end(st); i++) {
		std::set<int>::iterator nxt = i;
		++nxt;
		if (abs(*nxt - *i) < shortest)
			shortest = abs(*nxt - *i);
	}
	return shortest;
}

int Span::longestSpan() {
	if (st_len <= 1)
		throw CantSpan();
	else
		return abs(*(--st.end()) - *st.begin());
}
