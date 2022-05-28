/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 21:26:33 by kbaek             #+#    #+#             */
/*   Updated: 2022/05/28 22:07:51 by kbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "../include/Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain's Default Constructor called." << std::endl;

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

std::string Brain::getIdeas(void) const
{
	return *_ideas;
}

void Brain::setIdeas(std::string *ideas)
{	
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = ideas[i];

	// for (int i = 0; i < 100; i++)
	// 	if (!ideas[i].empty())
	// 		this->_ideas[i] = ideas[i];
}