/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:18:44 by kbaek             #+#    #+#             */
/*   Updated: 2022/05/26 19:06:26 by kbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/WrongAnimal.hpp"
#include "include/WrongCat.hpp"
#include "include/Dog.hpp"
#include "include/Cat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	
	return 0;
}