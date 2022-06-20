#ifndef INTERN_HPP
# define INTERN_HPP
#include <iostream>

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Form;

class Intern
{
private:
	Form* makeShrubberyForm(std::string& target);
	Form* makeRobotomyForm(std::string& target);
	Form* makePresidentialForm(std::string& target);
	
public:
	Intern(void);
	Intern(const Intern &intern);
	Intern &operator=(const Intern &intern);
	~Intern(void);

	Form *makeForm(const std::string &form, const std::string &target);

	class UnformedException: public std::exception
	{
		public:
			const char *what(void) const throw();
	};

};

#endif