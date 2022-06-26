#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>


template<typename T>
class Array
{
private:
	T*				_arr;
	unsigned int	_size;

public:
	class OutOfBounds : public std::exception
	{
	public:
		const char *what(void) const throw()
		{
			return ("Out Of Bounds Error");
		};
	};

	Array(void): _arr(NULL), _size(0) {};
	Array(unsigned int n): _arr(new T[n]), _size(n) {};
	Array(const Array& arr);
	
	Array	&operator=(const Array &arr);
	~Array(void);

	unsigned int size(void) const;

	T&			operator[](unsigned int index);
	const T&	operator[] (const unsigned int index) const;

};

template<typename T>
unsigned int Array<T>::size(void) const 
{
	return (_size);
};

template<typename T>
Array<T>::Array(const Array& arr) : _arr(NULL), _size(arr.size())
{
	if (_size)
		_arr = new T[_size];
	for (unsigned int i = 0; i < _size; i++)
		_arr[i] = arr[i];
}


template<typename T>
Array<T>&	 Array<T>::operator=(const Array &arr)
{
	if (this != &arr)
	{
		if (this->_size)
		{
			delete[] this->_arr;
			this->_arr = new T[arr.size()];
			for (unsigned int i = 0; i < arr.size(); i++)
				this->_arr[i] = arr._arr[i];
		}
		this->_size = arr.size();
	}
	return (*this);
}


template<typename T>
 Array<T>::~Array(void) 
 {
    if (this->_arr) 
		delete[] this->_arr;
};


template<typename T>
const T&	 Array<T>::operator[](unsigned int index) const
{
	if (index >= this->_size)
		throw Array<T>::OutOfBounds();
	return (this->_arr[index]);
}


template<typename T>
T& Array<T>::operator[](unsigned int index)
{
	if (index >= this->_size)
		throw Array<T>::OutOfBounds();
	return (this->_arr[index]);
}


#endif