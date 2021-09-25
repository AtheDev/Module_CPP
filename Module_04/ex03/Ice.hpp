/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 14:20:52 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/09 13:17:05 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H

# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <string>
# include <iostream>

class	Ice: public AMateria {

	public:

		Ice(void);
		virtual ~Ice(void);

		virtual AMateria*	clone(void) const;
		virtual void		use(ICharacter& target);

	private:
	
		Ice &	operator=(Ice const & rhs);
		Ice(Ice const & cpy);
};

#endif