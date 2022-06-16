/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 21:26:33 by kbaek             #+#    #+#             */
/*   Updated: 2022/06/16 18:05:41 by kbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain's Default Constructor called." << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = "aa";

}

Brain::Brain(const Brain &brain)
{
	std::cout << "Brain's Copy Constructor called." << std::endl;
	*this = brain;
}

Brain& Brain::operator=(const Brain &brain)
{
	std::cout << "brain's operator called." << std::endl;
	if (this != &brain)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = brain._ideas[i];
	}
	return *this;
}

Brain::~Brain(void)
{
	std::cout << "Brain's destructor called." << std::endl;

}

const std::string *Brain::getIdeas(void)
{
	return _ideas;
}

void Brain::setIdeas(const std::string *ideas)
{	
	for (int i = 0; i < 100; i++)
		if (!ideas[i].empty())
			this->_ideas[i] = ideas[i];
}

void	Brain::insideBrain(void)
{
	for (int count = 0; count < 100 && !_ideas[count].empty(); count++)
	{
		std::cout << _ideas[count] << std::endl;
	}
}
