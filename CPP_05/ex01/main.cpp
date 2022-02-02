#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat stive("Stive", 11);

	Form form("FORM", 10, 10);
	std::cout << stive << std::endl;
	std::cout << form << std::endl;
	std::cout << "========================" << std::endl;
	try
	{
		stive.signForm(form);
	}
	catch (std::exception& ex)
	{
		ex.what();
	}
	std::cout << "========================" << std::endl;
	try
	{
		Form r2d2("document", 10, 10);
		Bureaucrat alex("Alex", 1);
		alex.signForm(r2d2);
	}
	catch (std::exception & ex)
	{
		std::cout << ex.what() << std::endl;
	}
	std::cout << "========================" << std::endl;
	try
	{
		Form r2d2("forma", 170, 10);
		Bureaucrat alex("Alex", 1);
		alex.signForm(r2d2);
	}
	catch (std::exception & r)
	{
		std::cout << r.what() << std::endl;
	}

	return 0;
}
