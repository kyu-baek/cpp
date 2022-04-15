/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 18:00:24 by kbaek             #+#    #+#             */
/*   Updated: 2022/04/15 21:38:59 by kbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	_hit	= 100;
	_energy = 100;
	_damage	= 30;
	std::cout << "FragTrap default constructor called" << std::endl;
	//std::cout << typeid(*this).name() << std::endl;
}

FragTrap::FragTrap(std::string name)
	: ClapTrap(name)
{
	_hit	= 100;
	_energy = 100;
	_damage	= 30;
	std::cout << _name << " : FragTrap std::string constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& frag)
	: ClapTrap(frag)
{
	std::cout << _name << " : FragTrap copy constructor called" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << _name  << " : FragTrap destructor called " << std::endl;

}

FragTrap& FragTrap::operator=(const FragTrap &frag)
{
	if (this != &frag)
	{
		_name = frag._name;
		_hit = frag._hit;
		_energy = frag._energy;
		_damage = frag._damage;	
	}
	std::cout << _name  << " : FragTrap operator called " << std::endl; 
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	if (_energy > 0)
	{
		_energy -= 1;
		std::cout << "FragTrap " << _name << " high fives! hahahahahahahahahahahah" << std::endl;
	}
	else
		std::cout << "FragTrap " << _name << " has no energy, they can not say high fives" << std::endl;
	
}