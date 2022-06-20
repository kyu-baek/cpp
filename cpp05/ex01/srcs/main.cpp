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
#include "../include/Form.hpp"

int main(void)
{
	std::cout << "--------------Simple Exception Test--------------------" << std::endl;
	try 
	{
		Bureaucrat kyu0("kyu0", 0);
		std::cout << kyu0 << std::endl;
	} 
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}




	std::cout << "\n" << "---------------Form Exception Test---------------------" << std::endl;
	try
	{
		Form tex("tex", 0, 155);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}



	std::cout << "\n"<<"---------Form with Bureucrat Exception Test---------------" << std::endl;
	try
	{
		Bureaucrat sumin("sumin", 30);
		std::cout << sumin << std::endl;

		Bureaucrat sumin2("sumin2", 10);
		std::cout << sumin2 << std::endl;
		Form tex("tex", 20, 15);
		std::cout << tex << std::endl;

		sumin.signForm(tex);
		std::cout << tex << std::endl;
		sumin2.signForm(tex);
		std::cout << tex << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}

