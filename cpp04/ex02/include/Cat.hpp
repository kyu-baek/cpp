/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:31:26 by kbaek             #+#    #+#             */
/*   Updated: 2022/06/16 17:51:26 by kbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
private:
	Brain* brain;
public:
	void	makeSound(void) const;
	Brain* getBrain(void) const;
	Cat(void);
	Cat(const Cat& cat);
	~Cat(void);
	Cat& operator=(const Cat& cat);

};

#endif