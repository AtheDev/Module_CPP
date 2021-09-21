/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 16:57:22 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/15 14:22:26 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"
# include <string>
# include <iostream>

class	ScavTrap : public ClapTrap {

	public:

		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & cpy);
		~ScavTrap(void);

		ScavTrap &	operator=(ScavTrap const & rhs);

		void	attack(std::string const & target);

		void	guardGate(void) const;

	private:

};

#endif
