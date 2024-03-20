/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbalbino <pbalbino@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 20:59:43 by pbalbino          #+#    #+#             */
/*   Updated: 2024/03/20 21:12:27 by pbalbino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int value;
	static const int store = 8;

public:
	// A default constructor (initializes the fixed-point number value to 0)
	Fixed ();

	// A constructor that takes a constant integer as a parameter
	Fixed (const int int_nb);

	// A constructor that takes a constant floating-point number as a parameter.
	Fixed (const float float_nb);

	// A copy constructor.
	Fixed (const Fixed &fixed);

	// A copy assignment operator overload.
	Fixed & operator = (const Fixed &fixed);

	// A destructor.
	~Fixed ();

	// returns the raw value of the fixed-point value.
	int getRawBits(void) const;

	// converts the fixed-point value to a floating-point value.
	float toFloat(void) const;

	//converts the fixed-point value to an integer value.
	int toInt(void) const;
};

// An overload of the insertion («) operator
std::ostream &operator<<(std::ostream &outstream, const Fixed &obj);

#endif


/*
obs: («) por se tratar se um op especial deve ser prototipado fora da classe)

*/
