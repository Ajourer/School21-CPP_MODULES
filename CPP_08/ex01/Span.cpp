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
	for (std::multiset<int>::iterator i = begin(st); i != end(st); i++) {
		std::multiset<int>::iterator nxt = i;
		++nxt;
		if (*nxt - *i < shortest && nxt != end(st))
			shortest = *nxt - *i;
	}
	return shortest;
}

int Span::longestSpan() {
	if (st_len <= 1)
		throw CantSpan();
	else
		return *(--st.end()) - *st.begin();
}
void Span::addManyNumbers(std::multiset<int>::iterator start, std::multiset<int>::iterator end)
{
	unsigned int dist = 0;
	for (std::multiset<int>::iterator it = start; it != end; it++)
		dist++;
	if (st.size() + dist > st_len)
		throw NotEnoughSpace();
	for (std::multiset<int>::iterator it = start; it != end; it++)
		addNumber(*it);
}
