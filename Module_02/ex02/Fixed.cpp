/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 11:42:29 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/13 14:04:34 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): _fixedPointValue(0) {

	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & cpy) {

	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
}

Fixed::Fixed(int const value) {

	std::cout << "Int constructor called" << std::endl;
	this->_fixedPointValue = (value << _nbFractionalBits);
}

Fixed::Fixed(float const value) {

	std::cout << "Float constructor called" << std::endl;
	this->_fixedPointValue = roundf(value * (1 << _nbFractionalBits));
}

Fixed::~Fixed(void) {

	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const {

	return (this->_fixedPointValue);
}

void	Fixed::setRawBits(int const raw) {

	this->_fixedPointValue = raw;
}

float	Fixed::toFloat(void) const {

	return (roundf(this->_fixedPointValue) / (1 << _nbFractionalBits));
}

int		Fixed::toInt(void) const {

	return (this->_fixedPointValue >> _nbFractionalBits);
}


/********************************/
/*********** OPERATOR ***********/
/********************************/

Fixed &	Fixed::operator=(Fixed const & rhs) {

	if (this != &rhs) {
		this->_fixedPointValue = rhs.getRawBits();
	}
	return (*this);
}

Fixed	Fixed::operator+(Fixed const & rhs) const {

	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed	Fixed::operator-(Fixed const & rhs) const {

	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed	Fixed::operator*(Fixed const & rhs) const {

	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator/(Fixed const & rhs) const {

	return (Fixed(this->toFloat() / rhs.toFloat()));
}


/***********************************/
/*********** COMPARISON ***********/
/***********************************/

bool	Fixed::operator>(Fixed const & rhs) const {

	return (this->_fixedPointValue > rhs.getRawBits());
}

bool	Fixed::operator<(Fixed const & rhs) const {

	return (this->_fixedPointValue < rhs.getRawBits());
}

bool	Fixed::operator>=(Fixed const & rhs) const {

	return (this->_fixedPointValue >= rhs.getRawBits());
}

bool	Fixed::operator<=(Fixed const & rhs) const {

	return (this->_fixedPointValue <= rhs.getRawBits());
}

bool	Fixed::operator==(Fixed const & rhs) const {

	return (this->_fixedPointValue == rhs.getRawBits());
}

bool	Fixed::operator!=(Fixed const & rhs) const {

	return (this->_fixedPointValue != rhs.getRawBits());
}


/*********************************************/
/*********** INCREMENT / DECREMENT ***********/
/*********************************************/

Fixed &	Fixed::operator++(void) {

	this->_fixedPointValue++;
	return (*this);
}

Fixed	Fixed::operator++(int) {

	Fixed	tmp(*this);
	++(*this);
	return (tmp);
}

Fixed &	Fixed::operator--(void) {

	this->_fixedPointValue--;
	return (*this);
}

Fixed	Fixed::operator--(int) {

	Fixed	tmp(*this);
	--(*this);
	return (tmp);
}


/******************************/
/*********** OTHER  ***********/
/******************************/

std::ostream &	operator<<(std::ostream & lhs, Fixed const & rhs) {

	lhs << rhs.toFloat();
	return (lhs);
}


/*****************************************************/
/*********** FUNCTION / ATTRIBUT NO MEMBER ***********/
/*****************************************************/

Fixed &			Fixed::min(Fixed & a, Fixed & b)
{
	if (a > b)
		return (b);
	return (a);
}

Fixed const &	Fixed::min(Fixed const & a, Fixed const & b)
{
	if (a > b)
		return (b);
	return (a);
}

Fixed &			Fixed::max(Fixed & a, Fixed & b)
{
	if (a < b)
		return (b);
	return (a);
}

Fixed const &	Fixed::max(Fixed const & a, Fixed const & b)
{
	if (a < b)
		return (b);
	return (a);
}

int	const	Fixed::_nbFractionalBits = 8;
