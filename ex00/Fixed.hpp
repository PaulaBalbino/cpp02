/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbalbino <pbalbino@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 11:01:05 by pbalbino          #+#    #+#             */
/*   Updated: 2024/03/20 21:12:58 by pbalbino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
private:
	int value;
	static const int store = 8;

public:
	Fixed (); // A default constructor that initializes the fixed-point number value to 0.

	Fixed (const Fixed &fixed); // A copy constructor.

	Fixed & operator = (const Fixed &fixed); // A copy assignment operator overload.

	~Fixed (); // A destructor.

	int getRawBits(void) const; // returns the raw value of the fixed-point value.

	void setRawBits(int const raw); // sets the raw value of the fixed-point number.
};

#endif