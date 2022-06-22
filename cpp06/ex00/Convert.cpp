#include "Convert.hpp"

Convert::Convert(void) : _strInput(NULL), _doubleInput(0.0)
{}
Convert::Convert(const std::string &str) : _strInput(str)
{
	if 
}
Convert::Convert(const Convert& con)
{}
Convert& Convert::operator=(const Convert &con)
{}
Convert::~Convert(void)
{}

char Convert::toChar( void )
{
	return (static_cast<char>(_doubleInput));
}

int Convert::toInt( void )
{
	return (static_cast<int>(_doubleInput));
}

float Convert::toFloat( void )
{
	return (static_cast<float>(_doubleInput));
}

double Convert::toDouble( void )
{
	return (static_cast<double>(_doubleInput));
}


const double	Convert::getDoubleInput(void) const
{
	return (this->_doubleInput);
}




void	Convert::printChar() const
{
	std::cout << "char: ";
	if (std::isnan(getDoubleInput()) || std::isinf(getDoubleInput()))
		std::cout << "impossible" <<std::endl;
	else if (!std::isprint(static_cast<char>(getDoubleInput())))
		std::cout << "Non displayable" <<std::endl;
	else
		std::cout << static_cast<char>(getDoubleInput()) << std::endl;

}

void	Convert::printInt() const
{
	std::cout << "int: ";
	if (std::isnan(getDoubleInput()) || std::isinf(getDoubleInput()))
		std::cout << "impossible" <<std::endl;
	else if (getDoubleInput() > std::numeric_limits<int>::max() || getDoubleInput() < std::numeric_limits<int>::lowest())
		std::cout << "impossible" <<std::endl;
	else
		std::cout << static_cast<int>(getDoubleInput()) << std::endl;
}

void	Convert::printDouble() const
{
	std::cout << "double: ";
	if (std::isnan(getDoubleInput()))
		std::cout << "impossible" << std::endl;
	else if ()

}

void	Convert::printFloat() const
{}


std::ostream &operator<<(std::ostream &os, const Convert &con)
{
	con.printChar();
	con.printInt();
	con.printFloat();
	con.printDouble();
	return (os);
}



