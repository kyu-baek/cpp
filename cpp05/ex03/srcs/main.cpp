/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 21:31:13 by kbaek             #+#    #+#             */
/*   Updated: 2022/06/16 21:31:14 by kbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/Intern.hpp"



int main(void)
{
	std::cout << "\n" << "---------------Simple Form Test---------------" <<std::endl;

	Bureaucrat kyu("kyu", 1);
	try
	{
		std::cout << kyu << std::endl;

		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		kyu.signForm(*rrf);
		kyu.executeForm(*rrf);
		delete rrf;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


	std::cout << "\n" << "---------------Every Form Test---------------" <<std::endl;


	try
	{
		Bureaucrat sumin("sumin", 20);
		std::cout << sumin << std::endl;
		
		Intern intern;
		Form *ps = intern.makeForm("shrubbery creation", "ps");
		Form *pr= intern.makeForm("robotomy request", "ps");
		Form *pp= intern.makeForm("presidential pardon", "ps");

		sumin.signForm(*ps);
		sumin.signForm(*pr);
		sumin.signForm(*pp);

		sumin.executeForm(*ps);
		sumin.executeForm(*pr);
		sumin.executeForm(*pp);
		delete ps;
		delete pr;
		delete pp;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


	std::cout << "\n" << "---------------Wrong Form Test---------------" <<std::endl;

	try
	{
		std::cout << kyu << std::endl;

		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("Worng form", "Bender");
		kyu.signForm(*rrf);
		kyu.executeForm(*rrf);
		delete rrf;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	



	return 0;

}

