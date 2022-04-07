/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 18:46:46 by kbaek             #+#    #+#             */
/*   Updated: 2022/04/07 17:31:19 by kbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main(void)
{
	std::string command;
	PhoneBook phonebook;

	while (true)
	{
		std::cout << "Which phonebook service?  ";
		if (!(getline(std::cin, command)) || std::cin.eof())
		{
			std::cout << "  " << std::endl;
			break ;
		}
		if (command == "ADD")
			phonebook.add();
		else if (command == "SEARCH")
			phonebook.search();
		else if (command == "EXIT")
			break ;
		else
			std::cout << "We don't have that service..." << std::endl;
	}
	return (0);
}
