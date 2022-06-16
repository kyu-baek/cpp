/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:18:44 by kbaek             #+#    #+#             */
/*   Updated: 2022/06/16 19:00:00 by kbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Dog.hpp"
#include "include/Cat.hpp"
#include "include/Brain.hpp"

/*
	얉은 복사의 문제

	멤버 변수에 포인터를 포함하는 객체를 얉은 복사하게 되면,
	복사본과 원본이 같은 곳을 가리키게 된다.
	결국 복사본 내용 수정시 원본에도 영향이 간다.
	또한 소멸자 호출시에도 할당해제가 꼬이는 문제 발생.

	위의 문제가 발생하는 경우
	1. 객체 생성과 동시에 기존 객체로 초기화할 때. 	ex) A a2 = a1  ->a1은 이미 선언되어 있을때
	2. 값의 복사에 의해 매개변수로 객체 전달시. call by value 
	3. 함수로부터 값의 복사에 의해 객체 반환시. return by value	

	해결책
	deep copy 내용을 담은 복사 생성자를 따로 만들어준다~
*/


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
	DogOrigin->makeSound();
	std::cout << DogOrigin->getType() << std::endl;
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
