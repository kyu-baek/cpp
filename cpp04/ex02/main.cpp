/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:18:44 by kbaek             #+#    #+#             */
/*   Updated: 2022/06/16 18:09:16 by kbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Dog.hpp"
#include "include/Cat.hpp"
#include "include/Brain.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;

	std::cout << "\n\n" << std::endl;


	Animal** animals= new Animal*[10];

	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}

	std::cout << "----------Destructor Testing----------" << std::endl;

	for (int i = 0; i < 10; i++)
	{
		delete animals[i];
		animals[i] = NULL;
	}
	delete[] animals;
	
		
	std::cout << "----------DeepCopy Testing----------" << std::endl;

    Dog* DogOrigin = new Dog();
    Brain* DogOriginBrain = DogOrigin->getBrain();
	std::string DogIdeas[100];

	for (int i = 0; i <100; i++)
		DogIdeas[i] = "Dogs always love their owner ";
    DogOriginBrain->setIdeas(DogIdeas);

    Dog* DogCopy = new Dog(*DogOrigin);

    std::cout << "----------Originl Brain----------\n";
    std::cout << DogOrigin->getBrain()->getIdeas() << std::endl;
    std::cout << "----------Copied Brain----------\n";
    std::cout << DogCopy->getBrain()->getIdeas() << std::endl;

    delete DogOrigin;
	//DogCopy->getBrain()->insideBrain();
    delete DogCopy;
  
    Cat* CatOrigin = new Cat();
    Brain* CatOriginBrain = CatOrigin->getBrain();
	std::string CatId[100];

	for (int i = 0; i <100; i++)
		CatId[i] = "Cat needs house keeper, not owner ";

    CatOriginBrain->setIdeas(CatId);
    Cat* CatCopy = new Cat(*CatOrigin);

    std::cout << "----------Originl Brain----------\n";
    std::cout << CatOrigin->getBrain()->getIdeas() << std::endl;
    std::cout << "----------Copied Brain----------\n";
    std::cout << CatCopy->getBrain()->getIdeas() << std::endl;
	std::cout << "\n";

    delete CatOrigin;
	// CatCopy->getBrain()->insideBrain();
    delete CatCopy;

	return 0;
}
