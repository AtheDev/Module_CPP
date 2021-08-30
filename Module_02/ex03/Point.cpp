/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 14:43:18 by adupuy            #+#    #+#             */
/*   Updated: 2021/08/30 17:21:39 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void): x(0), y(0) {

}

Point::Point(Point const & cpy): x(cpy.x), y(cpy.y) {

}

Point::Point(float const lhs, float const rhs): x(lhs), y(rhs) {

}

Point::~Point(void) {

}

Point &	Point::operator=(Point const & rhs) {

	if (this != &rhs) {
		Fixed *ptr_x = (Fixed *)&this->x;
		Fixed *ptr_y = (Fixed *)&this->y;
		*ptr_x = rhs.x;
		*ptr_y = rhs.y;
	}
	return (*this);
}

Fixed	Point::getX(void) const{

	return (this->x);
}

Fixed	Point::getY(void) const {

	return (this->y);
}
