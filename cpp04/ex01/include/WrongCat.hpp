/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 19:18:24 by kbaek             #+#    #+#             */
/*   Updated: 2022/05/28 19:19:31 by kbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
public:
	void	makeSound(void) const;
	WrongCat(void);
	WrongCat(const WrongCat& cat);
	~WrongCat(void);
	WrongCat& operator=(const WrongCat& cat);

};

#endif