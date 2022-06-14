/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:18:44 by kbaek             #+#    #+#             */
/*   Updated: 2022/06/14 19:48:46 by kbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/WrongAnimal.hpp"
#include "include/WrongCat.hpp"
#include "include/Dog.hpp"
#include "include/Cat.hpp"

int main()
{
	std::cout << "\n----------Animal Test----------\n" << std::endl;
	std::cout << "\n1. UpCasting\n" << std::endl;
	
	const Animal* meta = new Animal();
	const Animal* d = new Dog();
	const Animal* c = new Cat();
	std::cout << d->getType() << " " << std::endl;
	std::cout << c->getType() << " " << std::endl;
	c->makeSound();
	d->makeSound();
	meta->makeSound();

	delete meta;
	delete d;
	delete c;


	std::cout << "\n\n2. Normal Casting\n" << std::endl;

	const Cat* ncat = new Cat();
	std::cout << ncat->getType() << " " << std::endl;
	ncat->makeSound();
	delete ncat;
	

	std::cout << "\n\n\n----------WrongAnimal Test----------\n" << std::endl;
	std::cout << "\n1. UpCasting\n" << std::endl;

	const WrongAnimal*	cat1 = new WrongCat();
	std::cout << cat1->getType() << std::endl;
	cat1->makeSound();
	delete cat1;

	std::cout << "\n\n2. Normal Casting\n" << std::endl;

	WrongCat*	cat2 = new WrongCat();
	std::cout << cat2->getType() << std::endl;
	cat2->makeSound();
	delete cat2;

	return 0;
}
