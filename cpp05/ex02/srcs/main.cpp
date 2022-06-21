/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 21:31:13 by kbaek             #+#    #+#             */
/*   Updated: 2022/06/21 17:24:31 by kbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"

int main(void)
{
	try
	{
		Bureaucrat kyu("kyu", 1);
		std::cout << kyu << std::endl;
		std::cout << "\n" <<"-------------- ShrubberyCreationForm Test--------------------" << std::endl;
		ShrubberyCreationForm sc("ShrubberyCreation");
		kyu.signForm(sc);
		kyu.executeForm(sc);

		std::cout << "\n"  << "-------------- RobotomyRequestForm Test--------------------" << std::endl;
		RobotomyRequestForm rr("RobotomyRequest");
		kyu.signForm(rr);
		kyu.executeForm(rr);

		std::cout << "\n" << "-------------- PresidentialPardonForm Test--------------------" << std::endl;
		PresidentialPardonForm pp("PresidentialPardon");
		kyu.signForm(pp);
		kyu.executeForm(pp);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what();
	}


	std::cout << "\n\n\n";

	try
	{
		Bureaucrat sumin("sumin", 10);
		std::cout << sumin << std::endl;
		std::cout << "\n" <<"--------------Simple ShrubberyCreationForm Test--------------------" << std::endl;
		ShrubberyCreationForm sc("ShrubberyCreation");
		sumin.signForm(sc);
		sumin.executeForm(sc);

		std::cout << "\n"  << "--------------Simple RobotomyRequestForm Test--------------------" << std::endl;
		RobotomyRequestForm rr("RobotomyRequest");
		sumin.signForm(rr);
		sumin.executeForm(rr);

		std::cout << "\n" << "--------------Simple PresidentialPardonForm Test--------------------" << std::endl;
		PresidentialPardonForm pp("PresidentialPardon");
		sumin.signForm(pp);
		sumin.executeForm(pp);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	return 0;

}

