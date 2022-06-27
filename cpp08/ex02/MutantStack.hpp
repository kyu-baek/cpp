
#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <vector>
#include <stack>
#include <iterator>
#include <algorithm>

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

	iterator begin(void) { return (this->c.begin()) };
	iterator end(void) { return (this->c.end()) };
	iterator rbegin(void) { return (this->c.rbegin()) };
	iterator rend(void) { return (this->c.rend()) };

	const_iterator begin(void) const { return (this->c.begin()) };
	const_iterator end(void) const { return (this->c.end()) };
	const_iterator rbegin(void) const { return (this->c.rbegin()) };
	const_iterator rend(void) const { return (this->c.rend()) };
};


#endif