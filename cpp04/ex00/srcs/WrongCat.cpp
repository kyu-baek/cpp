/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 19:38:40 by kbaek             #+#    #+#             */
/*   Updated: 2022/05/28 20:19:58 by kbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"

void	WrongCat::makeSound(void) const
{
	std::cout << "[lejkfsljf....]" << std::endl;
}

WrongCat::WrongCat(void)
	: WrongAnimal()
{
	type = "WrongCat";
	std::cout << "WrongCat's Default Constructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat& cat)
{
	std::cout << "WrongCat's Copy Constructor called." << std::endl;
	*this = cat;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat's destructor called." << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& cat)
{
	std::cout << "WrongCat's operator called." << std::endl;
	if (this != &cat)
		WrongAnimal::operator=(cat);
	return *this;
}