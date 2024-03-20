/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbalbino <pbalbino@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 11:20:14 by pbalbino          #+#    #+#             */
/*   Updated: 2024/03/20 21:13:52 by pbalbino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

// A default constructor that initializes the fixed-point number value to 0.
Fixed::Fixed()
{
	value = 0;
	std::cout << "Default constructor called" << std::endl;
}

// A copy constructor.
Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

// A copy assignment operator overload.
Fixed &Fixed::operator=(const Fixed &fixed) 
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->value = fixed.getRawBits();
	return (*this);
}

// A destructor.
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

// returns the raw value of the fixed-point value.
int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (value);
}

// sets the raw value of the fixed-point number.
void Fixed::setRawBits(int const raw)
{
	value = raw;
}
