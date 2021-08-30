/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 22:30:19 by adupuy            #+#    #+#             */
/*   Updated: 2021/08/30 17:26:57 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void): _fixedPointValue(0) {

	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & cpy) {

	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
}

Fixed::~Fixed(void) {

	std::cout << "Destructor called" << std::endl;
}

Fixed &		Fixed::operator=(Fixed const & rhs) {

	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs) {
		this->_fixedPointValue = rhs.getRawBits();
	}
	return *this;
}

int			Fixed::getRawBits(void) const {

	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedPointValue;
}

void		Fixed::setRawBits(int const raw) {

	this->_fixedPointValue = raw;
}

int const	Fixed::_nbFractionalBits = 8;
