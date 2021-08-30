/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 23:56:12 by adupuy            #+#    #+#             */
/*   Updated: 2021/08/30 17:26:08 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void): _fixedPointValue(0) {

	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & cpy) {

	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
}

Fixed::Fixed(int const value) {

	std::cout << "Int constructor called" << std::endl;
	this->_fixedPointValue = value << _nbFractionalBits;
}

Fixed::Fixed(float const value) {

	std::cout << "Float constructor called" << std::endl;
	this->_fixedPointValue = roundf(value * (1 << _nbFractionalBits));
}

Fixed::~Fixed(void) {

	std::cout << "Destructor called" << std::endl;
}

Fixed &	Fixed::operator=(Fixed const & rhs) {

	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs) {
		this->_fixedPointValue = rhs.getRawBits();
	}
	return *this;
}

int			Fixed::getRawBits(void) const {

	return (this->_fixedPointValue);
}

void		Fixed::setRawBits(int const raw) {

	this->_fixedPointValue = raw;
}

int			Fixed::toInt(void) const {

	return (this->_fixedPointValue >> _nbFractionalBits);
}

float		Fixed::toFloat(void) const {


	return (roundf(this->_fixedPointValue) / (1 << _nbFractionalBits));
}

std::ostream &	operator<<(std::ostream & lhs, Fixed const & rhs) {

	lhs << rhs.toFloat();
	return lhs;
}

int const	Fixed::_nbFractionalBits = 8;
