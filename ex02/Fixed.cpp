/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbalbino <pbalbino@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 20:59:41 by pbalbino          #+#    #+#             */
/*   Updated: 2024/03/17 11:48:54 by pbalbino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

std::ostream &operator<<(std::ostream &outstream, const Fixed &obj)
{
	outstream << obj.toFloat();
	return (outstream);
}

Fixed::Fixed()
{
	value = 0;
}

Fixed::Fixed(const Fixed &fixed)
{
	*this = fixed;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	this->value = fixed.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{

}

int Fixed::getRawBits(void) const
{
	return (value);
}

Fixed::Fixed (const int int_nb)
{
	value = int_nb << store;
}

Fixed::Fixed (const float float_nb)
{
	value = roundf(float_nb * (1 << store));
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

	// Operators: +, -, *, and /
	Fixed Fixed::operator+(const Fixed& sum){
	//creates a new instance of the class (Fixed) invoking default constructor
		Fixed res;
		res.value = this->value + sum.value;
		return (res);
	}
	Fixed Fixed::operator-(const Fixed& sub){
		Fixed res;
		res.value = this->value - sub.value;
		return (res);
	}
	Fixed Fixed::operator*(const Fixed& times){
		Fixed res;
		res.value = this->value * times.value;
		return (res);
	}
	Fixed Fixed::operator/(const Fixed& div){
		Fixed res;
		res.value = this->value / div.value;
		return (res);
	}

	// Comparison operators: >, <, >=, <=, == and !=
	bool Fixed::operator>(const Fixed& obj){
		if (value > obj.value)
			return (true);
		return (false);
	}
	bool Fixed::operator<(const Fixed& obj){
		if (value < obj.value)
			return (true);
		return (false);
	}
	bool Fixed::operator>=(const Fixed& obj){
		if (value >= obj.value)
			return (true);
		return (false);
	}
	bool Fixed::operator<=(const Fixed& obj){
		if (value <= obj.value)
			return (true);
		return (false);
	}
	bool Fixed::operator==(const Fixed& obj){
		if (value == obj.value)
			return (true);
		return (false);
	}
	bool Fixed::operator!=(const Fixed& obj){
		if (value != obj.value)
			return (true);
		return (false);
	}

	// Increment/Decrement
	Fixed& Fixed::operator++(void) //pre increment, return the same obj (got by reference)
	{
		value++;
		return (*this);
	}

	Fixed& Fixed::operator--(void)
	{
		value--;
		return (*this);
	}

	Fixed Fixed::operator++(int) //pos increment, returned value should be a copy of the object before decrement
	{
		Fixed temp;
		temp.value = value;
		value++;
		return (temp);
	}

	Fixed Fixed::operator--(int)
	{
		Fixed temp;
		temp.value = value;
		value--;
		return (temp);
	}