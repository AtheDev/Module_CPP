/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 14:25:33 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/15 15:44:34 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include <string>
# include <iostream>

class	DiamondTrap: public FragTrap, public ScavTrap {

	public:

		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const & cpy);
		~DiamondTrap(void);

		DiamondTrap &	operator=(DiamondTrap const & rhs);

		void			attack(std::string const & target) const;

		void			whoAmI(void) const;

	private:

		std::string	_name;

};

#endif
