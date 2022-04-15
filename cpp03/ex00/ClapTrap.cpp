/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 16:20:23 by kbaek             #+#    #+#             */
/*   Updated: 2022/04/15 16:55:51 by kbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
	: _name("test"), _hit(10), _energy(10), _damage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string _name)
	: _name(_name), _hit(10), _energy(10), _damage(0)
{
	std::cout << _name << " : ClapTrap std::string constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & clap)
	: _name(clap._name), _hit(clap._hit), _energy(clap._energy), _damage(clap._damage)
{
	std::cout << _name << " : ClapTrap copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &clap)
{
	if (this != &clap)
	{
		_name = clap._name;
		_hit = clap._hit;
		_energy = clap._energy;
		_damage = clap._damage;
	}
	std::cout << _name  << " : ClapTrap operator called " << std::endl; 
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << _name  << " : ClapTrap destructor called " << std::endl;
}

void	ClapTrap::SetAttackDamage(unsigned int da)
{
	_damage = da;
}

void ClapTrap::attack(const std::string& target)
{
	if (_energy > 0)
	{
		_energy -= 1;
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _damage << " points of damage!" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << _name << " has no energy, so they can not do anything!" << std::endl;
		SetAttackDamage(0);
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > _hit)
		_hit = 0;
	else
		_hit -= amount;
	std::cout << "ClapTrap " << _name << " taken " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy > 0)
	{
		_hit += amount;
		_energy -= 1;
		std::cout << "ClapTrap " << _name << "is repaired " << amount << " of hit point!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << " has no energy, so they can not do anything!" << std::endl;
}

unsigned int ClapTrap::GetDamage(void)
{
	return (_damage);
}

unsigned int ClapTrap::GetHitPoint(void)
{
	return (_hit);
}

void	ClapTrap::printStatus()
{
	std::cout << "****ClapTrap " << _name << " has " << _hit << " Hit points, " << _energy << \
			" Energy points, " << _damage << " Attack damage ****" << std::endl;
}
