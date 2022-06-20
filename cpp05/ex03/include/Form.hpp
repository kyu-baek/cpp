


#ifndef FORM_HPP
# define FORM_HPP
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form 
{
private:
	const std::string _name;
	bool					_sign;
	const int				_gradeToSign;
	const int				_gradeToExcute;
public:
	Form(void);
	Form(const std::string name, const int gradeToSign, const int gradeToExcute);
	Form(const Form& form);
	Form& operator=(const Form& form);
	virtual ~Form(void);

	const std::string&			getName(void) const;
	bool							   getSign(void) const;
	int									 getGradeToSign(void) const;
	int								     getGradeToExcute(void) const;
	void								beSigned(Bureaucrat const &bure);
	virtual void					execute(Bureaucrat const & executor) const = 0;

	class GradeTooHighException : public std::exception
	{
	public:
		const char *what(void) const throw();
	};
	class GradeTooLowException: public std::exception
	{
		public:
			const char *what(void) const throw();
	};
	class UnsignedException: public std::exception
	{
		public:
			const char *what(void) const throw();
	};
};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif