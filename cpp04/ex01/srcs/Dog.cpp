/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 18:44:20 by kbaek             #+#    #+#             */
/*   Updated: 2022/06/14 20:14:27 by kbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

void	Dog::makeSound(void) const
{
	std::cout << "[Blaff. blaff...]" << std::endl;
}

Brain* Dog::getBrain(void)
{
	return (brain);
}

Dog::Dog(void)
	: Animal(), brain(new Brain())
{
	std::cout << "Dog's Default Constructor called." << std::endl;
	type = "Dog";
}

Dog::Dog(const Dog& dog)
	: brain(new Brain())
{
	std::cout << "Dog's Copy Constructor called." << std::endl;
	*this = dog;
}

Dog::~Dog(void)
{
	std::cout << "Dog's destructor called." << std::endl;
	delete brain;
}

Dog& Dog::operator=(const Dog& dog)
{
	std::cout << "Dog's operator called." << std::endl;
	if (this != &dog)
	{
		Animal::operator=(dog);
		brain->setIdeas(dog.brain->getIdeas());
	}
	return *this;	
}