#include "Convert.hpp"

Convert::Convert(void) : _strInput(NULL), _doubleInput(0.0)
{}
Convert::Convert(const std::string &str) : _strInput(str), _doubleInput(0.0)
{}
Convert::Convert(const Convert& con)
{}
Convert& Convert::operator=(const Convert &con)
{}
Convert::~Convert(void)
{}


char	Convert::toChar(void) {return (static_cast<char>(_doubleInput));}

int			Convert::toInt(void) {return (static_cast<int>(_doubleInput));}

double	Convert::toDouble(void) {return (static_cast<double>(_doubleInput));}

float		Convert::toFloat(void) {return (static_cast<float>(_doubleInput));}

const double	Convert::getInput(void) const
{
	return (this->_doubleInput);
}




void	Convert::printChar() const
{
	std::cout << "char: ";
	if (std::isnan(getInput()) || std::isinf(getInput()))
		std::cout << "impossible" <<std::endl;
	else if (std::isprint(toChar()) || (getInput() >= 177))
		std::cout << "Non display" <<std::endl;
	else
		std::cout << toChar() << std::endl;

}

void	Convert::printInt() const
{
	std::cout << "int: ";
	if (std::isnan(getInput()) || std::isinf(getInput()))
		std::cout << "impossible" <<std::endl;
	else if (getInput() > std::numeric_limits<int>::max() || getInput() < std::numeric_limits<int>::lowest())
		std::cout << "impossible" <<std::endl;
	else
		std::cout << toInt() << std::endl;
}

void	Convert::printDouble() const
{
	std::cout << "double: ";
	if (std::isnan(getInput()))
		std::cout << "nan" << std::endl;

}

void	Convert::printFloat() const
{}

void	Convert::printNum(const std::string num) const
{}

std::ostream &operator<<(std::ostream &os, const Convert &con)
{
	con.printChar();
	con.printInt();
	con.printFloat();
	con.printDouble();
	return (os);
}



