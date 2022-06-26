#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <exception>

template<typename T>
typename T::iterator easyfind(T& container, int i)
{
	typename T::iterator iter = std::find(container.begin(), container.end(), i);
	if (iter == container.end())
		throw std::runtime_error("Error");
	return (iter);
}

#endif