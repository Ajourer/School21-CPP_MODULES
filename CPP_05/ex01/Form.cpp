#include "Form.hpp"

Form::Form(): name("NoName"), gradeToSign(150), gradeToExecute(150), isSigned(false) {}

Form::~Form() {}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : 
	name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute), isSigned(false) {
	if (this->gradeToSign > 150 || this->gradeToExecute > 150)
			throw Form::GradeTooLowException();
	if (this->gradeToSign < 1 || this->gradeToExecute < 1)
		throw Form::GradeTooHighException();
}

Form::Form(const Form& ref): name(ref.name), gradeToSign(ref.gradeToSign), gradeToExecute(ref.gradeToExecute) {
	this->isSigned = ref.isSigned;
}

Form& Form::operator= (const Form& ref) {
	new(this)Form(ref.name, ref.gradeToSign, ref.gradeToExecute);
	return (*this);
}

void Form::beSigned(Bureaucrat &ref) {
	if (ref.getGrade() <= this->gradeToSign && !(this->isSigned))
		this->isSigned = true;
	else
		throw GradeTooLowException();
}

const char *Form::GradeTooHighException::what() const throw() {
	return ("\033[31mGrade is too high\033[0m");
}

const char *Form::GradeTooLowException::what() const throw() {
	return ("\033[31mGrade is too low\033[0m");
}

std::string Form::getName() const {
	return (this->name);
}

bool Form::getIsSigned() const {
	return (this->isSigned);
}

int Form::getGradeToSign() const {
	return (this->gradeToSign);
}

int Form::getGradeToExecute() const {
	return (this->gradeToExecute);
}

std::ostream& operator<< (std::ostream& cout, Form& form) {
	cout << "Form:" << form.getName() << std::endl;
	cout << "Grade To Sign: " << form.getGradeToSign() << std::endl;
	cout << "Grade To Execute: " << form.getGradeToExecute() << std::endl;
	cout << "Status signed: " << form.getIsSigned();
	return (cout);
} 
