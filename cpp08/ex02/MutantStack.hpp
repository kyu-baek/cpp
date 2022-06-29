
#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <vector>
#include <stack>
#include <iterator>
#include <algorithm>
#include <functional>
#include <list>

template <typename T>
class MutantStack : public std::stack<T>
{
public:

	typedef typename std::stack<T>::container_type::iterator						iterator;
	typedef typename std::stack<T>::container_type::const_iterator				const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator			reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator	const_reverse_iterator;

	MutantStack(void) {};
	MutantStack(const MutantStack &ms) { *this = ms; };
	MutantStack& operator=(const MutantStack &ms)
	{
		if (this != &ms)
			std::stack<T>::operator=(ms);
		return (*this);
	};
	~MutantStack(void) {};

	iterator begin(void) { return (this->c.begin()); };					//첫번째 원소를 가리킴
	iterator end(void) { return (this->c.end()); };						//마지막의 다음 원소를 가리킴
	reverse_iterator rbegin(void) { return (this->c.rbegin()); };			//맨 마지막 원소를 마치 첫 번째 원소처럼 역으로 가리킴
	reverse_iterator rend(void) { return (this->c.rend()); };				//맨 첫 원소의 앞을 마지막 원소의 다음처럼 가리킴.

	const_iterator begin(void) const { return (this->c.begin()); };
	const_iterator end(void) const { return (this->c.end()); };
	const_reverse_iterator rbegin(void) const { return (this->c.rbegin()); };
	const_reverse_iterator rend(void) const { return (this->c.rend()); };
};


#endif