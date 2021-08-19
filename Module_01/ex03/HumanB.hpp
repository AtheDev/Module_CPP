/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 12:02:20 by adupuy            #+#    #+#             */
/*   Updated: 2021/08/18 16:14:46 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

# include "Weapon.hpp"
#include <string>

class	HumanB {

	public:

		HumanB(std::string name);
		~HumanB(void);

		void			attack(void) const;
		void			setWeapon(Weapon& weapon);

	private:

		std::string	_name;
		Weapon*		_weapon;
};

#endif
