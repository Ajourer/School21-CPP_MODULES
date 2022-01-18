#include "Contact.hpp"
#include "Phonebook.hpp"

int ft_stoi(std::string s)
{
	int i = 0;
	int res = 0;
	if (s[0] != '+' && s[0] != '-' && (s[0] < '0' || s[0] > '9'))
		return (-1);
	if (s[i] == '-' || s[i] == '+')
		i++;
	while (s[i] >= '0' && s[i] <= '9')
	{
		res = (res * 10) + s[i] - '0';
		i++;
	}
	if (s[0] == '-')
		res = -res;
	return (res);
}

void print_line(std::string s) {
	int i = 0;
	if (s.length() > 10)
	{
		while (i < 9)
			std::cout << s[i++];
		std::cout << ".";
	}
	else if (s.length() < 10)
	{
		i = 10 - s.length();
		while (i-- > 0)
			std::cout << " ";
		std::cout << s;
	}
	else
		std::cout << s;
}

void	search(Contact contact[8]) {
	int i = -1;
	std::string s_index;
	int index;

	std::cout << "    index |first name| last name|  nickname" << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
	while (!contact[++i].is_empty() && i < 8)
	{
		std::cout << "         " << i << "|";
		print_line(contact[i].get_first_name());
		std::cout << "|";
		print_line(contact[i].get_last_name());
		std::cout << "|";
		print_line(contact[i].get_nickname());
		std::cout << std::endl;
	}
	std::cout << "Select the user (id) > ";
	std::cin >> s_index;
	index = ft_stoi(s_index);
	if (std::cin.eof())
	{
		std::cout << "Error: unexpected EOF" << std::endl;
		exit(1);
	}
	else if ((std::cin.fail()) || index > 7 || index < 0)
	{
		std::cout << "Contact does not exist" << std::endl;
		return ;
	}
	else if (!contact[index].is_empty())
	{
		std::cout << "first name:     ";
		std::cout << contact[index].get_first_name() << std::endl;
		std::cout << "last name:      ";
		std::cout << contact[index].get_last_name() << std::endl;
		std::cout << "nickname:       ";
		std::cout << contact[index].get_nickname() << std::endl;
		std::cout << "phone number:   ";
		std::cout << contact[index].get_phone_number() << std::endl;
		std::cout << "darkest secret: ";
		std::cout << contact[index].get_darkest_secret() << std::endl;
	}
	else
		std::cout << "Empty contact" << std::endl;
}

void	add(Contact contact[8], int index) {
	std::string data;

	for (int i = 0; i < 8; i++) {
		if (contact[i].is_empty()) {
			index = i;
			break ;
		}
	}
	std::cout << "enter the first name > ";
	std::cin >> data;
	contact[index].set_first_name(data);
	std::cout << "enter the last name > ";
	std::cin >> data;
	contact[index].set_last_name(data);
	std::cout << "enter the nickname > ";
	std::cin >> data;
	contact[index].set_nickname(data);
	std::cout << "enter the phone number > ";
	std::cin >> data;
	contact[index].set_phone_number(data);
	std::cout << "enter the darkest secret > ";
	std::cin >> data;
	contact[index].set_darkest_secret(data);
}

int		full_exit(void) {
	std::cout << "See you!" << std::endl;
	exit(0);
}

int		main() {
	Phonebook phonebook;
	phonebook.run();
	return (0);
}
