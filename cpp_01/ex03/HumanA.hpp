/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 20:52:37 by kbaek             #+#    #+#             */
/*   Updated: 2022/04/08 21:33:13 by kbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
- Weapon, name을 필드로 가지며 생성자에서 Weapon을 사용
- attack : Weapon.type을 사용하여 공격하는 함수
*/

#ifndef		HUMANA_HPP
# define	HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA
{
private:
	std::string _name;
	Weapon		&_weapon;
public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA(void);
	void	attack(void);
};

#endif