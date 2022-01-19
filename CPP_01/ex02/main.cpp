#include <iostream>
#include <string>
#include <iomanip>

int main() {
	std::string str("HI THIS IS BRAIN");
	std::string *stringPTR = &str;
    std::string &stringREF = str;

	std::cout << "address of the str                    \033[32m\t" << &str << "\033[0m" << std::endl;
	std::cout << "address of the str by using pointer   \033[32m\t" << stringPTR << "\033[0m" << std::endl;
	std::cout << "address of the str by using reference \033[32m\t" << &stringREF << "\033[0m" << std::endl;
	std::cout << std::endl;
	std::cout << "string: using pointer        \033[32m\t\t" << *stringPTR << "\033[0m" << std::endl;
	std::cout << "string: using reference      \033[32m\t\t" << stringREF << "\033[0m" << std::endl;
}
