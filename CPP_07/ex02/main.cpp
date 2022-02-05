#include "Array.hpp"
#include <cstdlib>
#define XGREEN "\033[1;32m"
#define XWHITE "\033[0m"

class A {
public:
	A() {};
	A(int n) : m_n(n) {};
	~A() {};
	A(const A& ref) { *this = ref;};
	A& operator= (const A& ref) { this->m_n = ref.m_n; return *this;};
	int getN() const { return this->m_n;};
	void setN(int i) { this->m_n = i;};

private:
	int m_n;
};

std::ostream  &operator<<(std::ostream & o, A const & a) {
	o << a.getN();
	return o;
}

template<typename T>
void print_arr(Array<T>& ref) {
	for (int i = 0; i < ref.size(); i++)
		std::cout << XGREEN << ref[i] << " " << XWHITE;
	std::cout << std::endl;
}

int main() {
	Array<int> arr(10);
	std::srand(time(0));
	for (int i = 0; i < arr.size(); i++)
		arr[i] = rand() % 51;
	std::cout << "=======================================" << std::endl;
	print_arr(arr);
	std::cout << "========================================" << std::endl;
	std::cout << "arr[0] = " << XGREEN << arr[0] << XWHITE << std::endl;
	std::cout << "=============================" << std::endl;
	try {
		std::cout << arr[50] << std::endl;
	}
	catch (std::exception& ex) {
		std::cout << ex.what() << std::endl;
	}
	std::cout << "===================" << std::endl;
	try
	{
		arr[-1];
	}
	catch (std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	std::cout << "=============================" << std::endl;
	std::cout << "size arr = " << XGREEN << arr.size() << XWHITE << std::endl;
	std::cout << "========================================" << std::endl;



	Array<int> numbers(20);
	Array<int> arr3(20);
	for (int i = 0; i < numbers.size(); i++)
		numbers[i] = rand() % 100;
	std::cout << "=============  =  ==================" << std::endl;
	arr3 = numbers;
	print_arr(arr3);
	print_arr(numbers);
	std::cout << "===============SCOPE==================" << std::endl;
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
		std::cout << "=================tmp======================" << std::endl;
		print_arr(tmp);
		std::cout << "tmp.size() = " << XGREEN <<  tmp.size() << XWHITE << std::endl;
		std::cout << "=================test(copy)===============" << std::endl; 
		print_arr(test);
		std::cout << "test.size() = " << XGREEN << test.size() << XWHITE << std::endl;
	}

	std::cout << "========================================" << std::endl;
	Array<std::string> str(3);
    str[0] = "AAAAAAAAAAAAA";
    str[2] = "BBBBBBBBBBB";
    str[1] = "CCCCCCCCCCCC";
	print_arr(str);
	std::cout << "========================================" << std::endl;
	Array<char> chars(3);
	chars[0] = '&';
	chars[1] = '"';
	chars[2] = '$';
	print_arr(chars);
	std::cout << "========================================" << std::endl;

    Array<A>arrClass(5);
	for (int i = 0; i < 5; ++i) {
		arrClass[i].setN(i);
	}
	print_arr(arrClass);
    std::cout << "Size: " << XGREEN << arrClass.size() << XWHITE << std::endl;
}
