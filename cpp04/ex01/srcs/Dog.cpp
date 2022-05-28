/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 18:44:20 by kbaek             #+#    #+#             */
/*   Updated: 2022/05/28 22:42:13 by kbaek            ###   ########.fr       */
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
	: Animal(), brain(NULL)
{
	std::cout << "Dog's Default Constructor called." << std::endl;
	type = "Dog";
	brain = new Brain;
}

Dog::Dog(const Dog& dog)
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
		Animal::operator=(dog);
	return *this;	
}