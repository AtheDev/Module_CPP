/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 12:01:58 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/11 10:14:02 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include "Weapon.hpp"
# include <string>
# include <iostream>

class	HumanA {

	public:

		HumanA(std::string name, Weapon& weapon);
		~HumanA(void);

		void	attack(void) const;

	private:

		std::string	_name;
		Weapon&		_weapon;
};

#endif
