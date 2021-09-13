/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 23:55:59 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/13 13:51:48 by adupuy           ###   ########.fr       */
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
		Fixed 	operator+(Fixed const & rhs) const;
		Fixed 	operator-(Fixed const & rhs) const;
		Fixed 	operator*(Fixed const & rhs) const;
		Fixed 	operator/(Fixed const & rhs) const;

		bool	operator>(Fixed const & rhs) const;
		bool	operator<(Fixed const & rhs) const;
		bool	operator>=(Fixed const & rhs) const;
		bool	operator<=(Fixed const & rhs) const;
		bool	operator==(Fixed const & rhs) const;
		bool	operator!=(Fixed const & rhs) const;

		Fixed &	operator++(void);
		Fixed	operator++(int);
		Fixed &	operator--(void);
		Fixed	operator--(int);

		static Fixed &			min(Fixed & a, Fixed & b);
		static Fixed const &	min(Fixed const & a, Fixed const & b);
		static Fixed &			max(Fixed & a, Fixed & b);
		static Fixed const &	max(Fixed const & a, Fixed const & b);

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
