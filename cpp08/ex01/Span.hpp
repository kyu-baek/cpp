#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <exception>
#include <algorithm>

class Span
{
private:
	unsigned int 			_N;
	std::vector<int>		_v;
	Span(void);
public:
	Span(unsigned int N);
	Span(const Span &sp);
	Span &operator=(const Span &sp);
	~Span(void);

	void				addNumber(const unsigned int number);
	unsigned int	shortestSpan(void);
	unsigned int	longestSpan(void);
	void				makeV(unsigned int s);
	void				printV(void);

	class NoSpeaceStore : public std::exception
	{
	public:
		const char *what(void) const throw();
	};

	class NoSpanFound :public std::exception
	{
	public:
		const char *what(void) const throw();
	};
};


#endif