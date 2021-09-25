/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 11:29:07 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/09 13:18:19 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

# include "ICharacter.hpp"
# include <string>
# include <iostream>

class AMateria {

	protected:

		std::string	type;

	public:

		AMateria(void);
		AMateria(std::string const & type);
		virtual ~AMateria(void);

		std::string const & getType() const; //Returns the materia type

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

	private:

		AMateria(AMateria const & cpy);
		AMateria &	operator=(AMateria const & rhs);
};

#endif