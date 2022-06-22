#ifndef CONVERT_HPP
# define CONVERT_HPP
#include <iostream>
#include <exception>


# include <string>
# include <cmath>				//isnan(), isinf()
# include <cctype>
# include <iomanip>
# include <limits>


class Convert
{
private:
	const std::string	_strInput;
	const double		_doubleInput;
public:
	Convert(void);
	Convert(const std::string &str);
	Convert(const Convert& con);
	Convert& operator=(const Convert &con);
	~Convert(void);

	const double	getDoubleInput(void) const;

	char	toChar(void);
	int			toInt(void);
	double	toDouble(void);
	float		toFloat(void);

	void	printChar() const;
	void	printInt() const;
	void	printDouble() const;
	void	printFloat() const;


};

std::ostream &operator<<(std::ostream &os, const Convert &con);

#endif