/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 17:09:36 by adupuy            #+#    #+#             */
/*   Updated: 2021/08/25 11:54:03 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float	posPoint(Point const p1, Point const p2, Point const point)
{
	return ((point.getX().getRawBits() - p2.getX().getRawBits())
			* (p1.getY().getRawBits() - p2.getY().getRawBits())
			- (p1.getX().getRawBits() - p2.getX().getRawBits())
			* (point.getY().getRawBits() - p2.getY().getRawBits()));
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	float	ret1, ret2, ret3;

	ret1 = posPoint(a, b, point);
	ret2 = posPoint(b, c, point);
	ret3 = posPoint(c, a, point);

	if ((ret1 < 0.0f) && (ret2 < 0.0f) && (ret3 < 0.0f))
		return true;
	return false;
}
