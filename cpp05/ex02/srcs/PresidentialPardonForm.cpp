#include "../include/PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(void)
	: Form("PresidentialPardonForm", 25, 5), _target("unnamed")
{
	std::cout << "def\n" <<std::endl;
}


PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
	: Form("PresidentialPardonForm", 25, 5)
{
	_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &rrf)
	: Form("PresidentialPardonForm", 25, 5)
{
	*this = rrf;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &rrf)
{
	if (this != &rrf)
		Form::operator=(rrf);
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void) {}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
 {
	if (this->getSign() != true)
		throw Form::UnsignedException();
	else if (executor.getGrade() > this->getGradeToExcute())
		throw Form::GradeTooHighException();
	else
	{
		std::cout << "<" << this->_target << "> has been pardoned by Zaphod Beeblebrox." << std::endl;
	}
 }