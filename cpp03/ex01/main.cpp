/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 20:06:16 by kbaek             #+#    #+#             */
/*   Updated: 2022/04/14 22:00:57 by kbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"



int main()
{
	ClapTrap kbaek("kbaek");
	ClapTrap hanna("hanna");
	
	kbaek.SetAttackDamage(5);
	kbaek.printStatus();
	hanna.printStatus();

	std::cout << std::endl;
	kbaek.attack("hanna");
	hanna.takeDamage(kbaek.GetDamage());
	kbaek.attack("hanna");
	hanna.takeDamage(kbaek.GetDamage());
	kbaek.attack("hanna");
	hanna.takeDamage(kbaek.GetDamage());

	std::cout << std::endl;
	kbaek.printStatus();
	hanna.printStatus();

	std::cout << std::endl;
	hanna.beRepaired(1);
	hanna.printStatus();

}
