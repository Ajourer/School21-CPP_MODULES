#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"
#include <fstream>


ShrubberyCreationForm::ShrubberyCreationForm(): Form("Shrubbery", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form(target, 145, 137) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& ref) {
	this->name = ref.name;
	this->isSigned = ref.isSigned;
	this->gradeToSign = ref.gradeToSign;
	this->gradeToExecute = ref.gradeToExecute;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator= (const ShrubberyCreationForm& ref) {
	this->name = ref.name;
	this->isSigned = ref.isSigned;
	this->gradeToSign = ref.gradeToSign;
	this->gradeToExecute = ref.gradeToExecute;
	return(*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
	if (executor.getGrade() <= this->gradeToExecute && this->isSigned)
	{
		std::ofstream file;
		std::string path_file = this->name + "_shrubbery";
		file.open(path_file);
		if (file.is_open())
		{
			file << "       _-_" << std::endl;
			file << "    /~~   ~~\\" << std::endl;
			file << " /~~         ~~\\" << std::endl;
			file << "{               }" << std::endl;
			file << " \\  _-     -_  /" << std::endl;
			file << "   ~  \\\\ //  ~" << std::endl;
			file << "_- -   | | _- _" << std::endl;
			file << "  _ -  | |   -_" << std::endl;
			file << "      // \\\\" << std::endl;
			std::cout << "Created file: " << path_file << std::endl;
		}
		file.close();
	}
	else
		throw GradeTooLowException();
} 
