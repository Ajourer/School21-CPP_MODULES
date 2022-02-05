#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<class T>
class Array {
	private:
		T* arr;
		int length;
	public:
		Array();
		~Array();

		Array(unsigned int len);
		Array(const Array& ref);

		Array<T>& operator= (const Array<T>& ref);
		T& operator[](int idx);
		const T& operator[](int idx) const;

		int size() const;

		class IndexOutOfRangeException : public std::exception {
			public:
				const char* what() const throw();
		};
};

template<typename T>
Array<T>::Array(): arr(0), length(0) {}

template<typename T>
Array<T>::Array(unsigned int len): length(len) {
	this->arr = new T[this->length];
}

template<typename T>
Array<T>::Array(const Array<T>& ref) {
	if (ref.arr) {
		this->length = ref.length;
		this->arr = new T[this->length];
		for (int i = 0; i < this->length; i++)
			this->arr[i] = ref.arr[i];
	}
	else {
		if (this->arr)
			delete (this->arr);
		this->arr = 0;
		this->length = 0;
	}
}

template<typename T>
Array<T>& Array<T>::operator = (const Array<T>& ref) {
	if (&ref == this)
		return *this;
	if (this->arr) {
		delete []this->arr;
		arr = 0;
		length = 0;
	}
	if (ref.arr) {
		this->length = ref.length;
		this->arr = new T[this->length];
		for (int i = 0; i < this->length; i++)
			this->arr[i] = ref.arr[i];
	}
	return (*this);
}

template<typename T>
T& Array<T>::operator[](int idx) {
	if (idx < 0 || idx >= this->length)
		throw IndexOutOfRangeException();
	return (this->arr[idx]);
}

template<typename T>
const T& Array<T>::operator[](int idx) const {
	if (idx < 0 || idx >= this->length)
		throw IndexOutOfRangeException();
	return (this->arr[idx]);
}

template<typename T>
const char* Array<T>::IndexOutOfRangeException::what() const throw() {
	return "\033[31mSEGMENTATION FAULT\033[0m";
}

template<typename T>
Array<T>::~Array() {
	delete [](this->arr);
}

template<typename T>
int Array<T>::size() const {
	return (this->length);
}

#endif
