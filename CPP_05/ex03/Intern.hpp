#ifndef INTERN_H
#define INTERN_H

#include "Form.hpp"

class Intern {
	public:
		Intern();
		~Intern();
		Intern(const Intern& ref);
		Intern& operator= (const Intern& ref);

		Form *shrubbery(const std::string& target);
		Form *robot(const std::string& target);
		Form *president(const std::string& target);
		Form *makeForm(const std::string& nameForm, const std::string& target);
		class WrongTypeFormException : public std::exception {
			public:
				const char* what() const throw();
		};
};

#endif
