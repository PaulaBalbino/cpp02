/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbalbino <pbalbino@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 20:58:42 by pbalbino          #+#    #+#             */
/*   Updated: 2024/03/20 22:02:28 by pbalbino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>


int main(void)
{

	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

	return 0;
}

/*

Fixed c(42);
Fixed d(10);
const Fixed e(20);
const Fixed f(5);
std::cout << "c = " << c << std::endl;
std::cout << "d = " << d << std::endl;

std::cout << "c + d = " << c + d << std::endl;

std::cout << "c - d = " << c - d << std::endl;

std::cout << "c * d = " << c * d << std::endl;

std::cout << "c / d = " << c / d << std::endl;

std::cout << Fixed::max( c, d) << std::endl;

std::cout << Fixed::min( c, d) << std::endl;

std::cout << Fixed::max( e, f) << std::endl;

std::cout << Fixed::min( e, f) << std::endl;

*/

