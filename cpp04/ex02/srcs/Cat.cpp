/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 19:37:21 by kbaek             #+#    #+#             */
/*   Updated: 2022/06/16 17:59:09 by kbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

void	Cat::makeSound(void) const
{
	std::cout << "[miyaaa. miyaaa....]" << std::endl;
}

Brain* Cat::getBrain(void) const
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
	: Animal()
{
	std::cout << "Cat's Copy Constructor called." << std::endl;
	*this = cat;
}

Cat& Cat::operator=(const Cat& cat)
{
	std::cout << "Cat's operator called." << std::endl;
	if (this != &cat)
	{
		Animal::operator=(cat);
		delete brain;
		brain = new Brain();
		brain->setIdeas(cat.brain->getIdeas());
	}
	return *this;
}

Cat::~Cat(void)
{
	std::cout << "Cat's destructor called." << std::endl;
	delete brain;
}
