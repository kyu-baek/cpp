/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 20:06:52 by kbaek             #+#    #+#             */
/*   Updated: 2022/04/14 17:39:48 by kbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap {

private:
	std::string _name;
	int			_hit;
	int			_energy;
	int			_damage;

public:
	ClapTrap(void);
	ClapTrap(std::string _name);
	~ClapTrap(void);

	ClapTrap& operator=(const ClapTrap &clap);
	
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

};

#endif