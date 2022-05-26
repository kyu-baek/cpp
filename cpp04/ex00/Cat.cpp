/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 19:37:21 by kbaek             #+#    #+#             */
/*   Updated: 2022/05/26 19:43:51 by kbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Cat.hpp"

void	Cat::makeSound(void)
{
	std::cout << "miyaaa." << std::endl;
}

Cat::Cat(void)
	: Animal()
{
	type = "Cat";
	std::cout << "Cat's Default Constructor called." << std::endl;
}

Cat::Cat(const Cat& cat)
{
	*this = cat;
	std::cout << "Cat's Copy Constructor called." << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Cat's destructor called." << std::endl;
}

Cat& Cat::operator=(const Cat& cat)
{
	std::cout << "Cat's operator called." << std::endl;
	if (this != &cat)
		Animal::operator=(cat);
	return *this;
}