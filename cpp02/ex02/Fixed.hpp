/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 17:41:19 by kbaek             #+#    #+#             */
/*   Updated: 2022/04/18 13:35:51 by kbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		FIXED_HPP
# define	FIXED_HPP
# include <cmath>
# include <iostream>

class Fixed {
public:
	Fixed(void);
	Fixed(const int fix);
	Fixed(const float fix);
	Fixed(const Fixed& fix);
	~Fixed(void);
	
	Fixed& operator=(const Fixed &fix);

	bool  operator>(const Fixed& fix) const;
	bool  operator<(const Fixed& fix) const;
	bool  operator==(const Fixed& fix) const;
	bool  operator>=(const Fixed& fix) const;
	bool  operator<=(const Fixed& fix) const;
	bool  operator!=(const Fixed& fix) const;


	Fixed operator+(const Fixed& fix) const;
	Fixed operator-(const Fixed& fix) const;
	Fixed operator*(const Fixed& fix) const;
	Fixed operator/(const Fixed& fix) const;

	Fixed operator++(void);
	Fixed operator--(void);
	Fixed operator++(int);
	Fixed operator--(int);
	
	int		toInt(void) const;
	float	toFloat( void ) const;
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

	static Fixed& min(Fixed& num1, Fixed& num2);
	static Fixed& max(Fixed& num1, Fixed& num2);
	static const Fixed& min(const Fixed& num1, const Fixed& num2);
	static const Fixed& max(const Fixed& num1, const Fixed& num2);

private:
	int	_value;
	static const int	_bits;
};

std::ostream& operator<<(std::ostream& output, const Fixed &fix);

#endif