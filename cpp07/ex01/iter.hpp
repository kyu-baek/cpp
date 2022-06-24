#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template<typename T>
void	iter(T *arrAdr, std::size_t length, void(*f)(const T& arr))
{
	for (std::size_t i = 0; i < length; i++)
		f(arrAdr[i]);
	std::cout << "\n";
}

template <typename T>
void print(const T& arr) 
{
  std::cout << arr << std::endl;
}

#endif