/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 19:20:27 by kbaek             #+#    #+#             */
/*   Updated: 2022/05/28 20:19:55 by kbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
	: type("WrongAnimal")
{
	std::cout << "WrongAnimal's Default Constructor called." << std::endl;
}
WrongAnimal::WrongAnimal(WrongAnimal const &wronganimal)
{
	std::cout << "WrongAnimal's Copy Constructor called." << std::endl;
	*this = wronganimal;
}
WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal's destructor called." << std::endl;
}
WrongAnimal& WrongAnimal::operator=(const  WrongAnimal & wani)
{
	std::cout << "WrongAnimal's operator called." << std::endl;
	if (this != &wani)
		this->type = wani.type;
	return *this;
}

std::string WrongAnimal::getType(void) const
{
	return this->type;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "[WrongAnimal sound...]" << std::endl;

}