/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:21:38 by kbaek             #+#    #+#             */
/*   Updated: 2022/05/26 19:14:53 by kbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <string>
# include <iostream>

class Animal {

protected:
	std::string type;
public:
	Animal(void);
	Animal(const Animal& ani);
	virtual ~Animal(void);
	Animal& operator=(const Animal &ani);

	//const std::string&	getType(void);
	std::string getType(void) const;
	virtual void		makeSound(void);
};

#endif