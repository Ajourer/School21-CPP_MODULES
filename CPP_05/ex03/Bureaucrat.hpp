#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>

class Form;

class Bureaucrat {
	private:
		std::string	name;
		int			grade;

	public:
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& ref);
		Bureaucrat& operator= (const Bureaucrat& ref);

		class GradeTooHighException: public std::exception {
			public:
				const char* what() const throw();
		};

		class GradeTooLowException: public std::exception {
			public:
				const char* what() const throw();
		};

		void executeForm(const Form &form);
		void signForm(Form &form);
		std::string getName() const;
		int getGrade() const;
		void toHighGrade();
		void toLowGrade();
};

std::ostream& operator<< (std::ostream& cout, const Bureaucrat& ref);

#endif
