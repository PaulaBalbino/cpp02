/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbalbino <pbalbino@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 20:59:41 by pbalbino          #+#    #+#             */
/*   Updated: 2024/03/16 21:57:53 by pbalbino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

std::ostream &operator<<(std::ostream &outstream, const Fixed &obj)
{
	outstream << obj.toFloat();
	return (outstream);
}

Fixed::Fixed() // A default constructor that initializes the fixed-point number value to 0.
{
	value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) // A copy constructor.
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed &Fixed::operator=(const Fixed &fixed) // A copy assignment operator overload.
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->value = fixed.getRawBits();
	return (*this);
}

Fixed::~Fixed() // A destructor.
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const // returns the raw value of the fixed-point value.
{
	std::cout << "getRawBits member function called" << std::endl;
	return (value);
}

Fixed::Fixed (const int int_nb)
{
	value = int_nb << store;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed (const float float_nb)
{
	value = roundf(float_nb * (1 << store));
	std::cout << "Float constructor called" << std::endl;
}

float Fixed::toFloat(void) const
{
	float temp = static_cast<float>(value) / static_cast<float>(1 << store);
	return (temp);
}

int Fixed::toInt(void) const
{
	int temp = value >> store;
	return (temp);
}

