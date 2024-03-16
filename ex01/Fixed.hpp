/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbalbino <pbalbino@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 20:59:43 by pbalbino          #+#    #+#             */
/*   Updated: 2024/03/16 21:57:28 by pbalbino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
	private:
	int value;
	static const int store = 8;

	public:
	Fixed (); // A default constructor that initializes the fixed-point number value to 0.
	Fixed (const int int_nb); // A constructor that takes a constant integer as a parameter
	Fixed (const float float_nb); // A constructor that takes a constant floating-point number as a parameter.

	Fixed (const Fixed &fixed); // A copy constructor.

	Fixed & operator = (const Fixed &fixed); // A copy assignment operator overload.

	~Fixed (); // A destructor.

	int getRawBits(void) const; // returns the raw value of the fixed-point value.

	float toFloat(void) const;

	int toInt(void) const;
};

std::ostream &operator<<(std::ostream &outstream, const Fixed &obj);

#endif