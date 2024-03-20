/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbalbino <pbalbino@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 20:59:41 by pbalbino          #+#    #+#             */
/*   Updated: 2024/03/20 15:36:45 by pbalbino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

std::ostream &operator<<(std::ostream &outstream, const Fixed &obj)
{
	outstream << obj.toFloat();
	return (outstream);
}

// A default constructor that initializes the fixed-point number value to 0.
Fixed::Fixed()
{
	value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->value = fixed.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

// returns the raw value of the fixed-point value.
int Fixed::getRawBits(void) const
{
	return (value);
}

Fixed::Fixed(const int int_nb)
{
	value = int_nb << store;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float float_nb)
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

// std::ostream: Represents an output stream, such as std::cout.