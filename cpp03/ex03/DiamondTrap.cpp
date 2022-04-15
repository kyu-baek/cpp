/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 20:07:27 by kbaek             #+#    #+#             */
/*   Updated: 2022/04/15 21:36:14 by kbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/*
• Name, which is passed as parameter to a constructor
• ClapTrap::name (parameter of the constructor + "_clap_name" suffix)
• Hit points (FragTrap)
• Energy points (ScavTrap)
• Attack damage (FragTrap)
• attack() (Scavtrap)
*/

DiamondTrap::DiamondTrap(void)
	: ClapTrap(), FragTrap(), ScavTrap()
{
	_hit = 100;
	_energy = 50;
	_damage = 30;
	std::cout << "DiamondTrap default constructor called" << std::endl;

}

DiamondTrap::DiamondTrap(std::string name)
	: ClapTrap(name + "_clap_name"), FragTrap(), ScavTrap()
{
	DName = name;
	_hit = 100;
	_energy = 50;
	_damage = 30;
	std::cout << DName << " : DiamondTrap std::string constructor called" << std::endl;

}

DiamondTrap::DiamondTrap(const DiamondTrap& diamond)
	: ClapTrap(diamond), FragTrap(diamond), ScavTrap(diamond)
{
	std::cout << DName << " : DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << DName  << " : DiamondTrap destructor called " << std::endl;
}
	
DiamondTrap& DiamondTrap::operator=(const DiamondTrap &diamond)
{
	if (this != &diamond)
	{
		DName = diamond.DName;
		_hit = diamond._hit;
		_energy = diamond._energy;
		_damage = diamond._damage;	
	}
	std::cout << DName  << " : DiamondTrap operator called " << std::endl; 
	return (*this);
}

void DiamondTrap::whoAmI()
{
	std::cout << "I am " << DName << " and my ClapTrap name is " << getCName() << std::endl;
}