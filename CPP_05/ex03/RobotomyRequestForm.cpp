#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(): Form("Robotomy", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form(target, 72, 45) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& ref) {
	this->name = ref.name;
	this->isSigned = ref.isSigned;
	this->gradeToSign = ref.gradeToSign;
	this->gradeToExecute = ref.gradeToExecute;
}

RobotomyRequestForm& RobotomyRequestForm::operator= (const RobotomyRequestForm& ref) {
	this->name = ref.name;
	this->isSigned = ref.isSigned;
	this->gradeToSign = ref.gradeToSign;
	this->gradeToExecute = ref.gradeToExecute;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
	if (executor.getGrade() <= this->gradeToExecute && (this->isSigned))
	{
		srand(time(NULL));
		short i = rand() % 2;
		if (i)
			std::cout << "TRRR TRRR BZZZZZJ, " << this->getName() << " has been robotomized!" << std::endl;
		else
			std::cout << "Drilling ERROR occurred" << std::endl;
	}
	else
		throw GradeTooLowException();
}
