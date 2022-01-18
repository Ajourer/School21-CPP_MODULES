#include "Phonebook.hpp"

void Phonebook::run() {
	std::string command;
	std::cout << "List of available commands:\n-SEARCH\n-ADD\n-EXIT" << std::endl;
	this->index = 0;
	while (1) {
		std::cout << "Enter the command: " << std::endl;
		std::cin >> command;
		if (std::cin.eof())
			full_exit();
		if (command == "ADD") {
			add(this->contacts, index);
			this->index++;
			if (this->index > 7)
				this->index = 0;
		}
		else if (command == "SEARCH")
			search(this->contacts);
		else if (command == "EXIT")
			full_exit();
	}
}
