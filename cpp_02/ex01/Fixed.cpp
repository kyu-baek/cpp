/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 17:53:54 by kbaek             #+#    #+#             */
/*   Updated: 2022/04/18 17:48:09 by kbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_bits = 8;

Fixed::Fixed(void) : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int fix) : _value(fix << _bits)
{
	std::cout << "Int constructor called" <<std::endl;
}

Fixed::Fixed(const float fix) : _value(roundf(fix * (1 << _bits)))
{
	std::cout << "Float constructor called" << std::endl;
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
	_value = fix._value;
	return (*this);
}

int		Fixed::toInt(void) const
{
	return (_value >> _bits);
}
float	Fixed::toFloat( void ) const
{
	return ((float(_value) / 256));
}

std::ostream&	operator<<(std::ostream& output, const Fixed &fix)
{
	output << fix.toFloat();
	return (output);
}