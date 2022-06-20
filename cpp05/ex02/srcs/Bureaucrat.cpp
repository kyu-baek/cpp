
#include "../include/Bureaucrat.hpp"

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Bureaucrat::Grade Too High");
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Bureaucrat::Grade Too Low");
}

Bureaucrat::Bureaucrat(void)
	: _name("unnamed"), _grade(150)
{}

Bureaucrat::Bureaucrat(const std::string name, int grade)
	: _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& bure)
	: _name(bure._name)
{
	int grade(bure.getGrade());
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade = grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &bure)
{
	if (this != &bure)
		this->_grade = bure._grade;
	return (*this);
}

const std::string&	Bureaucrat::getName(void) const
{
	return (_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (_grade);
}

void	Bureaucrat::incrementGrade(void)
{
	if (this->_grade > 1)
		this->_grade -= 1;
	else
		throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::decrementGrade(void)
{
	if (this->_grade < 150)
		this->_grade += 1;
	else
		throw Bureaucrat::GradeTooLowException();
}

void		Bureaucrat::signForm(Form &form) const
{
	try
	{
		form.beSigned(*this);
		std::cout << "<" << _name << "> signs <" << form.getName() << ">" << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cout << "<" << _name << "> couldn’t sign <" << form.getName() << "> because <" << e.what() << ">" << std::endl;
	}
	
}

void	Bureaucrat::executeForm(Form const &form) const
{
	try
	{
		form.execute(*this);		
		std::cout << "<" << _name << "> executed <" << form.getName() << ">" << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cout << "<" << _name << "> couldn’t executed <" << form.getName() << "> because <" << e.what() << ">" << std::endl;

	}
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bure)
{
  os << "<" << bure.getName() << ">, bureaucrat grade <" << bure.getGrade()
     << ">.";
  return (os);
}


Bureaucrat::~Bureaucrat(void)
{}