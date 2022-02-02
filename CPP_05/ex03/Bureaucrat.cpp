#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(): name("NoName"), grade(150){}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& ref) :
	name(ref.name), grade(ref.grade) {}

Bureaucrat& Bureaucrat::operator= (const Bureaucrat& ref) {
	if (this == &ref)
		return (*this);
	this->name = ref.name;
	this->grade = ref.grade;
	return (*this);
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return ("\033[1;31mGrade is too low\033[0m");
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return ("\033[1;31mGrade is too high\033[0m");
}

std::string Bureaucrat::getName() const {
	return (this->name);
}

int Bureaucrat::getGrade() const {
	return (this->grade);
}

void Bureaucrat::toHighGrade() {
	if (this->grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	this->grade--;
}

void Bureaucrat::toLowGrade() {
	if (this->grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade++;
}

void Bureaucrat::signForm(Form &form) {
	try {
		form.beSigned(*this);
		std::cout << "bureaucrat " << this->getName() <<  " signs form " << form.getName() << std::endl;
	}
	catch (std::exception& ex) {
		std::cout << "\033[31mbureaucrat " << this->getName() << " cannot sign " << form.getName() << " because " << ex.what() << "\033[0m" << std::endl;
	}
}

void Bureaucrat::executeForm(const Form &form) {
	try {
		form.execute(*this);
		std::cout << "The bureaucrat " << this->getName() << " executed the form: " << form.getName() << std::endl;
	}
	catch (std::exception & r) {
		std::cout << "The bureaucrat " << this->getName() << " cannot execute this form, because " << r.what() << std::endl;
	}
}

std::ostream& operator<< (std::ostream& cout, const Bureaucrat& ref) {
	cout << ref.getName() << ", bureaucrat grade " << ref.getGrade();
	return (cout);
}
