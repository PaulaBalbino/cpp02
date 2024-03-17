/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbalbino <pbalbino@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 20:59:43 by pbalbino          #+#    #+#             */
/*   Updated: 2024/03/17 11:34:17 by pbalbino         ###   ########.fr       */
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
	Fixed ();
	Fixed (const int int_nb);
	Fixed (const float float_nb);

	Fixed (const Fixed &fixed);

	Fixed & operator = (const Fixed &fixed);

	~Fixed ();

	// Operators: +, -, *, and /
	Fixed operator+(const Fixed& sum);
	Fixed operator-(const Fixed& sub);
	Fixed operator*(const Fixed& times);
	Fixed operator/(const Fixed& div);

	// Comparison operators: >, <, >=, <=, == and !=
	bool operator>(const Fixed& obj);
	bool operator<(const Fixed& obj);
	bool operator>=(const Fixed& obj);
	bool operator<=(const Fixed& obj);
	bool operator==(const Fixed& obj);
	bool operator!=(const Fixed& obj);

	// Increment/Decrement
	Fixed& operator++(void); //pos increment
	Fixed operator++(int); //pre increment (copy)
	Fixed& operator--(void);
	Fixed operator--(int);


	int getRawBits(void) const;

	float toFloat(void) const;

	int toInt(void) const;


};

std::ostream &operator<<(std::ostream &outstream, const Fixed &obj);

#endif