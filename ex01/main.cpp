/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 18:46:46 by kbaek             #+#    #+#             */
/*   Updated: 2022/04/05 22:32:42 by kbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string	Contact::get_input(std::string status)
{
	std::string	command;

	while (true)
	{
		std::cout << "What is your " << status << "?" << std::endl;
		std::cout << "> ";

		if (!(getline(std::cin, command)) || std::cin.eof())
		{
			std::cout << "see yaa." << std::endl;
			exit(1);
		}
		if (command == "")
			std::cout << status << " can not be empty!" << std::endl;
		else
			break ;
	}
	return (command);
}

PhoneBook::PhoneBook()
{
	std::cout << "PhoneBook() : 생성자" << std::endl;
	_count = 0;

}

PhoneBook::~PhoneBook()
{
	// for (uint i = 0; i < _count; i++)
	// 	delete _contacts[i];
}

void	Contact::set_input(void)
{
	_first_name = get_input("first name");
	_last_name = get_input("last name");
	_nickname = get_input("nickname");
	_phone_number = get_input("phone number");
	_darkest_secret = get_input("darkest secret");
}

void PhoneBook::add(void)
{
	if (_count < SIZE)
	{
		_contacts[_count].set_input();
		_count += 1;
	}
	else
		std::cout << "phonebook is full..." << std::endl;
}


std::string	str_trim(std::string str)
{
    if (str.size() > 10)
        return (str.substr(0, 9) + ".");
    return (str);
}

void	Contact::get_phonebook(int i) const
{
	std::cout << '|' << std::setw(10) << std::internal << i << '|'
		<< std::setw(10) << std::right << str_trim(_first_name) << '|' 
		<< std::setw(10) << std::right << str_trim(_last_name) << '|' 
		<< std::setw(10) << std::right << str_trim(_nickname) << '|' 
		<< std::endl;
}

void	PhoneBook::_print_phonebook(void) const
{
	std::string	command;
	int num;
	
	while (true)
	{
		std::cout << "Which index do you want to search?" << std::endl;
		std::cout << "> ";

		if (!(getline(std::cin, command)) || std::cin.eof())
		{
			std::cout << "see yaa." << std::endl;
			exit(1);
		}
		if (command == "")
			std::cout << " can't be empty!" << std::endl;
		else if (command.size() > 1 || (num = atoi(command.c_str())) > SIZE)
			std::cout << " can't be more than 8!" << std::endl;
		else
		{
			_contacts[num - 1].get_phonebook(num);
			break ;
		}
	}
}

void PhoneBook::search(void) const
{
	if (_count == 0)
	{
		std::cout << "Nothing! (Make some friends...)" << std::endl;
		return ;
	}
	std::cout << '|' << std::right << "   index  " << '|' << "first Name" << '|'
		 << "last  name" << '|' << " nickname " << '|' << std::endl;
	for (int i = 0; i < _count; i++)
		_contacts[i].get_phonebook(i + 1);
	_print_phonebook();
}

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
	std::cout << "see yaa." << std::endl;
	return (0);
}