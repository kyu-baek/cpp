/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 15:42:34 by kbaek             #+#    #+#             */
/*   Updated: 2022/04/12 16:41:40 by kbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>

class Zombie
{
private:
	std::string _name;

public:
	void		announce( void );
	void	setName(std::string name);
	Zombie();
	Zombie(std::string name);
	~Zombie();

};

Zombie* zombieHorde( int N, std::string name );

#endif
