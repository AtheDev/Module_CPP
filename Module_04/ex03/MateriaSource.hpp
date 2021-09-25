/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 17:15:58 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/09 12:23:05 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

# include "IMateriaSource.hpp"
# include <string>
# include <iostream>

# define MAX_SOURCE 4

class	MateriaSource: public IMateriaSource {

	public:

		MateriaSource(void);
		MateriaSource(MateriaSource const & cpy);
		virtual ~MateriaSource(void);

		MateriaSource &	operator=(MateriaSource const & rhs);

		virtual void		learnMateria(AMateria *newMateria);
		virtual AMateria *	createMateria(std::string const & type);

		void				displayInventory(std::string name) const;

	private:

		AMateria *	_source[MAX_SOURCE];
		int			_totalSource;

};

#endif