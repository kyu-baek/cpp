#include "Base.hpp"
#include <cstdlib>
#include <ctime>
//Base class

Base::~Base(void)
{
	std::cout << "Base destructed" << std::endl;
}

Base *generate(void)
{
	static int random;
	if (random++ == 0)
		 srand(time(NULL));
	switch (rand() % 3)
	{
	case 0:
		return (new A());
	case 1:
		return (new B());
	case 2:
		return (new C());
	}
	return (NULL);
}

void identify(Base* p)
{
	if (p == NULL)
		std::cout << "p is NULL" << std::endl;
	else if (dynamic_cast<A*>(p))
		std::cout << "p is A class ptr" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "p is B class ptr" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "p is C class ptr" << std::endl;
	else
		std::cout << "We dont know what is a p" << std::endl;
	
}

void identify(Base& p)
{
	try
	{
		A& aRef = dynamic_cast<A&>(p);
		std::cout << "identify&::Actual type of the object pointed 'A' " << std::endl;
		static_cast<void>(aRef);
	}
	catch(const std::exception& e)
	{
		//std::cout << e.what() << '\n';
	}

	try
	{
		B& bRef = dynamic_cast<B&>(p);
		std::cout << "identify&::Actual type of the object pointed 'B' " << std::endl;
		static_cast<void>(bRef);
	}
	catch(const std::exception& e)
	{
		//std::cout << e.what() << '\n';
	}

	try
	{
		C& cRef = dynamic_cast<C&>(p);
		std::cout << "identify&::Actual type of the object pointed 'C' " << std::endl;
		static_cast<void>(cRef);
	}
	catch(const std::exception& e)
	{
		//std::cout << e.what() << '\n';
	}
	
}

A::A(void)
{
	std::cout << "A generated" << std::endl;
}

A::~A(void)
{
	std::cout << "A destructed" << std::endl;

}

B::B(void)
{
	std::cout << "B generated" << std::endl;
}

B::~B(void)
{
	std::cout << "B destructed" << std::endl;

}

C::C(void)
{
	std::cout << "C generated" << std::endl;
}

C::~C(void)
{
	std::cout << "C destructed" << std::endl;

}