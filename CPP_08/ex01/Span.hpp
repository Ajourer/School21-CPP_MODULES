#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <set>
#include <iterator>
#include <algorithm>
#include <cmath>

class Span {
	private:
		unsigned int st_len;
		std::set<int> st;
	public:
		Span();
		~Span();
		Span(unsigned int N);
		Span(const Span& cpy);
		Span &operator= (const Span& cpy);

		void addNumber(int num);
		int shortestSpan();
		int longestSpan();
		class NotEnoughSpace : public std::exception {
			virtual const char* what() const throw() {
				return "Not enough space in the span to add the integer.";
			}
		};
		class CantSpan : public std::exception {
            virtual const char* what() const throw() {
				return ("Span have not enough values to do a span.");
			}
        };
};

#endif
