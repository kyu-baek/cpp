/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 19:18:24 by kbaek             #+#    #+#             */
/*   Updated: 2022/06/14 21:49:25 by kbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"
# include "Brain.hpp"

class WrongCat: public WrongAnimal
{
private:
	Brain* brain;
public:
	void	makeSound(void) const;
	Brain* getBrain(void);
	WrongCat(void);
	WrongCat(const WrongCat& cat);
	~WrongCat(void);
	WrongCat& operator=(const WrongCat& cat);

};

#endif