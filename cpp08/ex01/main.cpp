#include "Span.hpp"

int main()
{

	std::cout << "------Simple Test------" << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "\n------shortest longest Span Test------" << std::endl;

	Span s = Span(11);
	try
	{
		s.makeV(10);
		s.printV();
		std::cout << "shortestSpan is " <<	s.shortestSpan() << std::endl;
		std::cout << "longestSpan is " <<	s.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	std::cout << "\n------Add Number Span Test------" << std::endl;

	try
	{
		s.addNumber(666);
		s.printV();
	
		s.addNumber(667); //Error
		s.printV();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "\n------All Test------" << std::endl;
	try
	{
		Span s2 = Span(100);
		std::vector<int> v;
		s2.makeV(100);
		s2.printV();
		std::cout << "shortestSpan is " <<	s.shortestSpan() << std::endl;
		std::cout << "longestSpan is " <<	s.longestSpan() << std::endl;

		//Error
		s2.addNumber(101);
		s2.printV();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


}