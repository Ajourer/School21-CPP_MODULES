#include "MutantStack.hpp"
#include <list>

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "stack top: " << mstack.top() << std::endl;

	mstack.pop();

	std::cout << "stack size: " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(19);
	mstack.push(24);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;

	std::cout << "mstack elems: " << std::endl;
	while (it != ite) {
		std::cout << *it << (it == ite - 1 ? "\n" : ", ");
		++it;
	}

	std::stack<int> s(mstack);
	std::cout << "\n";
	
	MutantStack<std::string> strStack;

	strStack.push("hello");
	strStack.push("there");
	strStack.push("dear");
	strStack.push("Ryan Gosling");

	MutantStack<std::string>::iterator itS = strStack.begin();
	MutantStack<std::string>::iterator iteS = strStack.end();
	iteS--;
	while (itS != iteS)
	{
		std::cout << *itS << (itS == iteS - 1 ? "\n" : ", ");
		++itS;
	}
	iteS++;
	std::cout << *(iteS - 1) << std::endl;
	std::cout << "stack top: " << strStack.top() << std::endl;
	std::cout << "stack size: " << strStack.size() << std::endl;
	return 0;
}
