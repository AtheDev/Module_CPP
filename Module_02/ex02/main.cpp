/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 11:39:31 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/13 14:10:26 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

int	main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << std::endl;

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;


	std::cout << std::endl << "========== Others tests ===========" << std::endl;

	std::cout << std::endl;

	Fixed	c(5);
	Fixed	d(c);
	Fixed	e(3.60f);

	std::cout << std::endl << std::endl;

	std::cout << "*** Displaying initial values ***" << std::endl << std::endl;
	std::cout << "c = " << c
				<< " | d = " << d
				<< " | e = " << e
				<< std::endl;

	std::cout << std::endl << std::endl;

	std::cout << "*** Tests operator ***" << std::endl << std::endl;

	std::cout << "c + d = " << c + d << std::endl;
	std::cout << "c + e = " << c + e << std::endl;
	std::cout << "c - d = " << c - d << std::endl;
	std::cout << "c - e = " << c - e << std::endl;
	std::cout << "c * d = " << c * d << std::endl;
	std::cout << "c * e = " << c * e << std::endl;
	std::cout << "c / d = " << c / d << std::endl;
	std::cout << "c / e = " << c / e << std::endl;

	std::cout << std::endl;

	std::cout << std::endl << "*** Tests increment ***" << std::endl << std::endl;
	std::cout << "c++ = " << c++ << " --> c = " << c << std::endl;
	std::cout << "++c = " << ++c << " --> c = " << c << std::endl;
	std::cout << "c-- = " << c-- << " --> c = " << c << std::endl;
	std::cout << "--c = " << --c << " --> c = " << c << std::endl;

	std::cout << std::endl;

	std::cout << std::endl << "*** Tests min/max ***" << std::endl << std::endl;
	std::cout << "***MIN***" << std::endl;
	std::cout << "c > e => " << c << " > " << e <<" => " << Fixed::min(c, e) << std::endl;
	std::cout << "c < e => " << c << " < " << e <<" => " << Fixed::min(c, e) << std::endl;
	std::cout << "***MAX***" << std::endl;
	std::cout << "c > e => " << c << " > " << e <<" => " << Fixed::max(c, e) << std::endl;
	std::cout << "c < e => " << c << " < " << e <<" => " << Fixed::max(c, e) << std::endl;

	std::cout << std::endl;

	std::cout << std::endl << "*** Tests comparison ***" << std::endl << std::endl;
	std::cout << "c > e => " << c << " > " << e <<" => " << (c > e) << std::endl;
	std::cout << "c < e => " << c << " < " << e <<" => " << (c < e) << std::endl;
	std::cout << "c >= e => " << c << " >= " << e <<" => " << (c >= e) << std::endl;
	std::cout << "c <= e => " << c << " <= " << e <<" => " << (c <= e) << std::endl;
	std::cout << "c == e => " << c << " == " << e <<" => " << (c == e) << std::endl;
	std::cout << "c != e => " << c << " != " << e <<" => " << (c != e) << std::endl;
	std::cout << "c > d => " << c << " > " << d <<" => " << (c > d) << std::endl;
	std::cout << "c < d => " << c << " < " << d <<" => " << (c < d) << std::endl;
	std::cout << "c >= d => " << c << " >= " << d <<" => " << (c >= d) << std::endl;
	std::cout << "c <= d => " << c << " <= " << d <<" => " << (c <= d) << std::endl;
	std::cout << "c == d => " << c << " == " << d <<" => " << (c == d) << std::endl;
	std::cout << "c != d => " << c << " != " << d <<" => " << (c != d) << std::endl;

	std::cout << std::endl;

	return 0;
}
