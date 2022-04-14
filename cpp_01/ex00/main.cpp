/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 15:42:30 by kbaek             #+#    #+#             */
/*   Updated: 2022/04/14 16:14:39 by kbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie *zombie1 = newZombie("kbaek1");
	Zombie zombie2("kbaek2");
	randomChump("kbaek3");

	zombie1->announce();
	zombie2.announce();

	delete (zombie1);
	return (0);
}