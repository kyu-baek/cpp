/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 20:06:16 by kbaek             #+#    #+#             */
/*   Updated: 2022/04/18 21:22:05 by kbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"



int main()
{
	ClapTrap kbaek("kbaek");
	ClapTrap hanna("hanna");
	
	kbaek.printStatus();
	hanna.printStatus();

	std::cout << std::endl;
	// while (hanna.GetHitPoint())
	// {
	// 	kbaek.attack("hanna");
	// 	if (kbaek.status == 1 && kbaek.SetStatus())
	// 		hanna.takeDamage(kbaek.GetDamage());
	// }
	
	kbaek.attack("hanna");
	if (kbaek.GetStatus() == 1 && kbaek.SetStatus())
		hanna.takeDamage(kbaek.GetDamage());
	kbaek.attack("hanna");
	if (kbaek.GetStatus() == 1 && kbaek.SetStatus())
		hanna.takeDamage(kbaek.GetDamage());
	kbaek.attack("hanna");
	if (kbaek.GetStatus() == 1 && kbaek.SetStatus())
		hanna.takeDamage(kbaek.GetDamage());

	std::cout << std::endl;
	kbaek.printStatus();
	hanna.printStatus();

	std::cout << std::endl;
	hanna.beRepaired(1);
	hanna.printStatus();

}
