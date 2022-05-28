/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 18:44:20 by kbaek             #+#    #+#             */
/*   Updated: 2022/05/28 20:19:51 by kbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

void	Dog::makeSound(void) const
{
	std::cout << "[Blaff. blaff...]" << std::endl;
}
	
Dog::Dog(void)
	: Animal()
{
	type = "Dog";
	std::cout << "Dog's Default Constructor called." << std::endl;

}

Dog::Dog(const Dog& dog)
{
	std::cout << "Dog's Copy Constructor called." << std::endl;
	*this = dog;
}

Dog::~Dog(void)
{
	std::cout << "Dog's destructor called." << std::endl;

}

Dog& Dog::operator=(const Dog& dog)
{
	std::cout << "Dog's operator called." << std::endl;
	if (this != &dog)
		Animal::operator=(dog);
	return *this;	
}