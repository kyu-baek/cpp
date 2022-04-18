#include <iostream>

class Fixed
{

private:
	static const int	_bits = 8;
	int k;
	int	_value;
public:

	Fixed(void);
	Fixed(const Fixed& fix);
	~Fixed(void);
	Fixed& operator=(const Fixed &fix);
	void setRawBits( int const raw );
	int getRawBits( void ) const;
	int getBits( void ) const;
};

Fixed::Fixed(void)
{
	_value = 1;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& fix)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fix;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &fix)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(fix.getRawBits());
	//*_value = *fix._value; deep copy
	//_value = fix._value; shallow copy
	return (*this);
}
int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	std::cout << &_value << std::endl;
	return (this->_value);
}

int Fixed::getBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	//std::cout << &_value << std::endl;
	return (this->k);
}

void	Fixed::setRawBits( int const raw )
{
	this->_value = raw;
}

int main()
{
	Fixed a;
	Fixed b(a);

	a.setRawBits(5);
	std::cout << &a << "\n" << a.getRawBits() << a.getBits() << std::endl;
	std::cout << &b << "\n" << b.getRawBits() << b.getBits()<< std::endl;



}