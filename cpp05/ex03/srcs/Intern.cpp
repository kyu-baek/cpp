#include "../include/Intern.hpp"

Intern::Intern(void)
{}

Intern::Intern(const Intern &intern)
{
	*this = intern;
}

Intern &Intern::operator=(const Intern &intern)
{
	(void)intern;
	return (*this);
}

Intern::~Intern(void){}

Form* Intern::makeShrubberyForm(std::string& target)
{
	return (new ShrubberyCreationForm(target));
}

Form* Intern::makeRobotomyForm(std::string& target)
{
	return (new RobotomyRequestForm(target));
}

Form* Intern::makePresidentialForm(std::string& target)
{
	return (new PresidentialPardonForm(target));
}

const char *Intern::UnformedException::what(void) const throw()
{
	return ("Inter:: Form name doesn’t exist");
}

Form *Intern::makeForm(const std::string &form, std::string target)
{
	std::string list[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	Form *(Intern::*formPtr[3])(std::string&) = {&Intern::makeShrubberyForm, &Intern::makeRobotomyForm, &Intern::makePresidentialForm};
	std::string *ptr = std::find(list, list + 3, form);
	int i = ptr - list;
	// std::cout << ptr << std::endl;
	// std::cout << list << std::endl;
	// std::cout << ptr - list << "    "<< i << std::endl;
	if (i >=0 && i <= 2)
	{
		std::cout << "Intern creates <" << list[i] << ">" << std::endl;
		return	((this->*(formPtr[i]))(target));
	}
	else
		throw Intern::UnformedException();


}