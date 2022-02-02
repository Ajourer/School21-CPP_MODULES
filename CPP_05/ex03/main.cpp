#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{

	Bureaucrat stive("Stive", 1);
	Bureaucrat john("John", 150);
	std::cout << stive << std::endl;
	std::cout << john << std::endl;
	Intern intern;

	Form* form;
	try 
	{
		form = intern.makeForm("presidential request", "Bender");
		std::cout << *form << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try 
	{
		stive.signForm(*form);
		form->execute(stive);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "==============================" << std::endl;
	try 
	{
		form = intern.makeForm("bibaboba", "Bender");
		std::cout << *form << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
