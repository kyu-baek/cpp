#include "Intern.hpp"

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

Form *Intern::makeForm(const std::string &form, const std::string &target)
{}