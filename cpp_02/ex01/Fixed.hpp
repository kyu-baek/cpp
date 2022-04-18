/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 17:41:19 by kbaek             #+#    #+#             */
/*   Updated: 2022/04/18 17:41:54 by kbaek            ###   ########.fr       */
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
	
	int		toInt(void) const;
	float	toFloat( void ) const;

private:
	int	_value;
	static const int	_bits;
};

std::ostream& operator<<(std::ostream& output, const Fixed &fix);

#endif