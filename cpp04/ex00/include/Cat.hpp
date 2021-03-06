/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:31:26 by kbaek             #+#    #+#             */
/*   Updated: 2022/05/28 19:14:25 by kbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class Cat: public Animal
{
public:
	void	makeSound(void) const;
	Cat(void);
	Cat(const Cat& cat);
	~Cat(void);
	Cat& operator=(const Cat& cat);

};

#endif