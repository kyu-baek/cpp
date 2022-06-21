
#include "../include/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)
	: Form("RobotomyRequestForm", 72, 45), _target("unnamed")
{}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
	: Form("RobotomyRequestForm", 72, 45)
{
	_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &rrf)
	: Form("RobotomyRequestForm", 72, 45)
{
	*this = rrf;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &rrf)
{
	if (this != &rrf)
		Form::operator=(rrf);
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
 {
	if (this->getSign() != true)
		throw Form::UnsignedException();
	else if (executor.getGrade() > this->getGradeToExcute())
		throw Form::GradeTooHighException();
	else
	{
		std::cout << "drrrrrrrrilling drrrrrrrrilling drrrrrrrrilling" << std::endl;
		srand(time(NULL));
		if (rand() % 2)
			std::cout <<"<" << this->_target << "> has been robotomized" << std::endl;
		else
			std::cout << "<" << this->_target << "> has been robotomy failed" << std::endl;
	}
 }
