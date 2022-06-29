#include <iostream>
#include <vector>
#include <list>
#include <deque>

#include "easyfind.hpp"
#define NUM 15


int main()
{

	std::cout << "1. vector Test" << std::endl;
	try
	{
		std::vector<int>	v;
		for (int i = 0; i < NUM; i++)
			v.push_back(i);
		std::vector<int>::iterator iter;
		for (int j = 0; j < NUM + 1; j++) //at 15th Error
		{
			iter = easyfind(v, j);
			std::cout<< j << ". easyfind Success, [" <<  *iter <<  "]" << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	



	std::cout << "\n\n2. deque Test" << std::endl;
	try
	{
		std::deque<int> d;
		for (int i = 0; i < NUM; i++)
			d.push_back(i);
		std::deque<int>::iterator iter = d.begin();
		std::cout << "Inside the d deque : ";
		while (iter != d.end())
		{
			std::cout << *iter <<" ";
			iter++;
		}
		std::cout << "\n";
		iter = easyfind(d, 15); //Error
	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
	std::cout << "\n\n3. list Test" << std::endl;
	try
	{
		std::list<char> c(15);
		for(int i = 0; i < NUM; i++)
			c.push_front(79 - i);
		std::cout << "Inside the c list : ";
		std::list<char>::iterator iter = c.begin();
		while(iter != c.end())
		{
			std::cout << *iter <<" ";
			iter++;
		}
		std::cout << "\n";
		iter = easyfind(c, 'A');
		std::cout<< "easyfind Success, [" <<  *iter <<  "]" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}


