#include "Convert.hpp"

Convert::Convert(void) {}

Convert::Convert(const std::string &str)
{
	char *p(NULL);
	this->_double = strtod(str.c_str(), &p); 			//double strtod(const char *nptr,char **endptr); 
	if (p != '\0' && str.size() == 1 && *p == str[0])	//인자가 double 로 인지하지 못하는 경우 strtod 함수는 원본이 아닌 0을 리턴하게 됨으로 필요한 구절
		this->_double = *p;
}

Convert::Convert(const Convert& con)
{
	(void)con;
}

Convert& Convert::operator=(const Convert &con)
{
	(void)con;
	return (*this);
}

Convert::~Convert(void) {}



void	Convert::printChar() const
{
	std::cout << "char: ";
	if (std::isnan(_double) || std::isinf(_double))
		std::cout << "impossible" <<std::endl;
	else if (_double < CHAR_MIN || _double > CHAR_MAX || !std::isprint(_double))
		std::cout << "Non displayable" <<std::endl;
	else
		std::cout << "'" << static_cast<char>(_double) <<"'"<< std::endl;
}

void	Convert::printInt() const
{
	int i = static_cast<int>(_double);
	std::cout << "int: ";
	if (std::isnan(_double) || std::isinf(_double))
		std::cout << "impossible" <<std::endl;
	else if (_double < INT_MIN || _double > INT_MAX)
		std::cout <<  "Non displayable" <<std::endl; 
	else
		std::cout << i << std::endl;
}

void	Convert::printDouble() const
{
	double d = static_cast<double>(_double);
	std::cout << "double: ";
	if (std::isnan(d) || std::isinf(d))
		std::cout << std::showpos << d <<std::endl;
	else
	{
		if (static_cast<int>(_double) == d && d < 1000000 && d >= -100000)
			std::cout << d <<".0" << std::endl;
		else
			std::cout << d << std::endl;
	}
}

void	Convert::printFloat() const
{
	float f = static_cast<float>(_double);
	std::cout << "float: ";
	if (std::isnan(f) || std::isinf(f))
		std::cout << std::showpos << f << "f" << std::endl;
	else if (f == static_cast<int>(f) && f < 1000000 && f >= -100000)
		std::cout << f << ".0f" << std::endl;
	else
		std::cout << f << "f" << std::endl;	
}


std::ostream &operator<<(std::ostream &os, const Convert &con)
{
	con.printChar();
	con.printInt();
	con.printFloat();
	con.printDouble();
	return (os);
}



