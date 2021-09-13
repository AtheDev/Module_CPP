/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 23:55:59 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/12 15:21:35 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <string>
# include <iostream>
# include <cmath>

class	Fixed {

	public:
		Fixed(void);
		Fixed(Fixed const & cpy);
		Fixed(int const value);
		Fixed(float const value);
		~Fixed(void);

		Fixed &	operator=(Fixed const & rhs);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;

	private:

		int		_fixedPointValue;

		static int const	_nbFractionalBits;

};

std::ostream &	operator<<(std::ostream & lhs, Fixed const & rhs);

#endif
