
#include "../include/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void)
	: Form("ShrubberyCreationForm", 145, 137), _target("unnamed")
{}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
	: Form("ShrubberyCreationForm", 145, 137)
{
	_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &scf)
	: Form("ShrubberyCreationForm", 145, 137)
{
	*this = scf;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &scf)
{
	if (this != &scf)
		Form::operator=(scf);
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
 {
	if (this->getSign() != true)
		throw Form::UnsignedException();
	else if (executor.getGrade() > this->getGradeToExcute())
		throw Form::GradeTooHighException();
	else
	{
		std::string	outfile_name = this->_target;
		outfile_name += "_shrubbery";
		std::fstream outfile(outfile_name, std::ios::out | std::ios::trunc);
		if (!outfile.is_open())
		{
			std::cout << "Error: Files not created" << std::endl;
			return;
		}       
		outfile << "\n\
								v .   ._, |_  .,\n\
							`-._/  .   /    |/_\n\
								\\  _, y |      //\n\
							__.___\\, \\/ -.||\n\
							`7-,--.`._||      / / ,\n\
							/'     `-. `    ./ / |/_.\n\
										|    |//\n\
										|_    /\n\
										|-   |\n\
										|   =|\n\
										|    |\n\
    	--------------------,  . --------._\n";
		std::cout << "ShrubberyCreationForm excuted" << std::endl;
		outfile.close();
	}
 }