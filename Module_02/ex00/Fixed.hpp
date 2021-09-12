/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 22:30:08 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/12 15:12:46 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class	Fixed {

	public:

		Fixed(void);
		Fixed(Fixed const & cpy);
		~Fixed(void);

		Fixed &		operator=(Fixed const & rhs);

		int			getRawBits(void) const;
		void		setRawBits(int const raw);

	private:

		int		_fixedPointValue;

		static const int	_nbFractionalBits;

};

#endif
