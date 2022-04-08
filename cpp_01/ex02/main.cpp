/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:04:34 by kbaek             #+#    #+#             */
/*   Updated: 2022/04/08 18:54:20 by kbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	const std::string brain = "HI THIS IS BRAIN";
	const std::string *stringPTR = &brain;
	const std::string	&stringREF = brain;

	std::cout << "The memory address of the string variable is	: " << &brain << std::endl;
	std::cout << "The memory address held by stringPTR is 	: " << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF is		: " << &stringREF << std::endl;

	std::cout << "The value of the string variable		: " << brain << std::endl;
	std::cout << "The value pointed to by stringPTR		: " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF		: " << stringREF << std::endl;

	return (0);
}