/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 19:06:59 by kbaek             #+#    #+#             */
/*   Updated: 2022/06/16 18:09:43 by kbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

Animal::Animal(void)
	: type("Animal")
{
	std::cout << "Animal's Default Constructor called." << std::endl;
}

Animal::Animal(const Animal& ani)
{
	std::cout << "Animal's Copy Constructor called." << std::endl;
	*this = ani;
}
Animal::~Animal(void)
{
	std::cout << "Animal's destructor called." << std::endl;
}
	
Animal& Animal::operator=(const Animal &ani)
{
	std::cout << "Animal's operator called." << std::endl;
	if (this != &ani)
		this->type = ani.type;
	return *this;
}

std::string Animal::getType(void) const
{
	return this->type;
}
