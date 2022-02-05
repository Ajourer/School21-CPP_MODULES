#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template<typename T>
typename T::const_iterator easyfind(const T& container, int value) {
	typename T::const_iterator result = std::find(container.begin(), container.end(), value);

	if (*result != value)
		throw std::exception();
	return result;
}

#endif
