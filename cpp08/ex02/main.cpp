#include "MutantStack.hpp"

int main()
{
	std::cout << "\n\n1. Simple Test\n" << std::endl;
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "Top is " << mstack.top() << std::endl;

	mstack.pop();

	std::cout << "Size is " << mstack.size() << "\n" << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();


	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::cout << "\n\n2. Copy Test\n" << std::endl;
	std::stack<int> s(mstack);
	MutantStack<int>::iterator it2 = mstack.begin();
	MutantStack<int>::iterator ite2 = mstack.end();

	++it2;
	--it2;
	while (it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}


 	std::cout << "\n\n3. Reverse_iterator Test\n" << std::endl;

	MutantStack<int>::reverse_iterator itR;
   	for (itR=mstack.rbegin();itR!=mstack.rend();itR++) 
		std::cout << *itR << std::endl;


	std::cout << "\n\n4. list Test\n" << std::endl;
	std::list<int> list;

	list.push_back(0);
	list.push_back(1);
	list.push_back(2);
	list.push_back(3);

	std::cout << "Top is " << list.front() << "  Size is " << list.size() << std::endl;

	list.pop_front();

	std::cout << "Top is " << list.front() << "  Size is " << list.size()  << std::endl;

	std::list<int> clist(list);

	std::list<int>::iterator itL = clist.begin();
	std::list<int>::iterator iteL = clist.end();
	std::cout << '\n';

	++itL;
	--itL;
	while (itL != iteL)
	{
		std::cout << *itL << std::endl;
		++itL;
	}

	return 0;
}