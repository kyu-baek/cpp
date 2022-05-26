/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:27:54 by kbaek             #+#    #+#             */
/*   Updated: 2022/05/26 19:41:56 by kbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class Dog: public Animal
{
public:
	void	makeSound(void);
	Dog(void);
	Dog(const Dog& dog);
	~Dog(void);
	Dog& operator=(const Dog& dog);

};


#endif