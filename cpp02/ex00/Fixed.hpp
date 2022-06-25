/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 17:41:19 by kbaek             #+#    #+#             */
/*   Updated: 2022/04/18 13:35:11 by kbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		FIXED_HPP
# define	FIXED_HPP
# include <iostream>

class Fixed {
public:
	Fixed(void);
	Fixed(const Fixed& fix);
	~Fixed(void);
	Fixed& operator=(const Fixed &fix);
	
	int getRawBits( void ) const;
	void setRawBits( int const raw );
private:
	int	_value;
	static const int	_bit;
};

#endif