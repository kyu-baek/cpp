/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 20:06:52 by kbaek             #+#    #+#             */
/*   Updated: 2022/04/18 22:30:26 by kbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap {

protected:
	std::string		_name;
	unsigned int	_hit;
	unsigned int	_energy;
	unsigned int	_damage;
	int 			status;	

public:
	ClapTrap(void);
	ClapTrap(std::string _name);
	ClapTrap(const ClapTrap & clap);
	~ClapTrap(void);

	ClapTrap& operator=(const ClapTrap &clap);
	
	void 			attack(const std::string& target);
	void 			takeDamage(unsigned int amount);
	void 			beRepaired(unsigned int amount);
	unsigned int 	GetDamage(void);
	unsigned int	GetHitPoint(void);
	int				GetStatus(void);
	void			printStatus();
	void			SetAttackDamage(unsigned int hit);
	int				SetStatus(void);
};

#endif