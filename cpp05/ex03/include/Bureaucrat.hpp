/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 21:33:34 by kbaek             #+#    #+#             */
/*   Updated: 2022/06/16 21:34:38 by kbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	const std::string	_name;
	int		_grade;

public:
	Bureaucrat(void);
	Bureaucrat(const std::string name, int grade);
	Bureaucrat(const Bureaucrat& bure);
	Bureaucrat& operator=(const Bureaucrat &bure);
	~Bureaucrat(void);

	const std::string&		getName(void) const;
	int								getGrade(void) const;
	void							incrementGrade(void);
	void							decrementGrade(void);
	void					signForm(Form &form) const;
	void					executeForm(Form const &form) const;

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

};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bure);

#endif