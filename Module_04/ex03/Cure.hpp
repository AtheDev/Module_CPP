/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 14:20:36 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/09 13:14:40 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H

# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <string>
# include <iostream>

class	Cure: public AMateria {

	public:

		Cure(void);
		virtual ~Cure(void);

		virtual AMateria*	clone(void) const;
		virtual void		use(ICharacter& target);
	
	private:
		Cure &	operator=(Cure const & rhs);
		Cure(Cure const & cpy);

};

#endif