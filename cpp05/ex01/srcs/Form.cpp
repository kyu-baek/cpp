
#include "../include/Form.hpp"

const char *Form::GradeTooHighException::what(void) const throw()
{
	return ("Form::GradeTooHighException called");
}

const char * Form::GradeTooLowException::what(void) const throw()
{
	return ("Form::GradeTooLowException called");
}

Form::Form(void)
	: _name("unnamed"), _sign(false), _gradeToSign(150), _gradeToExcute(150)
{}

Form::Form(const std::string name, const int gradeToSign, const int gradeToExcute)
	: _name(name), _sign(false), _gradeToSign(gradeToSign), _gradeToExcute(gradeToExcute)
{
	if (gradeToSign < 1 || gradeToExcute < 1)
		throw Form::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExcute > 150)
		throw Form::GradeTooLowException();

}

Form::Form(const Form& form)
	:	_name(form._name), _sign(form._sign), 
		_gradeToSign(form._gradeToSign), _gradeToExcute(form._gradeToExcute)
{
	if (form._gradeToSign < 1 || form._gradeToExcute < 1)
		throw Form::GradeTooHighException();
	else if (form._gradeToSign > 150 || form._gradeToExcute > 150)
		throw Form::GradeTooLowException();
}

Form& Form::operator=(const Form& form)
{
	if (this != &form)
		this->_sign = form._sign;
	return (*this);
}

Form::~Form(void)
{}

const std::string&			Form::getName(void) const
{
	return (_name);
}

bool							   Form::getSign(void) const
{
	return(_sign);
}

int									 Form::getGradeToSign(void) const
{
	return (_gradeToSign);
}

int								     Form::getGradeToExcute(void) const
{
	return (_gradeToExcute);
}

void								Form::beSigned(Bureaucrat bure)
{
	if (bure.getGrade() > getGradeToSign())
	{
		throw Form::GradeTooLowException();
	}
	else 
		this->_sign = true;

}

std::ostream &operator<<(std::ostream &os, const Form &form)
{
	os << "<" << form.getName() << "form getSign <" << form.getSign() << ">, form gradeToSign <" << form.getGradeToSign() << "> form gradeToExcute <" << form.getGradeToExcute() << ">.";
	return (os);
}
