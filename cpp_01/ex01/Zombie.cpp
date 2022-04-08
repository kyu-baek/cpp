/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 16:30:42 by kbaek             #+#    #+#             */
/*   Updated: 2022/04/08 17:56:52 by kbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){};

Zombie::Zombie(std::string name)
{
	_name = name;
	std::cout << _name << " is born." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << _name << " is died." << std::endl;
}
void	Zombie::setName(std::string name)
{
	_name = name;
}
void	Zombie::announce(void)
{
	std::cout << _name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}