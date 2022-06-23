#ifndef CONVERT_HPP
# define CONVERT_HPP
#include <iostream>
#include <exception>


# include <string>
# include <cmath>	//isnan isinf
# include <cctype>
# include <iomanip>
# include <limits>
/*
 -isnan() isinf()

 nan 이나 inf 는 floating point 연산을 할 때 잘못된 연산에 의해 발생하는 것, 
 0 으로 나누거나 숫자가 아닌 것으로 나누려 할 때 발생하는 에러. 
 그 이외에도 꽤 많다. exp 가 over-flow 가 발생하거나, 
 log(0) 이거나, 여러 원인에 의하여 제대로 계산할 수 없을 경우 반환되는 값.
*/

class Convert
{
private:
	double		_double;

public:
	Convert(void);
	Convert(const std::string &str);
	Convert(const Convert& con);
	Convert& operator=(const Convert &con);
	~Convert(void);

	void	printChar() const;
	void	printInt() const;
	void	printDouble() const;
	void	printFloat() const;

};

std::ostream &operator<<(std::ostream &os, const Convert &con);

#endif