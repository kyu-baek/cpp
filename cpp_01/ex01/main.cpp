/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 15:42:30 by kbaek             #+#    #+#             */
/*   Updated: 2022/04/08 18:02:45 by kbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie *zombie = zombieHorde(10, "zombie");
	if (!zombie)
		return (1);
	for (int i = 0; i < 10; i++)
		zombie[i].announce();

	delete[] (zombie);
	std::cout << "**All died**" << std::endl;

	return (0);
}