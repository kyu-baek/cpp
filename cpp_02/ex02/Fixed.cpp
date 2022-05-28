/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 17:53:54 by kbaek             #+#    #+#             */
/*   Updated: 2022/04/18 17:49:14 by kbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_bits = 8;

Fixed::Fixed(void) : _value(0)
{}

Fixed::Fixed(const int fix) : _value(fix << _bits)
{}

Fixed::Fixed(const float fix) : _value(roundf(fix * (1 << _bits)))
{}

Fixed::Fixed(const Fixed& fix)
{
	*this = fix;
}

Fixed::~Fixed(void)
{}

Fixed& Fixed::operator=(const Fixed &fix)
{
	_value = fix._value;
	return (*this);
}

bool  Fixed::operator>(const Fixed& fix) const
{
	return (this->getRawBits() > fix.getRawBits());
}
bool  Fixed::operator<(const Fixed& fix) const
{
	return (this->getRawBits() < fix.getRawBits());
}
bool  Fixed::operator==(const Fixed& fix) const
{
	return (this->getRawBits() == fix.getRawBits());
}
bool  Fixed::operator>=(const Fixed& fix) const
{
	return (this->getRawBits() >= fix.getRawBits());
}
bool  Fixed::operator<=(const Fixed& fix) const
{
	return (this->getRawBits() <= fix.getRawBits());
}
bool  Fixed::operator!=(const Fixed& fix) const
{
	return (this->getRawBits() != fix.getRawBits());
}

Fixed Fixed::operator+(const Fixed& fix) const
{
	return (Fixed(this->toFloat() + fix.toFloat()));
}
Fixed Fixed::operator-(const Fixed& fix) const
{
	return (Fixed(this->toFloat() - fix.toFloat()));
}
Fixed Fixed::operator*(const Fixed& fix) const
{
	return (Fixed(this->toFloat() * fix.toFloat()));
}
Fixed Fixed::operator/(const Fixed& fix) const
{
	return (Fixed(this->toFloat() / fix.toFloat()));
}


Fixed Fixed::operator++(void)
{
	this->_value++;
	return (*this);
}
Fixed Fixed::operator--(void)
{
	this->_value--;
	return (*this);
}
Fixed Fixed::operator++(int)
{
	Fixed pre = *this;

	this->_value++;
	return (pre);
}
Fixed Fixed::operator--(int)
{
	Fixed pre = *this;

	this->_value--;
	return (pre);
}

Fixed& Fixed::min(Fixed& num1, Fixed& num2)
{
	return ((num1.getRawBits() < num2.getRawBits()) ? num1 : num2);
}
Fixed& Fixed::max(Fixed& num1, Fixed& num2)
{
	return ((num1.getRawBits() > num2.getRawBits()) ? num1 : num2);
}
const Fixed& Fixed::min(const Fixed& num1, const Fixed& num2)
{
	return ((num1.getRawBits() < num2.getRawBits()) ? num1 : num2);
}
const Fixed& Fixed::max(const Fixed& num1, const Fixed& num2)
{
	return ((num1.getRawBits() > num2.getRawBits()) ? num1 : num2);
}

int		Fixed::toInt(void) const
{
	return (_value >> _bits);
}

float	Fixed::toFloat( void ) const
{
	return ((float(_value) / 256));
}


int Fixed::getRawBits( void ) const
{
	return (this->_value);
}
void	Fixed::setRawBits( int const raw )
{
	_value = raw;
}

std::ostream&	operator<<(std::ostream& output, const Fixed &fix)
{
	output << fix.toFloat();
	return (output);
}