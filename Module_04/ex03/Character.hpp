/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 12:47:15 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/09 17:17:40 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <string>
# include <iostream>

# define MAX_INVENTORY 4

class	Character: public ICharacter {

	public:

		Character(void);
		Character(std::string const & name);
		Character(Character const & cpy);
		virtual ~Character(void);

		Character &	operator=(Character const & rhs);

		virtual std::string const & getName(void) const;
		virtual void				equip(AMateria* m);
		virtual void				unequip(int idx);
		virtual void				use(int idx, ICharacter& target);

		void						displayInventory(void) const;
		AMateria *					getMateria(int idx);

	private:

		std::string		_name;
		AMateria *		_inventory[MAX_INVENTORY];
		int				_totalMateria;

};

#endif