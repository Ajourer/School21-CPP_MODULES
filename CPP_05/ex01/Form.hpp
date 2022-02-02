#ifndef FORM_H
#define FORM_H

#include <iostream>
#include "Bureaucrat.hpp"

class Form {
	private:
		const std::string name;
		const int gradeToSign;
		const int gradeToExecute;
		bool isSigned;

	public:
		Form();
		~Form();
		Form(std::string name, int gradeToSign, int gradeToExecute);
		Form(const Form& ref);
		Form& operator= (const Form& ref);

		void beSigned(Bureaucrat& ref);

		class GradeTooHighException: public std::exception {
			public:
				const char *what() const throw();
		};

		class GradeTooLowException: public std::exception {
			public:
				const char *what() const throw();
		};

		std::string getName() const;
		bool getIsSigned() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;
};

std::ostream& operator<< (std::ostream& cout, Form& form);

#endif
