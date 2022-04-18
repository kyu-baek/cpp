/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 20:06:16 by kbaek             #+#    #+#             */
/*   Updated: 2022/04/18 21:22:25 by kbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


int main()
{
	ScavTrap kbaek("kbaek");
	ScavTrap hanna("hanna");
	
	// kbaek.SetAttackDamage(5);
	kbaek.printStatus();
	hanna.printStatus();

	std::cout <<"\nhanna 의 Hit points 가 0이 되거나 kbaek이 energy를 모두 소모하기 전까지 공격!"<< std::endl;
	while (hanna.GetHitPoint() && kbaek.GetDamage())
	{
		kbaek.attack("hanna");
		if (hanna.GetGuardGate() != true && kbaek.GetStatus() && kbaek.SetStatus())
			hanna.takeDamage(kbaek.GetDamage());
	}
	std::cout << std::endl;
	kbaek.printStatus();
	hanna.printStatus();

	std::cout << std::endl;
	hanna.beRepaired(100);
	hanna.printStatus();
	
	std::cout << std::endl;
	hanna.guardGate();
	
	std::cout << "\n다시 공격 시작" << std::endl;
	kbaek.attack("hanna");
	if (hanna.GetGuardGate() != true && kbaek.GetStatus() && kbaek.SetStatus())
		hanna.takeDamage(kbaek.GetDamage());

	std::cout << std::endl;
	kbaek.printStatus();
	hanna.printStatus();
}
