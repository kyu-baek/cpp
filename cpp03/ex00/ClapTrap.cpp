/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 16:20:23 by kbaek             #+#    #+#             */
/*   Updated: 2022/04/14 17:42:00 by kbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
	: _name(_name), _hit(10), _energy(10), _damage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string _name)
	: _name(_name), _hit(10), _energy(10), _damage(0)
{
	std::cout << _name << " : ClapTrap std::string constructor called" << std::endl;
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

void ClapTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _damage << " points of damage!" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{

}
void ClapTrap::beRepaired(unsigned int amount)
{
	
}