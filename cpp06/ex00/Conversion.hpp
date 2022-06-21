#ifndef CONVERSION_HPP
# define CONVERSION_HPP
#include <iostream>
#include <exception>

class Conversion
{
private:

public:
	Conversion(void);
	Conversion(const std::string &str);
	Conversion(const Conversion& con);
	Conversion& operator=(const Conversion &con);
	~Conversion(void);

	void	printChar(std::ostream&) const;
	void	printInt(std::ostream&) const;
	void	printDouble(std::ostream&) const;
	void	printFloat(std::ostream&) const;
	void	printNum(const std::string num) const;

};

std::ostream &operator<<(std::ostream &os, const Conversion &con);

#endif