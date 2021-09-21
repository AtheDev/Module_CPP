/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 14:25:01 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/14 10:03:20 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <string>
# include <iostream>

class	ClapTrap {

	public:

		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & cpy);
		~ClapTrap(void);

		ClapTrap &	operator=(ClapTrap const & rhs);

		void			attack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

		std::string		getName(void) const;
		unsigned int	getAttackDamage(void) const;

	private:

		std::string		_name;
		unsigned int	_hitpoints;
		unsigned int	_energyPoint;
		unsigned int	_attackDamage;

};

#endif
