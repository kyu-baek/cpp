/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 21:00:46 by kbaek             #+#    #+#             */
/*   Updated: 2022/04/08 21:28:28 by kbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::~HumanB() {}

HumanB::HumanB(std::string name)
	:	
	_name(name),
	_weapon(NULL)
{}


void	HumanB::attack(void)
{
	std::cout << _name << " attacks with their ";
	if (_weapon == NULL)
		std::cout << "no weapon" <<std::endl;
	else
		std::cout << _weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}