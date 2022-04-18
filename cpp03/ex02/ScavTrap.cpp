/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 22:08:30 by kbaek             #+#    #+#             */
/*   Updated: 2022/04/18 21:15:02 by kbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
	: _guardGate(false)
{
	_name	= "test";
	_hit	= 100;
	_energy = 50;
	_damage	= 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
	: ClapTrap(name), _guardGate(false)
{
	_hit	= 100;
	_energy = 50;
	_damage	= 20;
	std::cout << _name << " : ScavTrap std::string constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& scav)
	: ClapTrap(scav)
{
	std::cout << _name << " : ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << _name  << " : ScavTrap destructor called " << std::endl;

}
	
ScavTrap& ScavTrap::operator=(const ScavTrap &scav)
{
	if (this != &scav)
	{
		_name = scav._name;
		_hit = scav._hit;
		_energy = scav._energy;
		_damage = scav._damage;	
	}
	std::cout << _name  << " : ScavTrap operator called " << std::endl; 
	return (*this);
}

void ScavTrap::guardGate()
{
	if (_energy > 0)
	{
		_energy -= 1;
		_guardGate = true;
		std::cout << "****ScavTrap " << _name << " is now in Gate keeper mode****" << std::endl;
	}
	else
		std::cout << "ScavTrap " << _name << " has no energy, they can not in Gate keeper mode" << std::endl;
}

bool ScavTrap::GetGuardGate()
{
	return (_guardGate);
}

void ScavTrap::attack(const std::string& target)
{
	if (_energy > 0)
	{
		_energy -= 1;
		status = 1;
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _damage << " points of damage!" << std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << _name << " has no energy, so they can not do anything!" << std::endl;
		SetAttackDamage(0);
	}
}

