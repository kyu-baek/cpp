/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:27:54 by kbaek             #+#    #+#             */
/*   Updated: 2022/05/28 22:41:19 by kbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{
private:
	Brain* brain;
public:
	void	makeSound(void) const;
	Brain* getBrain(void);
	Dog(void);
	Dog(const Dog& dog);
	~Dog(void);
	Dog& operator=(const Dog& dog);

};


#endif