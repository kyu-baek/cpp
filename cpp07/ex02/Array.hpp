#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>
/*

*템플릿 클래스의 선언과 정의가 헤더에 함께 작성되어야 하는 이유!

설명 1.
컴파일러는 코드를 파일단위로 컴파일 해놓고 링크 과정을 통해 합친다.
하지만 템플릿 클래스의 구현부가 cpp 파일에 있으면
내가 main에서 내가 만든 클래스 템플릿의 헤더를 참조했으면,
컴파일러가 메인에서 함수 호출시 들어간 타입으로 그때서야 클래스를 만들어주게 되는데
클래스에 선언만 있고 실 구현이 없어도 일단, 메인 쪽에서는 선언만으로는 문제를 발생하지 않고 넘어가게 되는데,
나중에 실 구현이 있는 cpp 파일로 들어가게 되면 타입이 없는 원형들만 선언되어 있고, 실제 어떤 타입으로 요청되었는지에 대한 반영이 전혀 안되게 된다. 
그래서 하나의 unit으로 만들어지는 템플릿은 main에서 헤더로 들어가서 클래스 템플릿의 선언부 부분으로 들어갔을 당시 정의부도 같은 파일 내에 존재해야 한다.


설명 2.
보통 컴파일 시에 컴파일러는 코드를 순차적으로 읽으면서 진행합니다. 
함수의 선언부를 읽어서 함수가 존재함을 인지하고(함수에서 사용되는 인자들의 자료형 등)  함수를 사용하는 곳(main 이겠죠?)에서 함수를 확인합니다. 
그리고 함수 구현부를 확인하여 메모리에 어떻게 올릴지를 결정합니다. 
그리고 링크 과정에서 함수의 선언부와 구현부를 연결시킵니다. 

하지만 템플릿의 경우 초기에는 자료형이 정해져 있지 않기 때문에 컴파일 과정에서 템플릿을 일단 무시하고 지나갑니다.
그리고 컴파일을 하다가 템플릿 함수와 같은 함수를 호출하는 시점을 찾으면 일단 자료형에 맞는 일반 함수를 찾고 없다면 템플릿 함수를 참조합니다.
그리고 그 형식이 같다면 그 템플릿 함수를 호출한 함수의 자료형인 함수를 만듭니다. 그리고 템플릿 함수의 구현부를 사용하는 자료형의 형식으로 만듭니다.


함수 템플릿은 정의와 구현이 분리되어 있으면 링크 error가 발생한다.
즉, header파일에 함수 템플릿를 선언하고 cpp 파일에 함수 템플릿의 구현을 작성하면 링크 error가 발생하다.
따라서 header파일에 함수 템플릿를 선언했다면 그 header파일에 구현부도 작성해 주어야 한다.
(함수 템플릿은 선언과 구현부가 같은 파일에 존재해야 한다.)
어차피 선언과 구현이 같은 곳(같은 페이지)에 존재하기 때문에 선언과 구현을 합쳐서 사용해도 된다.


*/

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