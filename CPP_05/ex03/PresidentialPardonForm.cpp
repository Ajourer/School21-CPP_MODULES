#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("Shrubbery", 145, 137){}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form(target, 145, 137){}

PresidentialPardonForm::~PresidentialPardonForm(){}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& ref) {
	this->name = ref.name;
	this->isSigned = ref.isSigned;
	this->gradeToSign = ref.gradeToSign;
	this->gradeToExecute = ref.gradeToExecute;
}

PresidentialPardonForm& PresidentialPardonForm::operator= (const PresidentialPardonForm& ref) {
	this->name = ref.name;
	this->isSigned = ref.isSigned;
	this->gradeToSign = ref.gradeToSign;
	this->gradeToExecute = ref.gradeToExecute;
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if (executor.getGrade() <= this->gradeToExecute && (this->isSigned))
		std::cout << this->getName() << " has been pardoned by Zafod Beeblebrox." << std::endl;
	else
		throw GradeTooLowException();
}
