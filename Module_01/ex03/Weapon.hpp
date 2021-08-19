/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 12:01:35 by adupuy            #+#    #+#             */
/*   Updated: 2021/08/18 16:14:14 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <string>

class	Weapon {

	public:

		Weapon(std::string name);
		~Weapon(void);

		std::string const &	getType(void) const;
		void				setType(std::string newType);

	private:

		std::string	_type;
};

#endif
