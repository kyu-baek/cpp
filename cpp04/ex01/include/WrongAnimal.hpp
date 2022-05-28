/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:19:03 by kbaek             #+#    #+#             */
/*   Updated: 2022/05/28 19:41:51 by kbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>

class WrongAnimal {

protected:
	std::string type;

public:
	WrongAnimal(void);
	WrongAnimal(WrongAnimal const &wronganimal);
	~WrongAnimal(void);
	WrongAnimal& operator=(const  WrongAnimal & wani);

	std::string getType(void) const;
	void	makeSound(void) const;
};


#endif