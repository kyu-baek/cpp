/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 22:08:27 by kbaek             #+#    #+#             */
/*   Updated: 2022/04/15 20:32:27 by kbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
public:
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& scav);
	virtual ~ScavTrap(void);
	
	ScavTrap& operator=(const ScavTrap &scav);
	void guardGate();
	bool GetGuardGate();
	void attack(const std::string& target);
protected:
	bool _guardGate;
};

#endif