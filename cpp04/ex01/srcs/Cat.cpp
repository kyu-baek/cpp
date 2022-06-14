/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 19:37:21 by kbaek             #+#    #+#             */
/*   Updated: 2022/06/14 20:24:24 by kbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

void	Cat::makeSound(void) const
{
	std::cout << "[miyaaa. miyaaa....]" << std::endl;
}

Brain* Cat::getBrain(void)
{
	return (brain);
}

Cat::Cat(void)
	: Animal(), brain(new Brain())
{
	std::cout << "Cat's Default Constructor called." << std::endl;
	type = "Cat";
}

Cat::Cat(const Cat& cat)
	: brain(new Brain())
{
	std::cout << "Cat's Copy Constructor called." << std::endl;
	*this = cat;
}

Cat::~Cat(void)
{
	std::cout << "Cat's destructor called." << std::endl;
	delete brain;
}

Cat& Cat::operator=(const Cat& cat)
{
	std::cout << "Cat's operator called." << std::endl;
	if (this != &cat)
	{
		Animal::operator=(cat);
		brain->setIdeas(cat.brain->getIdeas());
	}
	return *this;
}