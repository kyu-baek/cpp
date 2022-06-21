/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 21:31:13 by kbaek             #+#    #+#             */
/*   Updated: 2022/06/21 16:16:43 by kbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

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

	try
	{
		Bureaucrat kyu151("kyu151", 151);
		std::cout << kyu151 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n";
	std::cout << "--------------Increment  Test--------------------" << std::endl;

	try
	{
		Bureaucrat cal("cal", 150);
		std::cout << cal << std::endl;
		for (int i = 0; i < 150; i++) 
		{
			std::cout << i << "'st incrementing" << std::endl;
			cal.incrementGrade();
			std::cout << cal << "\n" << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n";
	std::cout << "--------------Decrement  Test--------------------" << std::endl;
	try 
	{
		Bureaucrat sumin("sumin", 1);
		std::cout << sumin << std::endl;
		for (int i = 0; i < 150; i++) 
		{
			std::cout << i << "'st decrementing" << std::endl;
			sumin.decrementGrade();
			std::cout << sumin << "\n" << std::endl;
		}
	} 
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}