/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 14:43:26 by adupuy            #+#    #+#             */
/*   Updated: 2021/08/30 17:21:47 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

# include "Fixed.hpp"

class	Point {

	public:

		Point(void);
		Point(Point const & cpy);
		Point(float const lhs, float const rhs);
		~Point(void);

		Point &	operator=(Point const & rhs);

		Fixed	getX(void) const;
		Fixed 	getY(void) const;

	private:

		Fixed const	x;
		Fixed const	y;
};

#endif
